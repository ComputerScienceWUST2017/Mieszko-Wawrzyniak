//
//  main.c
//  RangeSelection
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include <stdio.h>

#include "config.h"
#include "selectors.h"

int main(int argc, char * argv[]) {
    config conf = new_config();
    set_config(&conf, argc, argv);
    
    switch (conf.rm) {
        case rm_line_begins:
            run_with(line_begins, &conf);
            break;
            
        case rm_line_begins_in_range:
            run_with(line_begins_in_range, &conf);
            break;
            
        case rm_first_word_begins_with:
            run_with(first_word_begins_with, &conf);
            break;
        case rm_first_word_ends_with:
            run_with(first_word_ends_with, &conf);
            break;
    }
    
    return 0;
}
