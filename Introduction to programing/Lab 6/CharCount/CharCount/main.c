//
//  main.c
//  CharCount
//
//  Created by Mieszko Wawrzyniak on 12/11/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

#include "counter.h"

int main(int argc, char * argv[]) {
  int chars[256];
  int c;
  
  count(chars);
  
  switch (getopt(argc, argv, "MLh")) {
    case 'L':
      c = find_worst(chars);
      break;
      
    case 'M':
      c = find_best(chars);
      break;
      
    case '?': case 'h':
      puts("Usage: ");
      puts("\t-M The most populat character [default]");
      puts("\t-L The least popular character");
      puts("\t-h Shows this message");
      return 0;
      break;
    
    default:
      c = find_best(chars);
      break;
  }
  
  
  printf("%c %d\n", c, c);
  
  return 0;

}
