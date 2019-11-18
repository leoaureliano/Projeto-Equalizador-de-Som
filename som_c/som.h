/* --- Generated the 18/11/2019 at 8:42 --- */
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

typedef struct Som__madrugada_mem {
  int ck_1;
  int pnr;
} Som__madrugada_mem;

typedef struct Som__madrugada_out {
  int madrug;
} Som__madrugada_out;

void Som__madrugada_reset(Som__madrugada_mem* self);

void Som__madrugada_step(int hora, Som__madrugada_out* _out,
                         Som__madrugada_mem* self);

typedef struct Som__equalisador_mem {
  int v_767;
  int v_766;
  int v_765;
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
  int v_820;
  int v_819;
  int v_818;
  int pnr;
} Som__music_mem;

typedef struct Som__music_out {
  int res;
} Som__music_out;

void Som__music_reset(Som__music_mem* self);

void Som__music_step(int tipo, Som__music_out* _out, Som__music_mem* self);

typedef struct Som__main_mem {
  int ck_20_1;
  int v_872;
  int v_871;
  int v_870;
  int v_920;
  int v_919;
  int v_918;
  int v_968;
  int v_967;
  int v_966;
  int v_1016;
  int v_1015;
  int v_1014;
  int ck_10_1;
  int ck_8_1;
  int ck_6_1;
  int v_1069;
  int v_1068;
  int v_1067;
  int pnr_8;
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
  int madrug;
} Som__main_out;

void Som__main_reset(Som__main_mem* self);

void Som__main_step(int tipo, int upa, int downa, int upm, int downm,
                    int upg, int downg, int upv, int downv, int hora,
                    Som__main_out* _out, Som__main_mem* self);

#endif // SOM_H
