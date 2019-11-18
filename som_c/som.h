/* --- Generated the 17/11/2019 at 21:34 --- */
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

typedef struct Som__hora_mem {
  int ck_1;
  int pnr;
} Som__hora_mem;

typedef struct Som__hora_out {
  int t;
} Som__hora_out;

void Som__hora_reset(Som__hora_mem* self);

void Som__hora_step(int permitido, int chora, Som__hora_out* _out,
                    Som__hora_mem* self);

typedef struct Som__equalisador_mem {
  int v_764;
  int v_763;
  int v_762;
  int pnr;
} Som__equalisador_mem;

typedef struct Som__equalisador_out {
  int s;
} Som__equalisador_out;

void Som__equalisador_reset(Som__equalisador_mem* self);

void Som__equalisador_step(int cvl, int clo, int cmi, int chi, int cvh,
                           int c, int up, int down,
                           Som__equalisador_out* _out,
                           Som__equalisador_mem* self);

typedef struct Som__music_mem {
  int v_817;
  int v_816;
  int v_815;
  int pnr;
} Som__music_mem;

typedef struct Som__music_out {
  int res;
} Som__music_out;

void Som__music_reset(Som__music_mem* self);

void Som__music_step(int tipo, Som__music_out* _out, Som__music_mem* self);

typedef struct Som__main_mem {
  int v_869;
  int v_868;
  int v_867;
  int v_917;
  int v_916;
  int v_915;
  int v_965;
  int v_964;
  int v_963;
  int v_1013;
  int v_1012;
  int v_1011;
  int ck_10_1;
  int ck_8_1;
  int ck_6_1;
  int v_1066;
  int v_1065;
  int v_1064;
  int pnr_7;
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
  int res;
  int agudo;
  int medio;
  int grave;
  int volume;
} Som__main_out;

void Som__main_reset(Som__main_mem* self);

void Som__main_step(int tipo, int upa, int downa, int upm, int downm,
                    int upg, int downg, int upv, int downv,
                    Som__main_out* _out, Som__main_mem* self);

#endif // SOM_H
