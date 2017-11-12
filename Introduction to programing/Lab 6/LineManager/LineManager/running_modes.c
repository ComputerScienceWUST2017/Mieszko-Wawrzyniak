//
//  running_modes.c
//  LineManager
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include "running_modes.h"

void run_with(void (*mode)(char*) ) {
  char line[LINE_LEN];
  
  while (fgets(line, LINE_LEN, stdin)) {
    (*mode)(line);
    printf("%s", line);
  }
}
