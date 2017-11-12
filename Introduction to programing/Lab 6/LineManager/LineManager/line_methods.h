//
//  line_methods.h
//  LineManager
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#ifndef line_methods_h
#define line_methods_h

#include <stdio.h>
#include <ctype.h>

/**
 Makes all characters in given line lowercase.

 @param line Input line
 */
void line_to_lowercase(char *line);

/**
 Make all characters in given line uppercase.

 @param line Input line
 */
void line_to_uppercase(char *line);

/**
 Switchs the case of all characters that is change lower case to upper
 case and vice versa.

 @param line Input line
 */
void line_swap(char *line);

/**
 Make the first character uppercaase and the rest lowercase

 @param line Input line
 */
void line_to_sentence(char *line);

#endif /* line_methods_h */
