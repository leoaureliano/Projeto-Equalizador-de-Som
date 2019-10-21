/* --- Generated the 21/10/2019 at 10:51 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#ifndef SOM_TYPES_H
#define SOM_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "main_controller.h"
typedef enum {
  Som__St_9_Rock,
  Som__St_9_Regue,
  Som__St_9_POP,
  Som__St_9_Off,
  Som__St_9_Indie,
  Som__St_9_Funk,
  Som__St_9_Electronic,
  Som__St_9_Classic
} Som__st_9;

Som__st_9 Som__st_9_of_string(char* s);

char* string_of_Som__st_9(Som__st_9 x, char* buf);

typedef enum {
  Som__St_8_Off,
  Som__St_8_ON
} Som__st_8;

Som__st_8 Som__st_8_of_string(char* s);

char* string_of_Som__st_8(Som__st_8 x, char* buf);

typedef enum {
  Som__St_7_Off,
  Som__St_7_ON
} Som__st_7;

Som__st_7 Som__st_7_of_string(char* s);

char* string_of_Som__st_7(Som__st_7 x, char* buf);

typedef enum {
  Som__St_6_Off,
  Som__St_6_ON
} Som__st_6;

Som__st_6 Som__st_6_of_string(char* s);

char* string_of_Som__st_6(Som__st_6 x, char* buf);

typedef enum {
  Som__St_5_Mid,
  Som__St_5_Low,
  Som__St_5_High
} Som__st_5;

Som__st_5 Som__st_5_of_string(char* s);

char* string_of_Som__st_5(Som__st_5 x, char* buf);

typedef enum {
  Som__St_4_Mid,
  Som__St_4_Low,
  Som__St_4_High
} Som__st_4;

Som__st_4 Som__st_4_of_string(char* s);

char* string_of_Som__st_4(Som__st_4 x, char* buf);

typedef enum {
  Som__St_3_Mid,
  Som__St_3_Low,
  Som__St_3_High
} Som__st_3;

Som__st_3 Som__st_3_of_string(char* s);

char* string_of_Som__st_3(Som__st_3 x, char* buf);

typedef enum {
  Som__St_2_Rock,
  Som__St_2_Regue,
  Som__St_2_POP,
  Som__St_2_Off,
  Som__St_2_Indie,
  Som__St_2_Funk,
  Som__St_2_Electronic,
  Som__St_2_Classic
} Som__st_2;

Som__st_2 Som__st_2_of_string(char* s);

char* string_of_Som__st_2(Som__st_2 x, char* buf);

typedef enum {
  Som__St_1_Mid,
  Som__St_1_Low,
  Som__St_1_High
} Som__st_1;

Som__st_1 Som__st_1_of_string(char* s);

char* string_of_Som__st_1(Som__st_1 x, char* buf);

typedef enum {
  Som__St_Off,
  Som__St_ON
} Som__st;

Som__st Som__st_of_string(char* s);

char* string_of_Som__st(Som__st x, char* buf);

#endif // SOM_TYPES_H
