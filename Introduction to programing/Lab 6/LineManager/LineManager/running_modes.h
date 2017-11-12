//
//  running_modes.h
//  LineManager
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#ifndef running_modes_h
#define running_modes_h

#include <stdio.h>

#include "consts.h"
#include "line_methods.h"

void run_with(void (*mode)(char*) );

#endif /* running_modes_h */
