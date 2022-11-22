#ifndef __CALLBACK_HPP__
#define __CALLBACK_HPP__

#include <iostream>
#include "../include/sdcparse.hpp"

using namespace vhdcparse;

#define VHDC vhdcparse

void print_string_group(const StringGroup& group);
void print_from_to_group(const StringGroup& from, const StringGroup& to);

class PrintCallback : public Callback {
public:
    //Start of parsing
    void start_parse() override { }

    //Sets current filename
    void filename(std::string fname) override { filename_ = fname; }

    //Sets current line number
    void lineno(int line_num) override { lineno_ = line_num; }

    void create_clock           (const CreateClock&         cmd) override;
    void set_io_delay           (const SetIoDelay&          cmd) override;
    void set_clock_groups       (const SetClockGroups&      cmd) override;
    void set_false_path         (const SetFalsePath&        cmd) override;
    void set_min_max_delay      (const SetMinMaxDelay&      cmd) override;
    void set_multicycle_path    (const SetMulticyclePath&   cmd) override;
    void set_clock_uncertainty  (const SetClockUncertainty& cmd) override;
    void set_clock_latency      (const SetClockLatency&     cmd) override;
    void set_disable_timing     (const SetDisableTiming&    cmd) override;
    void set_timing_derate      (const SetTimingDerate&     cmd) override;
    void current_design         (const CurrentDesign&       cmd) override;

    //End of parsing
    void finish_parse() override { }

    //Error during parsing
    void parse_error(const int curr_lineno, const std::string& near_text, const std::string& msg) override;

    bool error() { return error_; }

private:
    std::string filename_ = "";
    int lineno_ = 0;
    bool error_ = false;

};

#endif