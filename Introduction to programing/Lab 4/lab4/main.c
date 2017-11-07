//
//  main.c
//  lab4
//
//  Created by Mieszko Wawrzyniak on 25/10/2017.
//  Copyright © 2017 Mieszko Wawrzyniak. All rights reserved.
//

#include <stdio.h>

#include "const.h"
#include "bool.h"
#include "token_functions.h"

#include <ctype.h>

int main(int argc, const char * argv[]) {
//    // next_word test
//    char word[LINE_LEN];
//    bool k;
//
//    k = next_word(word, LINE_LEN);
//    printf("Return: %d\nWord: %s\n", k, word);
//
//    // next_name test
//    char name[LINE_LEN];
//    bool k;
//
//    k = next_name(name, LINE_LEN);
//    printf("Return: %d\nName: %s\n", k, name);
//
//    // next_int test
//    char str[LINE_LEN];
//    bool k;
//
//    k = next_int(str, LINE_LEN);
//    printf("Return: %d\nInt: %s\n", k, str);
//
//    // next_int float
//    char str[LINE_LEN];
//    bool k;
//
//    k = next_float(str, LINE_LEN);
//    printf("Return: %d\nFloat: %s\n", k, str);
  
      // next_int phone number
      char str[LINE_LEN];
      bool k;
  
      k = next_phone_num(str, LINE_LEN);
      printf("Return: %d\nNumber: %s\n", k, str);

  
    return 0;
}
