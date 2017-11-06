//
//  simple.h
//  LinesWith
//
//  Created by Mieszko Wawrzyniak on 04/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#ifndef simple_h
#define simple_h

#include <stdio.h>

#include "bool.h"

#define LINE_LEN 256

void lines_with(char c);
bool contains(const char c, char *line);

#endif /* simple_h */
