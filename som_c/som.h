/* --- Generated the 21/10/2019 at 10:51 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#ifndef SOM_H
#define SOM_H

#include "som_types.h"
#include "main_controller.h"
typedef struct Som__caixa_mem {
  int ck_1_2;
  int pnr;
} Som__caixa_mem;

typedef struct Som__caixa_out {
  int ligado;
} Som__caixa_out;

void Som__caixa_reset(Som__caixa_mem* self);

void Som__caixa_step(int c, Som__caixa_out* _out, Som__caixa_mem* self);

typedef struct Som__equalisador_mem {
  int v_467;
  int v_466;
  int pnr;
} Som__equalisador_mem;

typedef struct Som__equalisador_out {
  int s;
} Som__equalisador_out;

void Som__equalisador_reset(Som__equalisador_mem* self);

void Som__equalisador_step(int c1, int c2, Som__equalisador_out* _out,
                           Som__equalisador_mem* self);

typedef struct Som__music_mem {
  int v_506;
  int v_505;
  int v_504;
  int pnr;
} Som__music_mem;

typedef struct Som__music_out {
  int res;
} Som__music_out;

void Som__music_reset(Som__music_mem* self);

void Som__music_step(int tipo, Som__music_out* _out, Som__music_mem* self);

typedef struct Som__main_mem {
  int v_540;
  int v_539;
  int v_556;
  int v_555;
  int v_572;
  int v_571;
  int ck_9_1;
  int ck_7_1;
  int ck_5_1;
  int v_611;
  int v_610;
  int v_609;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Som__main_mem;

typedef struct Som__main_out {
  int cx1;
  int cx2;
  int cx3;
  int re;
  int agudo;
  int medio;
  int grave;
} Som__main_out;

void Som__main_reset(Som__main_mem* self);

void Som__main_step(int tipo, Som__main_out* _out, Som__main_mem* self);

#endif // SOM_H
