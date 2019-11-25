<<<<<<< HEAD
/* --- Generated the 24/11/2019 at 23:16 --- */
=======
/* --- Generated the 18/11/2019 at 9:15 --- */
>>>>>>> 05b5256ae5305638d8072e36502413e69e00f23d
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#ifndef SOM_TYPES_H
#define SOM_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "main_controller.h"
typedef enum {
  Som__St_12_Rock,
  Som__St_12_Regue,
  Som__St_12_POP,
  Som__St_12_Off,
  Som__St_12_Indie,
  Som__St_12_Funk,
  Som__St_12_Electronic,
  Som__St_12_Classic
} Som__st_12;

Som__st_12 Som__st_12_of_string(char* s);

char* string_of_Som__st_12(Som__st_12 x, char* buf);

typedef enum {
  Som__St_11_Off,
  Som__St_11_ON
} Som__st_11;

Som__st_11 Som__st_11_of_string(char* s);

char* string_of_Som__st_11(Som__st_11 x, char* buf);

typedef enum {
  Som__St_10_Off,
  Som__St_10_ON
} Som__st_10;

Som__st_10 Som__st_10_of_string(char* s);

char* string_of_Som__st_10(Som__st_10 x, char* buf);

typedef enum {
  Som__St_9_Off,
  Som__St_9_ON
} Som__st_9;

Som__st_9 Som__st_9_of_string(char* s);

char* string_of_Som__st_9(Som__st_9 x, char* buf);

typedef enum {
  Som__St_8_Verylow,
  Som__St_8_Veryhigh,
  Som__St_8_Mid,
  Som__St_8_Low,
  Som__St_8_High
} Som__st_8;

Som__st_8 Som__st_8_of_string(char* s);

char* string_of_Som__st_8(Som__st_8 x, char* buf);

typedef enum {
  Som__St_7_Verylow,
  Som__St_7_Veryhigh,
  Som__St_7_Mid,
  Som__St_7_Low,
  Som__St_7_High
} Som__st_7;

Som__st_7 Som__st_7_of_string(char* s);

char* string_of_Som__st_7(Som__st_7 x, char* buf);

typedef enum {
  Som__St_6_Verylow,
  Som__St_6_Veryhigh,
  Som__St_6_Mid,
  Som__St_6_Low,
  Som__St_6_High
} Som__st_6;

Som__st_6 Som__st_6_of_string(char* s);

char* string_of_Som__st_6(Som__st_6 x, char* buf);

typedef enum {
  Som__St_5_Verylow,
  Som__St_5_Veryhigh,
  Som__St_5_Mid,
  Som__St_5_Low,
  Som__St_5_High
} Som__st_5;

Som__st_5 Som__st_5_of_string(char* s);

char* string_of_Som__st_5(Som__st_5 x, char* buf);

typedef enum {
  Som__St_4_NaoMadrugada,
  Som__St_4_Madrugada
} Som__st_4;

Som__st_4 Som__st_4_of_string(char* s);

char* string_of_Som__st_4(Som__st_4 x, char* buf);

typedef enum {
  Som__St_3_Rock,
  Som__St_3_Regue,
  Som__St_3_POP,
  Som__St_3_Off,
  Som__St_3_Indie,
  Som__St_3_Funk,
  Som__St_3_Electronic,
  Som__St_3_Classic
} Som__st_3;

Som__st_3 Som__st_3_of_string(char* s);

char* string_of_Som__st_3(Som__st_3 x, char* buf);

typedef enum {
  Som__St_2_Verylow,
  Som__St_2_Veryhigh,
  Som__St_2_Mid,
  Som__St_2_Low,
  Som__St_2_High
} Som__st_2;

Som__st_2 Som__st_2_of_string(char* s);

char* string_of_Som__st_2(Som__st_2 x, char* buf);

typedef enum {
  Som__St_1_NaoMadrugada,
  Som__St_1_Madrugada
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
