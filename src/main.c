#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "sdc.h"

using namespace sdcparse;

void print_string_group(std::shared_ptr<StringGroup> group) {
    const char *start_token, *end_token;
    if(group->group_type == StringGroupType::STRING) {
        start_token = "{";
        end_token   = "}";

    } else if (group->group_type == StringGroupType::CLOCK) {
        start_token = "[get_clocks {";
        end_token   = "}]";

    } else if (group->group_type == StringGroupType::PORT) {
        start_token = "[get_ports {";
        end_token   = "}]";

    } else {
        printf("Unsupported sdc string group type\n");
        exit(1);
    }

    printf("%s", start_token);
    for(const auto& string : group->strings) {
        printf("%s ", string.c_str());
    }
    printf("%s", end_token);
}

void print_from_to_group(std::shared_ptr<StringGroup> from, std::shared_ptr<StringGroup> to) {
    printf("-from ");
    print_string_group(from);
    printf(" -to ");
    print_string_group(to);
}

/*
 * Error handling
 */
#ifdef SDC_CUSTOM_ERROR_REPORT
void sdc_error(const int line_no, const char* near_text, const char* fmt, ...) {
    fprintf(stderr, "Custom SDC Error line %d near '%s': ", line_no, near_text);
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);
    exit(1);
}
#endif

int main(int argc, char **argv) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s filename.sdc\n", argv[0]);
        fprintf(stderr, "\n");
        fprintf(stderr, "Reads in an SDC file into internal data structures\n");
        fprintf(stderr, "and then prints it out\n");
        exit(1);
    }

    /*printf("File: %s\n", argv[1]);*/

    //Parse the file
    auto sdc_commands = sdc_parse_filename(argv[1]);



    //Print out the commands
    for(const auto sdc_create_clock : sdc_commands->create_clock_cmds) {
        printf("Line %3d: ", sdc_create_clock->file_line_number);
        if(sdc_create_clock->is_virtual) {
            printf("create_clock -period %f -waveform {%f %f} -name %s\n",
                    sdc_create_clock->period,
                    sdc_create_clock->rise_edge,
                    sdc_create_clock->fall_edge,
                    sdc_create_clock->name.c_str());
        } else {
            printf("create_clock -period %f -waveform {%f %f} ",
                    sdc_create_clock->period,
                    sdc_create_clock->rise_edge,
                    sdc_create_clock->fall_edge);
            print_string_group(sdc_create_clock->targets);
            printf("\n");
        }
    }

    for(const auto sdc_set_input_delay : sdc_commands->set_input_delay_cmds) {
        printf("Line %3d: ", sdc_set_input_delay->file_line_number);
        printf("set_input_delay -clock %s -max %f ", 
                    sdc_set_input_delay->clock_name.c_str(),
                    sdc_set_input_delay->max_delay);
        print_string_group(sdc_set_input_delay->target_ports);
        printf("\n");
    }

    for(const auto sdc_set_output_delay : sdc_commands->set_output_delay_cmds) {
        printf("Line %3d: ", sdc_set_output_delay->file_line_number);
        printf("set_output_delay -clock %s -max %f ", 
                    sdc_set_output_delay->clock_name.c_str(),
                    sdc_set_output_delay->max_delay);
        print_string_group(sdc_set_output_delay->target_ports);
        printf("\n");
    }

    for(const auto sdc_set_clock_groups : sdc_commands->set_clock_groups_cmds) {
        printf("Line %3d: ", sdc_set_clock_groups->file_line_number);
        printf("set_clock_groups ");
        if(sdc_set_clock_groups->type == ClockGroupsType::EXCLUSIVE) {
            printf(" -exclusive");
        }
        for(const auto& clk_grp : sdc_set_clock_groups->clock_groups) {
            printf(" -group ");
            print_string_group(clk_grp);
        }
        printf("\n");
    }

    for(const auto sdc_set_false_path : sdc_commands->set_false_path_cmds) {
        printf("Line %3d: ", sdc_set_false_path->file_line_number);
        printf("set_false_path ");
        print_from_to_group(sdc_set_false_path->from, sdc_set_false_path->to);
        printf("\n");
    }

    for(const auto sdc_set_max_delay : sdc_commands->set_max_delay_cmds) {
        printf("Line %3d: ", sdc_set_max_delay->file_line_number);
        printf("set_max_delay %f ", sdc_set_max_delay->max_delay);
        print_from_to_group(sdc_set_max_delay->from, sdc_set_max_delay->to);
        printf("\n");
    }

    for(const auto sdc_set_multicycle_path : sdc_commands->set_multicycle_path_cmds) {
        printf("Line %3d: ", sdc_set_multicycle_path->file_line_number);
        printf("set_multicycle_path %d ", sdc_set_multicycle_path->mcp_value);
        if(sdc_set_multicycle_path->type == McpType::SETUP) {
            printf("-setup ");
        }
        print_from_to_group(sdc_set_multicycle_path->from, sdc_set_multicycle_path->to);
        printf("\n");
    }

    return 0;
}
