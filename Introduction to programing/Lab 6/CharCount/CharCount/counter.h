//
//  counter.h
//  CharCount
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#ifndef counter_h
#define counter_h

#include <stdio.h>
#include <limits.h>

/**
 Counts all characters and places results in input array.

 @param chars Input array
 */
void count(int *chars);

/**
 Finds the most often appearing character in input array.

 @param chars Input array.
 */
int find_best(int *chars);

/**
 Finds the less often appearing character in input array.
 
 @param chars Input array.
 */
int find_worst(int *chars);

#endif /* counter_h */
