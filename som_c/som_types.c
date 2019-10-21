/* --- Generated the 21/10/2019 at 10:51 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "som_types.h"

Som__st_9 Som__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Rock")==0)) {
    return Som__St_9_Rock;
  };
  if ((strcmp(s, "St_9_Regue")==0)) {
    return Som__St_9_Regue;
  };
  if ((strcmp(s, "St_9_POP")==0)) {
    return Som__St_9_POP;
  };
  if ((strcmp(s, "St_9_Off")==0)) {
    return Som__St_9_Off;
  };
  if ((strcmp(s, "St_9_Indie")==0)) {
    return Som__St_9_Indie;
  };
  if ((strcmp(s, "St_9_Funk")==0)) {
    return Som__St_9_Funk;
  };
  if ((strcmp(s, "St_9_Electronic")==0)) {
    return Som__St_9_Electronic;
  };
  if ((strcmp(s, "St_9_Classic")==0)) {
    return Som__St_9_Classic;
  };
}

char* string_of_Som__st_9(Som__st_9 x, char* buf) {
  switch (x) {
    case Som__St_9_Rock:
      strcpy(buf, "St_9_Rock");
      break;
    case Som__St_9_Regue:
      strcpy(buf, "St_9_Regue");
      break;
    case Som__St_9_POP:
      strcpy(buf, "St_9_POP");
      break;
    case Som__St_9_Off:
      strcpy(buf, "St_9_Off");
      break;
    case Som__St_9_Indie:
      strcpy(buf, "St_9_Indie");
      break;
    case Som__St_9_Funk:
      strcpy(buf, "St_9_Funk");
      break;
    case Som__St_9_Electronic:
      strcpy(buf, "St_9_Electronic");
      break;
    case Som__St_9_Classic:
      strcpy(buf, "St_9_Classic");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_8 Som__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Off")==0)) {
    return Som__St_8_Off;
  };
  if ((strcmp(s, "St_8_ON")==0)) {
    return Som__St_8_ON;
  };
}

char* string_of_Som__st_8(Som__st_8 x, char* buf) {
  switch (x) {
    case Som__St_8_Off:
      strcpy(buf, "St_8_Off");
      break;
    case Som__St_8_ON:
      strcpy(buf, "St_8_ON");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_7 Som__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Off")==0)) {
    return Som__St_7_Off;
  };
  if ((strcmp(s, "St_7_ON")==0)) {
    return Som__St_7_ON;
  };
}

char* string_of_Som__st_7(Som__st_7 x, char* buf) {
  switch (x) {
    case Som__St_7_Off:
      strcpy(buf, "St_7_Off");
      break;
    case Som__St_7_ON:
      strcpy(buf, "St_7_ON");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_6 Som__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Off")==0)) {
    return Som__St_6_Off;
  };
  if ((strcmp(s, "St_6_ON")==0)) {
    return Som__St_6_ON;
  };
}

char* string_of_Som__st_6(Som__st_6 x, char* buf) {
  switch (x) {
    case Som__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    case Som__St_6_ON:
      strcpy(buf, "St_6_ON");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_5 Som__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Mid")==0)) {
    return Som__St_5_Mid;
  };
  if ((strcmp(s, "St_5_Low")==0)) {
    return Som__St_5_Low;
  };
  if ((strcmp(s, "St_5_High")==0)) {
    return Som__St_5_High;
  };
}

char* string_of_Som__st_5(Som__st_5 x, char* buf) {
  switch (x) {
    case Som__St_5_Mid:
      strcpy(buf, "St_5_Mid");
      break;
    case Som__St_5_Low:
      strcpy(buf, "St_5_Low");
      break;
    case Som__St_5_High:
      strcpy(buf, "St_5_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_4 Som__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Mid")==0)) {
    return Som__St_4_Mid;
  };
  if ((strcmp(s, "St_4_Low")==0)) {
    return Som__St_4_Low;
  };
  if ((strcmp(s, "St_4_High")==0)) {
    return Som__St_4_High;
  };
}

char* string_of_Som__st_4(Som__st_4 x, char* buf) {
  switch (x) {
    case Som__St_4_Mid:
      strcpy(buf, "St_4_Mid");
      break;
    case Som__St_4_Low:
      strcpy(buf, "St_4_Low");
      break;
    case Som__St_4_High:
      strcpy(buf, "St_4_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_3 Som__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Mid")==0)) {
    return Som__St_3_Mid;
  };
  if ((strcmp(s, "St_3_Low")==0)) {
    return Som__St_3_Low;
  };
  if ((strcmp(s, "St_3_High")==0)) {
    return Som__St_3_High;
  };
}

char* string_of_Som__st_3(Som__st_3 x, char* buf) {
  switch (x) {
    case Som__St_3_Mid:
      strcpy(buf, "St_3_Mid");
      break;
    case Som__St_3_Low:
      strcpy(buf, "St_3_Low");
      break;
    case Som__St_3_High:
      strcpy(buf, "St_3_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_2 Som__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Rock")==0)) {
    return Som__St_2_Rock;
  };
  if ((strcmp(s, "St_2_Regue")==0)) {
    return Som__St_2_Regue;
  };
  if ((strcmp(s, "St_2_POP")==0)) {
    return Som__St_2_POP;
  };
  if ((strcmp(s, "St_2_Off")==0)) {
    return Som__St_2_Off;
  };
  if ((strcmp(s, "St_2_Indie")==0)) {
    return Som__St_2_Indie;
  };
  if ((strcmp(s, "St_2_Funk")==0)) {
    return Som__St_2_Funk;
  };
  if ((strcmp(s, "St_2_Electronic")==0)) {
    return Som__St_2_Electronic;
  };
  if ((strcmp(s, "St_2_Classic")==0)) {
    return Som__St_2_Classic;
  };
}

char* string_of_Som__st_2(Som__st_2 x, char* buf) {
  switch (x) {
    case Som__St_2_Rock:
      strcpy(buf, "St_2_Rock");
      break;
    case Som__St_2_Regue:
      strcpy(buf, "St_2_Regue");
      break;
    case Som__St_2_POP:
      strcpy(buf, "St_2_POP");
      break;
    case Som__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    case Som__St_2_Indie:
      strcpy(buf, "St_2_Indie");
      break;
    case Som__St_2_Funk:
      strcpy(buf, "St_2_Funk");
      break;
    case Som__St_2_Electronic:
      strcpy(buf, "St_2_Electronic");
      break;
    case Som__St_2_Classic:
      strcpy(buf, "St_2_Classic");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_1 Som__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Mid")==0)) {
    return Som__St_1_Mid;
  };
  if ((strcmp(s, "St_1_Low")==0)) {
    return Som__St_1_Low;
  };
  if ((strcmp(s, "St_1_High")==0)) {
    return Som__St_1_High;
  };
}

char* string_of_Som__st_1(Som__st_1 x, char* buf) {
  switch (x) {
    case Som__St_1_Mid:
      strcpy(buf, "St_1_Mid");
      break;
    case Som__St_1_Low:
      strcpy(buf, "St_1_Low");
      break;
    case Som__St_1_High:
      strcpy(buf, "St_1_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st Som__st_of_string(char* s) {
  if ((strcmp(s, "St_Off")==0)) {
    return Som__St_Off;
  };
  if ((strcmp(s, "St_ON")==0)) {
    return Som__St_ON;
  };
}

char* string_of_Som__st(Som__st x, char* buf) {
  switch (x) {
    case Som__St_Off:
      strcpy(buf, "St_Off");
      break;
    case Som__St_ON:
      strcpy(buf, "St_ON");
      break;
    default:
      break;
  };
  return buf;
}

