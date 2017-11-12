//
//  line_methods.c
//  LineManager
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include "line_methods.h"

void line_to_lowercase(char *line) {
    for (int i = 0; line[i]; ++i) {
        line[i] = tolower(line[i]);
    }
}

void line_to_uppercase(char *line) {
    for (int i = 0; line[i]; ++i) {
        line[i] = toupper(line[i]);
    }
}

void line_swap(char *line) {
    for (int i = 0; line[i]; ++i) {
        if (islower(line[i])) {
            line[i] = toupper(line[i]);
        }
        else {
            line[i] = tolower(line[i]);
        }
    }
}

void line_to_sentence(char *line) {
    for (int i = 0; line[i]; ++i) {
        if (i == 0) {
            line[i] = toupper(line[i]);
        }
        else {
            line[i] = tolower(line[i]);
        }
    }
}
