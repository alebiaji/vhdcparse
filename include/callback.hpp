#ifndef __CALLBACK_HPP__
#define __CALLBACK_HPP__

#include <iostream>
#include "../include/vhdcparse.hpp"

using namespace vhdcparse;

#define VHDC vhdcparse

void print_string_group(const StringGroup& group);
void print_from_to_group(const StringGroup& from, const StringGroup& to);

class PrintCallback : public Callback {
private:
    std::string filename_ = "";
    int lineno_ = 0;
    bool error_ = false;

public:
    PrintCallback(/* args */) {}
    // ~PrintCallback() {}

    //Start of parsing
    void start_parse() { }

    //Sets current filename
    void filename(std::string fname) { filename_ = fname; }

    //Sets current line number
    void lineno(int line_num) { lineno_ = line_num; }

    void create_clock           (const CreateClock&         cmd);
    void set_io_delay           (const SetIoDelay&          cmd);
    void set_clock_groups       (const SetClockGroups&      cmd);
    void set_false_path         (const SetFalsePath&        cmd);
    void set_min_max_delay      (const SetMinMaxDelay&      cmd);
    void set_multicycle_path    (const SetMulticyclePath&   cmd);
    void set_clock_uncertainty  (const SetClockUncertainty& cmd);
    void set_clock_latency      (const SetClockLatency&     cmd);
    void set_disable_timing     (const SetDisableTiming&    cmd);
    void set_timing_derate      (const SetTimingDerate&     cmd);
    void current_design         (const CurrentDesign&       cmd);
    // void clock                  (const Clock&               cmd);

    //End of parsing
    void finish_parse() { }

    //Error during parsing
    void parse_error(const int curr_lineno, const std::string& near_text, const std::string& msg);

    bool error() { return error_; }

    // sdc/sgdc file begin parse
    void BeginParse(std::string filename) { sdc_parse_filename(filename, *this); }
};

#endif