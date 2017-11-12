//
//  config.c
//  RangeSelection
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include "config.h"

config new_config() {
    config c;
    
    c.case_sensitive = true;
    c.arg1 = "";
    c.arg2 = "";
    
    return c;
}

void set_config(config *conf, int argc, char * argv[]) {
    char c;
    int non_flags_arguments = 0;
    
    while (optind < argc) {
        if (-1 != (c = getopt(argc, argv, "ih"))) {
            switch (c) {
                case 'i':
                    conf->case_sensitive = false;
                    break;
                    
                case '?': case 'h':
                    print_usage();
                    break;
            }
        }
        else { // Read non flag arguments
            non_flags_arguments++;
            
            switch (non_flags_arguments) {
                case 1:
                    conf->arg1 = argv[optind];
                    break;
                    
                case 2:
                    conf->arg2 = argv[optind];
                    break;
                    
                default:
                    print_usage();
                    break;
            }
            
            optind++;
        }
    }
    
    if (non_flags_arguments == 1) {
        conf->rm = rm_line_begins;
    }
    else if (non_flags_arguments == 2) {
        if (_is_dash(conf->arg1)) {
            conf->rm = rm_first_word_begins_with;
        }
        else if (_is_dash(conf->arg2)) {
            conf->rm = rm_first_word_ends_with;
        }
        else {
            conf->rm = rm_line_begins_in_range;
        }
    }
}

void print_usage() {
    puts("Usage:");
    puts("\t-i Not case sensitive");
    puts("\t-h Prints this message");
    exit(0);
}

bool _is_dash(const char *str) {
    return (strlen(str) == 1 && str[0] == '-');
}
