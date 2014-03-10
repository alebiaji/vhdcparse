#ifndef SDC_H
#define SDC_H
/*
 * libsdcparse (c) Kevin E. Murray 2014
 *
 * OVERVIEW
 * --------------------------
 * This library provides basic parsing capabilities for a subset of commands in
 * Synopsys Design Constraint (SDC) files.  SDC files are typically used to 
 * set timing constraints on digital circuits.
 *
 * USING THIS LIBRARY
 * --------------------------
 * Since this is NOT a full TCL interpreter, 'function calls' to get_ports or
 * get_clocks, are converted to t_sdc_port_group and t_sdc_clock_group 
 * respectively. That is, they are represetned as the sets of the strings passed
 * to those functions.  It is left up to the application to interpret them.
 *
 * After parsing, each SDC command is represented as a C struct.  Typically each
 * command is parsed into its unique struct, however some closely related commands
 * (such as set_input_delay and set_output_delay) may share a struct and be identified
 * by a 'type' field in the struct.
 *
 * All supported SDC commands are collected into a t_sdc_commands struct which
 * represents the entire SDC file.
 *
 * See the associated main.c for example usage.
 *
 * EXTENDING THE LIBRARY
 * --------------------------
 * The parser uses a lexer generated by 'flex' (see sdc_parse.l), and a parser
 * generated by 'bison' (see sdc_parse.y).
 *
 * While the parser currently supports only a subset of the full SDC specification,
 * it should be relatively straightforward to extend it as follows:
 *
 *      1) To add a new option to an existing command
 *          a) Add the new token definition to sdc_parse.y (e.g. ARG_HOLD)
 *          b) Add a pattern to sdc_parse.l which returns the token (e.g. '-hold')
 *          c) Add a new (optional) rule to the appropriate command in sdc_parse.y
 *          d) Add an action for the added rule which makes the appropriate
 *             modifications to the command's struct.  It likely that you will
 *             want to do this as a function call and put the function definition
 *             in sdc_common.c. If the option may conflict with others it is
 *             typically checked here, with errors reported using sdc_error().
 *          e) The command is automatically added using the appropriate add_sdc*()
 *             function, which also verifies the options.  Command level consistency
 *             checks (e.g. option required) typically go here.
 *
 *      2) To add a new command
 *          a) Add the new token definition to sdc_parse.y (e.g. CMD_SET_TIME_FORMAT)
 *          b) Add a pattern to sdc_parse.l which returns the token (e.g. 'set_time_format')
 *          c) Add a new rule for the command to sdc_parse.y e.g.:
 *                cmd_set_time_format: CMD_SET_INPUT_DELAY
 *          d) Create a new C struct to represent the command, and write an alloc function
 *             (in sdc_common.c) that is called by the first rule e.g.:
 *                cmd_set_time_format: CMD_SET_INPUT_DELAY {$$ = alloc_sdc_set_time_units();}
 *          c) Add options to the command as outlined in (1)
 *          d) Create an add command and extend the s_sdc_commands struct to include the new
 *             command.  Call it in the top level sdc_commands rule e.g.:
 *
 *                sdc_commands: ...
 *                   | ... //Other commands
 *                   | sdc_commands cmd_set_time_format EOL {$$ = add_sdc_set_time_format($1, $2); }
 *
 */


/*
 * Forward declarations
 */
typedef struct s_sdc_commands t_sdc_commands;

typedef struct s_sdc_create_clock t_sdc_create_clock;
typedef struct s_sdc_set_io_delay t_sdc_set_io_delay;
typedef struct s_sdc_set_clock_groups t_sdc_set_clock_groups;
typedef struct s_sdc_set_false_path t_sdc_set_false_path;
typedef struct s_sdc_set_max_delay t_sdc_set_max_delay;
typedef struct s_sdc_set_multicycle_path t_sdc_set_multicycle_path;

typedef struct s_sdc_string_group t_sdc_string_group;

/*
 * Enumerations to describe specific SDC command types
 */
typedef enum e_sdc_io_delay_type {SDC_INPUT_DELAY, SDC_OUTPUT_DELAY} t_sdc_io_delay_type;
typedef enum e_sdc_clock_groups_type {SDC_CG_NONE, SDC_CG_EXCLUSIVE} t_sdc_clock_groups_type;
typedef enum e_sdc_to_from_dir {SDC_TO, SDC_FROM} t_sdc_to_from_dir;
typedef enum e_sdc_mcp_type {SDC_MCP_NONE, SDC_MCP_SETUP} t_sdc_mcp_type;
typedef enum e_sdc_string_group_type {SDC_STRING, SDC_PORT, SDC_CLOCK} t_sdc_string_group_type;

