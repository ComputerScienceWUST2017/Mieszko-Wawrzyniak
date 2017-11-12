//
//  config.h
//  RangeSelection
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#ifndef config_h
#define config_h

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 Running mode
 
 This enum determinates mode which should be used in order to
 run the application.
 */
typedef enum {
    rm_line_begins,
    rm_line_begins_in_range,
    rm_first_word_begins_with,
    rm_first_word_ends_with
} running_mode;

/**
 Application config
 */
typedef struct {
    bool case_sensitive;
    char *arg1;
    char *arg2;
    running_mode rm;
    
} config;



/**
 config's constructor.

 @return New config
 */
config new_config(void);

/**
 Reads config from given parameters and sets it to the given object.

 @param conf Given config object
 @param argc Number of arguments
 @param argv Arguments
 */
void set_config(config *conf, int argc, char * argv[]);

/**
 Prints user freandly usage message :v
 */
void print_usage(void);

/**
 Checks if given string is "-"

 @param str Input string
 @return Indicator
 */
bool _is_dash(const char *str);

#endif /* config_h */
