//
//  counter.c
//  CharCount
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include "counter.h"

void count(int *chars) {
    int c;
    
    for (int i = 0; i < 256; ++i) {
        chars[i] = 0;
    }
    
    while (EOF != (c = getchar())) {
        chars[c]++;
    }
}

int find_best(int *chars) {
    int best = 0;
    int score = 0;
    
    for (int i = 0; i < 256; ++i) {
        if (chars[i] > score) {
            best = i;
            score = chars[i];
        }
    }
    
    return best;
}

int find_worst(int *chars) {
    int worst = 0;
    int score = INT_MAX;
    
    for (int i = 0; i < 256; ++i) {
        if (chars[i] > 0 && chars[i] < score) {
            worst = i;
            score = chars[i];
        }
    }
    
    return worst;
}