/*
 * Collection of SDC commands
 */
struct s_sdc_commands {
    bool has_commands;                                      //Indicates whether any sdc commands were found

    int num_create_clock_cmds;                              //Number of create_clock commands
    t_sdc_create_clock** create_clock_cmds;                 //Array of create_clock commands [0..num_create_clock_cmds-1]

    int num_set_input_delay_cmds;                           //Number of set_input_delay commands
    t_sdc_set_io_delay** set_input_delay_cmds;              //Array of set_input_delay commands [0..num_set_input_delay_cmds-1]

    int num_set_output_delay_cmds;                          //Number of set_output_delay commands
    t_sdc_set_io_delay** set_output_delay_cmds;             //Array of set_output_delay commands [0..num_set_output_delay_cmds-1]

    int num_set_clock_groups_cmds;                          //Number of set_clock_groups commands
    t_sdc_set_clock_groups** set_clock_groups_cmds;         //Array of set_clock_groups commands [0..num_set_clock_groups_cmds-1]

    int num_set_false_path_cmds;                            //Number of set_false_path commands
    t_sdc_set_false_path** set_false_path_cmds;             //Array of set_false_path commands [0..num_set_false_path_cmds-1]

    int num_set_max_delay_cmds;                             //Number of set_max_delay commands
    t_sdc_set_max_delay** set_max_delay_cmds;               //Array of set_max_delay commands [0..num_set_max_delay_cmds-1]

    int num_set_multicycle_path_cmds;                       //Number of set_multicycle_path commands
    t_sdc_set_multicycle_path** set_multicycle_path_cmds;   //Array of set_multicycle_path commands [0..num_set_multicycle_path_cmds-1]
};

/*
 * Common SDC data structures
 */

struct s_sdc_string_group {
    t_sdc_string_group_type group_type; //The type of the string group, default is STRING. 
                                        //Groups derived from 'calls' to [get_clocks {..}] 
                                        //and [get_ports {..}] will have types CLOCK and PORT
                                        //respectively.
    int num_strings;    //Number of strings in this group
    char** strings;     //Array of ports names [0..num_strings-1]. 
                        //May be exact string matches or regexs.
};

/*
 * Structures defining different SDC commands
 */
struct s_sdc_create_clock {
    double period;      //Clock period
    char* name;         //Name of the clock
    double rise_edge;   //Rise time from waveform definition
    double fall_edge;   //Fall time from waveform definition
    t_sdc_string_group* targets; //The set of strings indicating clock sources.
                        //May be explicit strings or regexs.
    bool is_virtual;    //Identifies this as a virtual (non-netlist) clock

    int file_line_number; //Line number where this command is defined
};

struct s_sdc_set_io_delay {
    t_sdc_io_delay_type type;
    char* clock_name;   //Name of the clock this constraint is associated with
    double max_delay;   //The maximum input delay allowed on the target ports
    t_sdc_string_group* target_ports; //The target ports

    int file_line_number; //Line number where this command is defined
};

struct s_sdc_set_clock_groups {
    t_sdc_clock_groups_type type;     //The type of clock group relation being specified
    int num_clock_groups;                  //The number of clock groups (must be >= 2)  
    t_sdc_string_group** clock_groups; //The array of clock groups [0..num_clock_groups-1]

    int file_line_number; //Line number where this command is defined
};

struct s_sdc_set_false_path {
    t_sdc_string_group* from;    //The source list of startpoints or clocks
    t_sdc_string_group* to;      //The target list of endpoints or clocks

    int file_line_number; //Line number where this command is defined
};

struct s_sdc_set_max_delay {
    double max_delay;               //The maximum allowed delay between the from
                                    //and to clocks
    t_sdc_string_group* from;  //The source list of startpoints or clocks
    t_sdc_string_group* to;    //The target list of endpoints or clocks

    int file_line_number; //Line number where this command is defined
};

struct s_sdc_set_multicycle_path {
    t_sdc_mcp_type type;            //The type of the mcp
    int mcp_value;                  //The number of cycles specifed
    t_sdc_string_group* from;  //The source list of startpoints or clocks
    t_sdc_string_group* to;    //The target list of endpoints or clocks

    int file_line_number; //Line number where this command is defined
};

/*
 *  Externally useful functions
 */
t_sdc_commands* sdc_parse_filename(char* filename);
t_sdc_commands* sdc_parse_file(FILE* sdc);

void sdc_parse_cleanup();

#endif
