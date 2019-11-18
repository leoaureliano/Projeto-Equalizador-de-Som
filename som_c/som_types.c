/* --- Generated the 18/11/2019 at 8:42 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "som_types.h"

Som__st_12 Som__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Rock")==0)) {
    return Som__St_12_Rock;
  };
  if ((strcmp(s, "St_12_Regue")==0)) {
    return Som__St_12_Regue;
  };
  if ((strcmp(s, "St_12_POP")==0)) {
    return Som__St_12_POP;
  };
  if ((strcmp(s, "St_12_Off")==0)) {
    return Som__St_12_Off;
  };
  if ((strcmp(s, "St_12_Indie")==0)) {
    return Som__St_12_Indie;
  };
  if ((strcmp(s, "St_12_Funk")==0)) {
    return Som__St_12_Funk;
  };
  if ((strcmp(s, "St_12_Electronic")==0)) {
    return Som__St_12_Electronic;
  };
  if ((strcmp(s, "St_12_Classic")==0)) {
    return Som__St_12_Classic;
  };
}

char* string_of_Som__st_12(Som__st_12 x, char* buf) {
  switch (x) {
    case Som__St_12_Rock:
      strcpy(buf, "St_12_Rock");
      break;
    case Som__St_12_Regue:
      strcpy(buf, "St_12_Regue");
      break;
    case Som__St_12_POP:
      strcpy(buf, "St_12_POP");
      break;
    case Som__St_12_Off:
      strcpy(buf, "St_12_Off");
      break;
    case Som__St_12_Indie:
      strcpy(buf, "St_12_Indie");
      break;
    case Som__St_12_Funk:
      strcpy(buf, "St_12_Funk");
      break;
    case Som__St_12_Electronic:
      strcpy(buf, "St_12_Electronic");
      break;
    case Som__St_12_Classic:
      strcpy(buf, "St_12_Classic");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_11 Som__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Off")==0)) {
    return Som__St_11_Off;
  };
  if ((strcmp(s, "St_11_ON")==0)) {
    return Som__St_11_ON;
  };
}

char* string_of_Som__st_11(Som__st_11 x, char* buf) {
  switch (x) {
    case Som__St_11_Off:
      strcpy(buf, "St_11_Off");
      break;
    case Som__St_11_ON:
      strcpy(buf, "St_11_ON");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_10 Som__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Off")==0)) {
    return Som__St_10_Off;
  };
  if ((strcmp(s, "St_10_ON")==0)) {
    return Som__St_10_ON;
  };
}

char* string_of_Som__st_10(Som__st_10 x, char* buf) {
  switch (x) {
    case Som__St_10_Off:
      strcpy(buf, "St_10_Off");
      break;
    case Som__St_10_ON:
      strcpy(buf, "St_10_ON");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_9 Som__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Off")==0)) {
    return Som__St_9_Off;
  };
  if ((strcmp(s, "St_9_ON")==0)) {
    return Som__St_9_ON;
  };
}

char* string_of_Som__st_9(Som__st_9 x, char* buf) {
  switch (x) {
    case Som__St_9_Off:
      strcpy(buf, "St_9_Off");
      break;
    case Som__St_9_ON:
      strcpy(buf, "St_9_ON");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_8 Som__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Verylow")==0)) {
    return Som__St_8_Verylow;
  };
  if ((strcmp(s, "St_8_Veryhigh")==0)) {
    return Som__St_8_Veryhigh;
  };
  if ((strcmp(s, "St_8_Mid")==0)) {
    return Som__St_8_Mid;
  };
  if ((strcmp(s, "St_8_Low")==0)) {
    return Som__St_8_Low;
  };
  if ((strcmp(s, "St_8_High")==0)) {
    return Som__St_8_High;
  };
}

char* string_of_Som__st_8(Som__st_8 x, char* buf) {
  switch (x) {
    case Som__St_8_Verylow:
      strcpy(buf, "St_8_Verylow");
      break;
    case Som__St_8_Veryhigh:
      strcpy(buf, "St_8_Veryhigh");
      break;
    case Som__St_8_Mid:
      strcpy(buf, "St_8_Mid");
      break;
    case Som__St_8_Low:
      strcpy(buf, "St_8_Low");
      break;
    case Som__St_8_High:
      strcpy(buf, "St_8_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_7 Som__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Verylow")==0)) {
    return Som__St_7_Verylow;
  };
  if ((strcmp(s, "St_7_Veryhigh")==0)) {
    return Som__St_7_Veryhigh;
  };
  if ((strcmp(s, "St_7_Mid")==0)) {
    return Som__St_7_Mid;
  };
  if ((strcmp(s, "St_7_Low")==0)) {
    return Som__St_7_Low;
  };
  if ((strcmp(s, "St_7_High")==0)) {
    return Som__St_7_High;
  };
}

char* string_of_Som__st_7(Som__st_7 x, char* buf) {
  switch (x) {
    case Som__St_7_Verylow:
      strcpy(buf, "St_7_Verylow");
      break;
    case Som__St_7_Veryhigh:
      strcpy(buf, "St_7_Veryhigh");
      break;
    case Som__St_7_Mid:
      strcpy(buf, "St_7_Mid");
      break;
    case Som__St_7_Low:
      strcpy(buf, "St_7_Low");
      break;
    case Som__St_7_High:
      strcpy(buf, "St_7_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_6 Som__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Verylow")==0)) {
    return Som__St_6_Verylow;
  };
  if ((strcmp(s, "St_6_Veryhigh")==0)) {
    return Som__St_6_Veryhigh;
  };
  if ((strcmp(s, "St_6_Mid")==0)) {
    return Som__St_6_Mid;
  };
  if ((strcmp(s, "St_6_Low")==0)) {
    return Som__St_6_Low;
  };
  if ((strcmp(s, "St_6_High")==0)) {
    return Som__St_6_High;
  };
}

char* string_of_Som__st_6(Som__st_6 x, char* buf) {
  switch (x) {
    case Som__St_6_Verylow:
      strcpy(buf, "St_6_Verylow");
      break;
    case Som__St_6_Veryhigh:
      strcpy(buf, "St_6_Veryhigh");
      break;
    case Som__St_6_Mid:
      strcpy(buf, "St_6_Mid");
      break;
    case Som__St_6_Low:
      strcpy(buf, "St_6_Low");
      break;
    case Som__St_6_High:
      strcpy(buf, "St_6_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_5 Som__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Verylow")==0)) {
    return Som__St_5_Verylow;
  };
  if ((strcmp(s, "St_5_Veryhigh")==0)) {
    return Som__St_5_Veryhigh;
  };
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
    case Som__St_5_Verylow:
      strcpy(buf, "St_5_Verylow");
      break;
    case Som__St_5_Veryhigh:
      strcpy(buf, "St_5_Veryhigh");
      break;
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
  if ((strcmp(s, "St_4_NaoMadrugada")==0)) {
    return Som__St_4_NaoMadrugada;
  };
  if ((strcmp(s, "St_4_Madrugada")==0)) {
    return Som__St_4_Madrugada;
  };
}

char* string_of_Som__st_4(Som__st_4 x, char* buf) {
  switch (x) {
    case Som__St_4_NaoMadrugada:
      strcpy(buf, "St_4_NaoMadrugada");
      break;
    case Som__St_4_Madrugada:
      strcpy(buf, "St_4_Madrugada");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_3 Som__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Rock")==0)) {
    return Som__St_3_Rock;
  };
  if ((strcmp(s, "St_3_Regue")==0)) {
    return Som__St_3_Regue;
  };
  if ((strcmp(s, "St_3_POP")==0)) {
    return Som__St_3_POP;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return Som__St_3_Off;
  };
  if ((strcmp(s, "St_3_Indie")==0)) {
    return Som__St_3_Indie;
  };
  if ((strcmp(s, "St_3_Funk")==0)) {
    return Som__St_3_Funk;
  };
  if ((strcmp(s, "St_3_Electronic")==0)) {
    return Som__St_3_Electronic;
  };
  if ((strcmp(s, "St_3_Classic")==0)) {
    return Som__St_3_Classic;
  };
}

char* string_of_Som__st_3(Som__st_3 x, char* buf) {
  switch (x) {
    case Som__St_3_Rock:
      strcpy(buf, "St_3_Rock");
      break;
    case Som__St_3_Regue:
      strcpy(buf, "St_3_Regue");
      break;
    case Som__St_3_POP:
      strcpy(buf, "St_3_POP");
      break;
    case Som__St_3_Off:
      strcpy(buf, "St_3_Off");
      break;
    case Som__St_3_Indie:
      strcpy(buf, "St_3_Indie");
      break;
    case Som__St_3_Funk:
      strcpy(buf, "St_3_Funk");
      break;
    case Som__St_3_Electronic:
      strcpy(buf, "St_3_Electronic");
      break;
    case Som__St_3_Classic:
      strcpy(buf, "St_3_Classic");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_2 Som__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Verylow")==0)) {
    return Som__St_2_Verylow;
  };
  if ((strcmp(s, "St_2_Veryhigh")==0)) {
    return Som__St_2_Veryhigh;
  };
  if ((strcmp(s, "St_2_Mid")==0)) {
    return Som__St_2_Mid;
  };
  if ((strcmp(s, "St_2_Low")==0)) {
    return Som__St_2_Low;
  };
  if ((strcmp(s, "St_2_High")==0)) {
    return Som__St_2_High;
  };
}

char* string_of_Som__st_2(Som__st_2 x, char* buf) {
  switch (x) {
    case Som__St_2_Verylow:
      strcpy(buf, "St_2_Verylow");
      break;
    case Som__St_2_Veryhigh:
      strcpy(buf, "St_2_Veryhigh");
      break;
    case Som__St_2_Mid:
      strcpy(buf, "St_2_Mid");
      break;
    case Som__St_2_Low:
      strcpy(buf, "St_2_Low");
      break;
    case Som__St_2_High:
      strcpy(buf, "St_2_High");
      break;
    default:
      break;
  };
  return buf;
}

Som__st_1 Som__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_NaoMadrugada")==0)) {
    return Som__St_1_NaoMadrugada;
  };
  if ((strcmp(s, "St_1_Madrugada")==0)) {
    return Som__St_1_Madrugada;
  };
}

char* string_of_Som__st_1(Som__st_1 x, char* buf) {
  switch (x) {
    case Som__St_1_NaoMadrugada:
      strcpy(buf, "St_1_NaoMadrugada");
      break;
    case Som__St_1_Madrugada:
      strcpy(buf, "St_1_Madrugada");
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

