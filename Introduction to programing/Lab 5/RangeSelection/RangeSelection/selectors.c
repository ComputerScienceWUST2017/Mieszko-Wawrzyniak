//
//  selectors.c
//  RangeSelection
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include "selectors.h"

void run_with(bool (*mode)(const config *conf, const char *line), const config *conf) {
    char line[LINE_LEN];
    
    while (fgets(line, LINE_LEN, stdin)) {
        if ((*mode)(conf, line)) { // If lines fulfill expectations
            printf("\t%s", line);
        }
    }
}

bool line_begins(const config *conf, const char *line) {
    char *pattern = conf->arg1;
    
    return (strncmp(pattern, line, strlen(pattern)) == 0);
}

// Not implemented
bool line_begins_in_range(const config *conf, const char *line) {
    return true;
}

// Not implemented
bool first_word_begins_with(const config *conf, const char *line) {
    return true;
}

// Not implemented
bool first_word_ends_with(const config *conf, const char *line) {
    return true;
}




void get_first_word(const char *line, char *word, int len) {
    int i;
    
    for (i = 0; i < len - 1; ++i) {
        if (isspace(line[i])) {
            word[i] = 0;
            break;
        }
        
        word[i] = line[i];
    }
    
    // Overflow guard
    if (i == len - 1) {
        word[++i] = 0;
    }
}

bool in_range(const int num, const int begin, const int end) {
    return (num >= begin && num <= end);
}