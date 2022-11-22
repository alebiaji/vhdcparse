#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/callback.hpp"

using namespace vhdcparse;

int main(int argc, char **argv) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s filename.sdc\n", argv[0]);
        fprintf(stderr, "\n");
        fprintf(stderr, "Reads in an SDC file into internal data structures\n");
        fprintf(stderr, "and then prints it out\n");
        exit(1);
    }

    PrintCallback callback;
    sdc_parse_filename(argv[1], callback);

    if(callback.error()) {
        return 1;
    }
    return 0;
}