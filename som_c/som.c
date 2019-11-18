/* --- Generated the 18/11/2019 at 8:42 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "som.h"

void Som__caixa_reset(Som__caixa_mem* self) {
  self->pnr = false;
  self->ck_1_2 = false;
}

void Som__caixa_step(int c, Som__caixa_out* _out, Som__caixa_mem* self) {
  
  int nr_St_ON;
  int ns_St_ON_1;
  int ligado_St_ON;
  int nr_St_Off;
  int ns_St_Off_1;
  int ligado_St_Off;
  int ck_1_1;
  int v;
  int r_St_ON;
  int s_St_ON_1;
  int r_St_Off;
  int s_St_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    if (c) {
      r_St_ON = true;
    } else {
      r_St_ON = self->pnr;
    };
    r = r_St_ON;
    if (c) {
      s_St_ON_1 = false;
    } else {
      s_St_ON_1 = true;
    };
    s_1 = s_St_ON_1;
  } else {
    v = !(c);
    if (v) {
      r_St_Off = true;
      s_St_Off_1 = true;
    } else {
      r_St_Off = self->pnr;
      s_St_Off_1 = false;
    };
    r = r_St_Off;
    s_1 = s_St_Off_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    ligado_St_ON = true;
    _out->ligado = ligado_St_ON;
    nr_St_ON = false;
    nr = nr_St_ON;
    ns_St_ON_1 = true;
    ns_1 = ns_St_ON_1;
  } else {
    ligado_St_Off = false;
    nr_St_Off = false;
    ns_St_Off_1 = false;
    _out->ligado = ligado_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Som__madrugada_reset(Som__madrugada_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Som__madrugada_step(int hora, Som__madrugada_out* _out,
                         Som__madrugada_mem* self) {
  
  int nr_St_1_Madrugada;
  int ns_St_1_Madrugada_1;
  int madrug_St_1_Madrugada;
  int nr_St_1_NaoMadrugada;
  int ns_St_1_NaoMadrugada_1;
  int madrug_St_1_NaoMadrugada;
  int ck_2_1;
  int v_1;
  int v;
  int r_St_1_Madrugada;
  int s_St_1_Madrugada_1;
  int r_St_1_NaoMadrugada;
  int s_St_1_NaoMadrugada_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = (hora<6);
    if (v) {
      r_St_1_Madrugada = true;
    } else {
      r_St_1_Madrugada = self->pnr;
    };
    r = r_St_1_Madrugada;
    if (v) {
      s_St_1_Madrugada_1 = false;
    } else {
      s_St_1_Madrugada_1 = true;
    };
    s_1 = s_St_1_Madrugada_1;
  } else {
    v_1 = (hora>=22);
    if (v_1) {
      r_St_1_NaoMadrugada = true;
      s_St_1_NaoMadrugada_1 = true;
    } else {
      r_St_1_NaoMadrugada = self->pnr;
      s_St_1_NaoMadrugada_1 = false;
    };
    r = r_St_1_NaoMadrugada;
    s_1 = s_St_1_NaoMadrugada_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    madrug_St_1_Madrugada = true;
    _out->madrug = madrug_St_1_Madrugada;
    nr_St_1_Madrugada = false;
    nr = nr_St_1_Madrugada;
    ns_St_1_Madrugada_1 = true;
    ns_1 = ns_St_1_Madrugada_1;
  } else {
    madrug_St_1_NaoMadrugada = false;
    nr_St_1_NaoMadrugada = false;
    ns_St_1_NaoMadrugada_1 = false;
    _out->madrug = madrug_St_1_NaoMadrugada;
    nr = nr_St_1_NaoMadrugada;
    ns_1 = ns_St_1_NaoMadrugada_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Som__equalisador_reset(Som__equalisador_mem* self) {
  self->pnr = false;
  self->v_765 = false;
  self->v_766 = false;
  self->v_767 = false;
}

void Som__equalisador_step(int cvl, int clo, int cmi, int chi, int cvh,
                           int c, int up, int down,
                           Som__equalisador_out* _out,
                           Som__equalisador_mem* self) {
  
  int v_764;
  int v_763;
  int v_762;
  int v_761;
  int v_760;
  int v_759;
  int v_758;
  int v_757;
  int v_756;
  int v_755;
  int v_754;
  int v_753;
  int v_752;
  int v_751;
  int v_750;
  int v_749;
  int v_748;
  int v_747;
  int v_746;
  int v_745;
  int v_744;
  int v_743;
  int v_742;
  int v_741;
  int v_740;
  int ns_St_2_Veryhigh_2_0;
  int ns_St_2_Veryhigh_3_0_0;
  int ns_St_2_Veryhigh_3_0_1;
  int ns_St_2_Veryhigh_2_1;
  int ns_St_2_Veryhigh_3_1_0;
  int ns_St_2_Veryhigh_3_1_1;
  int ns_St_2_High_2_0;
  int ns_St_2_High_3_0_0;
  int ns_St_2_High_3_0_1;
  int ns_St_2_High_2_1;
  int ns_St_2_High_3_1_0;
  int ns_St_2_High_3_1_1;
  int ns_St_2_Mid_2_0;
  int ns_St_2_Mid_3_0_0;
  int ns_St_2_Mid_3_0_1;
  int ns_St_2_Mid_2_1;
  int ns_St_2_Mid_3_1_0;
  int ns_St_2_Mid_3_1_1;
  int ns_St_2_Low_2_0;
  int ns_St_2_Low_3_0_0;
  int ns_St_2_Low_3_0_1;
  int ns_St_2_Low_2_1;
  int ns_St_2_Low_3_1_0;
  int ns_St_2_Low_3_1_1;
  int ns_St_2_Verylow_2_0;
  int ns_St_2_Verylow_3_0_0;
  int ns_St_2_Verylow_3_0_1;
  int ns_St_2_Verylow_2_1;
  int ns_St_2_Verylow_3_1_0;
  int ns_St_2_Verylow_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_St_2_Veryhigh;
  int ns_St_2_Veryhigh_3;
  int ns_St_2_Veryhigh_2;
  int ns_St_2_Veryhigh_1;
  int s_St_2_Veryhigh;
  int nr_St_2_High;
  int ns_St_2_High_3;
  int ns_St_2_High_2;
  int ns_St_2_High_1;
  int s_St_2_High;
  int nr_St_2_Mid;
  int ns_St_2_Mid_3;
  int ns_St_2_Mid_2;
  int ns_St_2_Mid_1;
  int s_St_2_Mid;
  int nr_St_2_Low;
  int ns_St_2_Low_3;
  int ns_St_2_Low_2;
  int ns_St_2_Low_1;
  int s_St_2_Low;
  int nr_St_2_Verylow;
  int ns_St_2_Verylow_3;
  int ns_St_2_Verylow_2;
  int ns_St_2_Verylow_1;
  int s_St_2_Verylow;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_65_2_0;
  int v_65_3_0_0;
  int v_65_3_0_1;
  int v_65_2_1;
  int v_65_3_1_0;
  int v_65_3_1_1;
  int v_63_2_0;
  int v_63_3_0_0;
  int v_63_3_0_1;
  int v_63_2_1;
  int v_63_3_1_0;
  int v_63_3_1_1;
  int v_61_2_0;
  int v_61_3_0_0;
  int v_61_3_0_1;
  int v_61_2_1;
  int v_61_3_1_0;
  int v_61_3_1_1;
  int v_66;
  int v_65_3;
  int v_65_2;
  int v_65_1;
  int v_64;
  int v_63_3;
  int v_63_2;
  int v_63_1;
  int v_62;
  int v_61_3;
  int v_61_2;
  int v_61_1;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_53_2_0;
  int v_53_3_0_0;
  int v_53_3_0_1;
  int v_53_2_1;
  int v_53_3_1_0;
  int v_53_3_1_1;
  int v_51_2_0;
  int v_51_3_0_0;
  int v_51_3_0_1;
  int v_51_2_1;
  int v_51_3_1_0;
  int v_51_3_1_1;
  int v_49_2_0;
  int v_49_3_0_0;
  int v_49_3_0_1;
  int v_49_2_1;
  int v_49_3_1_0;
  int v_49_3_1_1;
  int v_54;
  int v_53_3;
  int v_53_2;
  int v_53_1;
  int v_52;
  int v_51_3;
  int v_51_2;
  int v_51_1;
  int v_50;
  int v_49_3;
  int v_49_2;
  int v_49_1;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_39_2_0;
  int v_39_3_0_0;
  int v_39_3_0_1;
  int v_39_2_1;
  int v_39_3_1_0;
  int v_39_3_1_1;
  int v_37_2_0;
  int v_37_3_0_0;
  int v_37_3_0_1;
  int v_37_2_1;
  int v_37_3_1_0;
  int v_37_3_1_1;
  int v_35_2_0;
  int v_35_3_0_0;
  int v_35_3_0_1;
  int v_35_2_1;
  int v_35_3_1_0;
  int v_35_3_1_1;
  int v_40;
  int v_39_3;
  int v_39_2;
  int v_39_1;
  int v_38;
  int v_37_3;
  int v_37_2;
  int v_37_1;
  int v_36;
  int v_35_3;
  int v_35_2;
  int v_35_1;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_25_2_0;
  int v_25_3_0_0;
  int v_25_3_0_1;
  int v_25_2_1;
  int v_25_3_1_0;
  int v_25_3_1_1;
  int v_23_2_0;
  int v_23_3_0_0;
  int v_23_3_0_1;
  int v_23_2_1;
  int v_23_3_1_0;
  int v_23_3_1_1;
  int v_21_2_0;
  int v_21_3_0_0;
  int v_21_3_0_1;
  int v_21_2_1;
  int v_21_3_1_0;
  int v_21_3_1_1;
  int v_26;
  int v_25_3;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23_3;
  int v_23_2;
  int v_23_1;
  int v_22;
  int v_21_3;
  int v_21_2;
  int v_21_1;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_11_2_0;
  int v_11_3_0_0;
  int v_11_3_0_1;
  int v_11_2_1;
  int v_11_3_1_0;
  int v_11_3_1_1;
  int v_9_2_0;
  int v_9_3_0_0;
  int v_9_3_0_1;
  int v_9_2_1;
  int v_9_3_1_0;
  int v_9_3_1_1;
  int v_7_2_0;
  int v_7_3_0_0;
  int v_7_3_0_1;
  int v_7_2_1;
  int v_7_3_1_0;
  int v_7_3_1_1;
  int v_12;
  int v_11_3;
  int v_11_2;
  int v_11_1;
  int v_10;
  int v_9_3;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7_3;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v;
  int v_787;
  int v_786;
  int v_785;
  int v_784;
  int v_783;
  int v_782;
  int v_781;
  int v_780;
  int v_779;
  int v_778;
  int v_777;
  int v_776;
  int v_775;
  int v_774;
  int v_773;
  int v_772;
  int v_771;
  int v_770;
  int v_769;
  int v_768;
  int s_4_St_2_Veryhigh_2_0;
  int s_4_St_2_Veryhigh_3_0_0;
  int s_4_St_2_Veryhigh_3_0_1;
  int s_4_St_2_Veryhigh_2_1;
  int s_4_St_2_Veryhigh_3_1_0;
  int s_4_St_2_Veryhigh_3_1_1;
  int s_4_St_2_High_2_0;
  int s_4_St_2_High_3_0_0;
  int s_4_St_2_High_3_0_1;
  int s_4_St_2_High_2_1;
  int s_4_St_2_High_3_1_0;
  int s_4_St_2_High_3_1_1;
  int s_4_St_2_Mid_2_0;
  int s_4_St_2_Mid_3_0_0;
  int s_4_St_2_Mid_3_0_1;
  int s_4_St_2_Mid_2_1;
  int s_4_St_2_Mid_3_1_0;
  int s_4_St_2_Mid_3_1_1;
  int s_4_St_2_Low_2_0;
  int s_4_St_2_Low_3_0_0;
  int s_4_St_2_Low_3_0_1;
  int s_4_St_2_Low_2_1;
  int s_4_St_2_Low_3_1_0;
  int s_4_St_2_Low_3_1_1;
  int s_4_St_2_Verylow_2_0;
  int s_4_St_2_Verylow_3_0_0;
  int s_4_St_2_Verylow_3_0_1;
  int s_4_St_2_Verylow_2_1;
  int s_4_St_2_Verylow_3_1_0;
  int s_4_St_2_Verylow_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_St_2_Veryhigh;
  int s_4_St_2_Veryhigh_3;
  int s_4_St_2_Veryhigh_2;
  int s_4_St_2_Veryhigh_1;
  int r_St_2_High;
  int s_4_St_2_High_3;
  int s_4_St_2_High_2;
  int s_4_St_2_High_1;
  int r_St_2_Mid;
  int s_4_St_2_Mid_3;
  int s_4_St_2_Mid_2;
  int s_4_St_2_Mid_1;
  int r_St_2_Low;
  int s_4_St_2_Low_3;
  int s_4_St_2_Low_2;
  int s_4_St_2_Low_1;
  int r_St_2_Verylow;
  int s_4_St_2_Verylow_3;
  int s_4_St_2_Verylow_2;
  int s_4_St_2_Verylow_1;
  int ck_3_4;
  int ck_2;
  int ck_1;
  int s_4_2_0;
  int s_4_3_0_0;
  int s_4_3_0_1;
  int s_4_2_1;
  int s_4_3_1_0;
  int s_4_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_4_3;
  int s_4_2;
  int s_4_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_765;
  ck_2 = self->v_766;
  ck_3_4 = self->v_767;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        v_19 = (up&&c);
        v_18 = !(cvh);
        v_20 = (v_18||v_19);
        if (v_20) {
          v_22 = true;
          v_21_1 = false;
          v_21_2 = false;
          v_21_3 = true;
        } else {
          v_22 = self->pnr;
          v_21_1 = true;
          v_21_2 = true;
          v_21_3 = true;
        };
        v_16 = (down&&c);
        v_15 = !(cmi);
        v_17 = (v_15||v_16);
        if (v_17) {
          v_24 = true;
          v_23_1 = true;
          v_23_2 = false;
          v_23_3 = false;
        } else {
          v_24 = v_22;
          v_23_1 = v_21_1;
          v_23_2 = v_21_2;
          v_23_3 = v_21_3;
        };
        v_14 = !(clo);
        if (v_14) {
          v_26 = true;
          v_25_1 = true;
          v_25_2 = true;
          v_25_3 = false;
        } else {
          v_26 = v_24;
          v_25_1 = v_23_1;
          v_25_2 = v_23_2;
          v_25_3 = v_23_3;
        };
        v_13 = !(cvl);
        if (v_13) {
          r_St_2_High = true;
        } else {
          r_St_2_High = v_26;
        };
        v_783 = r_St_2_High;
        if (v_13) {
          s_4_St_2_High_1 = false;
        } else {
          s_4_St_2_High_1 = v_25_1;
        };
        v_768 = s_4_St_2_High_1;
        if (v_13) {
          s_4_St_2_High_2 = false;
        } else {
          s_4_St_2_High_2 = v_25_2;
        };
        v_769 = s_4_St_2_High_2;
        if (v_13) {
          s_4_St_2_High_3 = false;
        } else {
          s_4_St_2_High_3 = v_25_3;
        };
        v_770 = s_4_St_2_High_3;
      } else {
        v_48 = !(cvh);
        if (v_48) {
          v_50 = true;
          v_49_1 = false;
          v_49_2 = false;
          v_49_3 = true;
        } else {
          v_50 = self->pnr;
          v_49_1 = true;
          v_49_2 = true;
          v_49_3 = false;
        };
        v_47 = !(chi);
        if (v_47) {
          v_52 = true;
          v_51_1 = true;
          v_51_2 = true;
          v_51_3 = true;
        } else {
          v_52 = v_50;
          v_51_1 = v_49_1;
          v_51_2 = v_49_2;
          v_51_3 = v_49_3;
        };
        v_45 = (up&&c);
        v_44 = !(cmi);
        v_46 = (v_44||v_45);
        if (v_46) {
          v_54 = true;
          v_53_1 = true;
          v_53_2 = false;
          v_53_3 = false;
        } else {
          v_54 = v_52;
          v_53_1 = v_51_1;
          v_53_2 = v_51_2;
          v_53_3 = v_51_3;
        };
        v_42 = (down&&c);
        v_41 = !(cvl);
        v_43 = (v_41||v_42);
        if (v_43) {
          r_St_2_Low = true;
          s_4_St_2_Low_1 = false;
          s_4_St_2_Low_2 = false;
          s_4_St_2_Low_3 = false;
        } else {
          r_St_2_Low = v_54;
          s_4_St_2_Low_1 = v_53_1;
          s_4_St_2_Low_2 = v_53_2;
          s_4_St_2_Low_3 = v_53_3;
        };
        v_783 = r_St_2_Low;
        v_768 = s_4_St_2_Low_1;
        v_769 = s_4_St_2_Low_2;
        v_770 = s_4_St_2_Low_3;
        if (v_49_1) {
          v_49_2_1 = v_49_2;
          if (v_49_2_1) {
            v_49_3_1_1 = v_49_3;
          } else {
            v_49_3_1_0 = v_49_3;
          };
        } else {
          v_49_2_0 = v_49_2;
          if (v_49_2_0) {
            v_49_3_0_1 = v_49_3;
          } else {
            v_49_3_0_0 = v_49_3;
          };
        };
        if (v_51_1) {
          v_51_2_1 = v_51_2;
          if (v_51_2_1) {
            v_51_3_1_1 = v_51_3;
          } else {
            v_51_3_1_0 = v_51_3;
          };
        } else {
          v_51_2_0 = v_51_2;
          if (v_51_2_0) {
            v_51_3_0_1 = v_51_3;
          } else {
            v_51_3_0_0 = v_51_3;
          };
        };
        if (v_53_1) {
          v_53_2_1 = v_53_2;
          if (v_53_2_1) {
            v_53_3_1_1 = v_53_3;
          } else {
            v_53_3_1_0 = v_53_3;
          };
        } else {
          v_53_2_0 = v_53_2;
          if (v_53_2_0) {
            v_53_3_0_1 = v_53_3;
          } else {
            v_53_3_0_0 = v_53_3;
          };
        };
      };
      v_777 = v_768;
      v_778 = v_769;
      v_779 = v_770;
      v_785 = v_783;
      if (ck_3_4_1_1) {
        if (v_21_1) {
          v_21_2_1 = v_21_2;
          if (v_21_2_1) {
            v_21_3_1_1 = v_21_3;
          } else {
            v_21_3_1_0 = v_21_3;
          };
        } else {
          v_21_2_0 = v_21_2;
          if (v_21_2_0) {
            v_21_3_0_1 = v_21_3;
          } else {
            v_21_3_0_0 = v_21_3;
          };
        };
        if (v_23_1) {
          v_23_2_1 = v_23_2;
          if (v_23_2_1) {
            v_23_3_1_1 = v_23_3;
          } else {
            v_23_3_1_0 = v_23_3;
          };
        } else {
          v_23_2_0 = v_23_2;
          if (v_23_2_0) {
            v_23_3_0_1 = v_23_3;
          } else {
            v_23_3_0_0 = v_23_3;
          };
        };
        if (v_25_1) {
          v_25_2_1 = v_25_2;
          if (v_25_2_1) {
            v_25_3_1_1 = v_25_3;
          } else {
            v_25_3_1_0 = v_25_3;
          };
        } else {
          v_25_2_0 = v_25_2;
          if (v_25_2_0) {
            v_25_3_0_1 = v_25_3;
          } else {
            v_25_3_0_0 = v_25_3;
          };
        };
        if (s_4_St_2_High_1) {
          s_4_St_2_High_2_1 = s_4_St_2_High_2;
          if (s_4_St_2_High_2_1) {
            s_4_St_2_High_3_1_1 = s_4_St_2_High_3;
          } else {
            s_4_St_2_High_3_1_0 = s_4_St_2_High_3;
          };
        } else {
          s_4_St_2_High_2_0 = s_4_St_2_High_2;
          if (s_4_St_2_High_2_0) {
            s_4_St_2_High_3_0_1 = s_4_St_2_High_3;
          } else {
            s_4_St_2_High_3_0_0 = s_4_St_2_High_3;
          };
        };
      } else {
        if (s_4_St_2_Low_1) {
          s_4_St_2_Low_2_1 = s_4_St_2_Low_2;
          if (s_4_St_2_Low_2_1) {
            s_4_St_2_Low_3_1_1 = s_4_St_2_Low_3;
          } else {
            s_4_St_2_Low_3_1_0 = s_4_St_2_Low_3;
          };
        } else {
          s_4_St_2_Low_2_0 = s_4_St_2_Low_2;
          if (s_4_St_2_Low_2_0) {
            s_4_St_2_Low_3_0_1 = s_4_St_2_Low_3;
          } else {
            s_4_St_2_Low_3_0_0 = s_4_St_2_Low_3;
          };
        };
      };
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (ck_3_4_1_0) {
        v_784 = true;
        v_771 = true;
        v_772 = true;
        v_773 = true;
      } else {
        v_34 = !(cvh);
        if (v_34) {
          v_36 = true;
          v_35_1 = false;
          v_35_2 = false;
          v_35_3 = true;
        } else {
          v_36 = self->pnr;
          v_35_1 = true;
          v_35_2 = false;
          v_35_3 = false;
        };
        v_32 = (up&&c);
        v_31 = !(chi);
        v_33 = (v_31||v_32);
        if (v_33) {
          v_38 = true;
          v_37_1 = true;
          v_37_2 = true;
          v_37_3 = true;
        } else {
          v_38 = v_36;
          v_37_1 = v_35_1;
          v_37_2 = v_35_2;
          v_37_3 = v_35_3;
        };
        v_29 = (down&&c);
        v_28 = !(clo);
        v_30 = (v_28||v_29);
        if (v_30) {
          v_40 = true;
          v_39_1 = true;
          v_39_2 = true;
          v_39_3 = false;
        } else {
          v_40 = v_38;
          v_39_1 = v_37_1;
          v_39_2 = v_37_2;
          v_39_3 = v_37_3;
        };
        v_27 = !(cvl);
        if (v_27) {
          r_St_2_Mid = true;
        } else {
          r_St_2_Mid = v_40;
        };
        v_784 = r_St_2_Mid;
        if (v_27) {
          s_4_St_2_Mid_1 = false;
        } else {
          s_4_St_2_Mid_1 = v_39_1;
        };
        v_771 = s_4_St_2_Mid_1;
        if (v_27) {
          s_4_St_2_Mid_2 = false;
        } else {
          s_4_St_2_Mid_2 = v_39_2;
        };
        v_772 = s_4_St_2_Mid_2;
        if (v_27) {
          s_4_St_2_Mid_3 = false;
        } else {
          s_4_St_2_Mid_3 = v_39_3;
        };
        v_773 = s_4_St_2_Mid_3;
        if (v_35_1) {
          v_35_2_1 = v_35_2;
          if (v_35_2_1) {
            v_35_3_1_1 = v_35_3;
          } else {
            v_35_3_1_0 = v_35_3;
          };
        } else {
          v_35_2_0 = v_35_2;
          if (v_35_2_0) {
            v_35_3_0_1 = v_35_3;
          } else {
            v_35_3_0_0 = v_35_3;
          };
        };
        if (v_37_1) {
          v_37_2_1 = v_37_2;
          if (v_37_2_1) {
            v_37_3_1_1 = v_37_3;
          } else {
            v_37_3_1_0 = v_37_3;
          };
        } else {
          v_37_2_0 = v_37_2;
          if (v_37_2_0) {
            v_37_3_0_1 = v_37_3;
          } else {
            v_37_3_0_0 = v_37_3;
          };
        };
        if (v_39_1) {
          v_39_2_1 = v_39_2;
          if (v_39_2_1) {
            v_39_3_1_1 = v_39_3;
          } else {
            v_39_3_1_0 = v_39_3;
          };
        } else {
          v_39_2_0 = v_39_2;
          if (v_39_2_0) {
            v_39_3_0_1 = v_39_3;
          } else {
            v_39_3_0_0 = v_39_3;
          };
        };
        if (s_4_St_2_Mid_1) {
          s_4_St_2_Mid_2_1 = s_4_St_2_Mid_2;
          if (s_4_St_2_Mid_2_1) {
            s_4_St_2_Mid_3_1_1 = s_4_St_2_Mid_3;
          } else {
            s_4_St_2_Mid_3_1_0 = s_4_St_2_Mid_3;
          };
        } else {
          s_4_St_2_Mid_2_0 = s_4_St_2_Mid_2;
          if (s_4_St_2_Mid_2_0) {
            s_4_St_2_Mid_3_0_1 = s_4_St_2_Mid_3;
          } else {
            s_4_St_2_Mid_3_0_0 = s_4_St_2_Mid_3;
          };
        };
      };
      v_777 = v_771;
      v_778 = v_772;
      v_779 = v_773;
      v_785 = v_784;
    };
    s_4_1 = v_777;
    s_4_2 = v_778;
    s_4_3 = v_779;
    r = v_785;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      v_780 = true;
      v_781 = true;
      v_782 = true;
      v_787 = true;
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (ck_3_4_0_0) {
        v_5 = (down&&c);
        v_4 = !(chi);
        v_6 = (v_4||v_5);
        if (v_6) {
          v_8 = true;
          v_7_1 = true;
          v_7_2 = true;
          v_7_3 = true;
        } else {
          v_8 = self->pnr;
          v_7_1 = false;
          v_7_2 = false;
          v_7_3 = true;
        };
        v_3 = !(cmi);
        if (v_3) {
          v_10 = true;
          v_9_1 = true;
          v_9_2 = false;
          v_9_3 = false;
        } else {
          v_10 = v_8;
          v_9_1 = v_7_1;
          v_9_2 = v_7_2;
          v_9_3 = v_7_3;
        };
        v_2 = !(clo);
        if (v_2) {
          v_12 = true;
          v_11_1 = true;
          v_11_2 = true;
          v_11_3 = false;
        } else {
          v_12 = v_10;
          v_11_1 = v_9_1;
          v_11_2 = v_9_2;
          v_11_3 = v_9_3;
        };
        v = !(cvl);
        if (v) {
          r_St_2_Veryhigh = true;
        } else {
          r_St_2_Veryhigh = v_12;
        };
        v_786 = r_St_2_Veryhigh;
        if (v) {
          s_4_St_2_Veryhigh_1 = false;
        } else {
          s_4_St_2_Veryhigh_1 = v_11_1;
        };
        v_774 = s_4_St_2_Veryhigh_1;
        if (v) {
          s_4_St_2_Veryhigh_2 = false;
        } else {
          s_4_St_2_Veryhigh_2 = v_11_2;
        };
        v_775 = s_4_St_2_Veryhigh_2;
        if (v) {
          s_4_St_2_Veryhigh_3 = false;
        } else {
          s_4_St_2_Veryhigh_3 = v_11_3;
        };
        v_776 = s_4_St_2_Veryhigh_3;
        if (v_7_1) {
          v_7_2_1 = v_7_2;
          if (v_7_2_1) {
            v_7_3_1_1 = v_7_3;
          } else {
            v_7_3_1_0 = v_7_3;
          };
        } else {
          v_7_2_0 = v_7_2;
          if (v_7_2_0) {
            v_7_3_0_1 = v_7_3;
          } else {
            v_7_3_0_0 = v_7_3;
          };
        };
        if (v_9_1) {
          v_9_2_1 = v_9_2;
          if (v_9_2_1) {
            v_9_3_1_1 = v_9_3;
          } else {
            v_9_3_1_0 = v_9_3;
          };
        } else {
          v_9_2_0 = v_9_2;
          if (v_9_2_0) {
            v_9_3_0_1 = v_9_3;
          } else {
            v_9_3_0_0 = v_9_3;
          };
        };
        if (v_11_1) {
          v_11_2_1 = v_11_2;
          if (v_11_2_1) {
            v_11_3_1_1 = v_11_3;
          } else {
            v_11_3_1_0 = v_11_3;
          };
        } else {
          v_11_2_0 = v_11_2;
          if (v_11_2_0) {
            v_11_3_0_1 = v_11_3;
          } else {
            v_11_3_0_0 = v_11_3;
          };
        };
      } else {
        v_60 = !(cvh);
        if (v_60) {
          v_62 = true;
          v_61_1 = false;
          v_61_2 = false;
          v_61_3 = true;
        } else {
          v_62 = self->pnr;
          v_61_1 = false;
          v_61_2 = false;
          v_61_3 = false;
        };
        v_59 = !(chi);
        if (v_59) {
          v_64 = true;
          v_63_1 = true;
          v_63_2 = true;
          v_63_3 = true;
        } else {
          v_64 = v_62;
          v_63_1 = v_61_1;
          v_63_2 = v_61_2;
          v_63_3 = v_61_3;
        };
        v_58 = !(cmi);
        if (v_58) {
          v_66 = true;
          v_65_1 = true;
          v_65_2 = false;
          v_65_3 = false;
        } else {
          v_66 = v_64;
          v_65_1 = v_63_1;
          v_65_2 = v_63_2;
          v_65_3 = v_63_3;
        };
        v_56 = (up&&c);
        v_55 = !(clo);
        v_57 = (v_55||v_56);
        if (v_57) {
          r_St_2_Verylow = true;
          s_4_St_2_Verylow_1 = true;
          s_4_St_2_Verylow_2 = true;
          s_4_St_2_Verylow_3 = false;
        } else {
          r_St_2_Verylow = v_66;
          s_4_St_2_Verylow_1 = v_65_1;
          s_4_St_2_Verylow_2 = v_65_2;
          s_4_St_2_Verylow_3 = v_65_3;
        };
        v_786 = r_St_2_Verylow;
        v_774 = s_4_St_2_Verylow_1;
        v_775 = s_4_St_2_Verylow_2;
        v_776 = s_4_St_2_Verylow_3;
        if (v_61_1) {
          v_61_2_1 = v_61_2;
          if (v_61_2_1) {
            v_61_3_1_1 = v_61_3;
          } else {
            v_61_3_1_0 = v_61_3;
          };
        } else {
          v_61_2_0 = v_61_2;
          if (v_61_2_0) {
            v_61_3_0_1 = v_61_3;
          } else {
            v_61_3_0_0 = v_61_3;
          };
        };
        if (v_63_1) {
          v_63_2_1 = v_63_2;
          if (v_63_2_1) {
            v_63_3_1_1 = v_63_3;
          } else {
            v_63_3_1_0 = v_63_3;
          };
        } else {
          v_63_2_0 = v_63_2;
          if (v_63_2_0) {
            v_63_3_0_1 = v_63_3;
          } else {
            v_63_3_0_0 = v_63_3;
          };
        };
        if (v_65_1) {
          v_65_2_1 = v_65_2;
          if (v_65_2_1) {
            v_65_3_1_1 = v_65_3;
          } else {
            v_65_3_1_0 = v_65_3;
          };
        } else {
          v_65_2_0 = v_65_2;
          if (v_65_2_0) {
            v_65_3_0_1 = v_65_3;
          } else {
            v_65_3_0_0 = v_65_3;
          };
        };
      };
      v_780 = v_774;
      v_781 = v_775;
      v_782 = v_776;
      v_787 = v_786;
    };
    s_4_1 = v_780;
    s_4_2 = v_781;
    s_4_3 = v_782;
    r = v_787;
  };
  ck_3_1 = s_4_1;
  ck_3_2 = s_4_2;
  ck_3_3 = s_4_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        s_St_2_High = 4;
        v_740 = s_St_2_High;
        nr_St_2_High = false;
        v_760 = nr_St_2_High;
        ns_St_2_High_1 = true;
        v_745 = ns_St_2_High_1;
        ns_St_2_High_2 = true;
        v_746 = ns_St_2_High_2;
        ns_St_2_High_3 = true;
        v_747 = ns_St_2_High_3;
      } else {
        s_St_2_Low = 2;
        nr_St_2_Low = false;
        ns_St_2_Low_1 = true;
        ns_St_2_Low_2 = true;
        ns_St_2_Low_3 = false;
        v_740 = s_St_2_Low;
        v_760 = nr_St_2_Low;
        v_745 = ns_St_2_Low_1;
        v_746 = ns_St_2_Low_2;
        v_747 = ns_St_2_Low_3;
      };
      v_742 = v_740;
      v_754 = v_745;
      v_755 = v_746;
      v_756 = v_747;
      v_762 = v_760;
      if (ck_3_3_1_1) {
        if (ns_St_2_High_1) {
          ns_St_2_High_2_1 = ns_St_2_High_2;
          if (ns_St_2_High_2_1) {
            ns_St_2_High_3_1_1 = ns_St_2_High_3;
          } else {
            ns_St_2_High_3_1_0 = ns_St_2_High_3;
          };
        } else {
          ns_St_2_High_2_0 = ns_St_2_High_2;
          if (ns_St_2_High_2_0) {
            ns_St_2_High_3_0_1 = ns_St_2_High_3;
          } else {
            ns_St_2_High_3_0_0 = ns_St_2_High_3;
          };
        };
      } else {
        if (ns_St_2_Low_1) {
          ns_St_2_Low_2_1 = ns_St_2_Low_2;
          if (ns_St_2_Low_2_1) {
            ns_St_2_Low_3_1_1 = ns_St_2_Low_3;
          } else {
            ns_St_2_Low_3_1_0 = ns_St_2_Low_3;
          };
        } else {
          ns_St_2_Low_2_0 = ns_St_2_Low_2;
          if (ns_St_2_Low_2_0) {
            ns_St_2_Low_3_0_1 = ns_St_2_Low_3;
          } else {
            ns_St_2_Low_3_0_0 = ns_St_2_Low_3;
          };
        };
      };
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        v_741 = 0;
        v_761 = true;
        v_748 = true;
        v_749 = true;
        v_750 = true;
      } else {
        s_St_2_Mid = 3;
        v_741 = s_St_2_Mid;
        nr_St_2_Mid = false;
        v_761 = nr_St_2_Mid;
        ns_St_2_Mid_1 = true;
        v_748 = ns_St_2_Mid_1;
        ns_St_2_Mid_2 = false;
        v_749 = ns_St_2_Mid_2;
        ns_St_2_Mid_3 = false;
        v_750 = ns_St_2_Mid_3;
        if (ns_St_2_Mid_1) {
          ns_St_2_Mid_2_1 = ns_St_2_Mid_2;
          if (ns_St_2_Mid_2_1) {
            ns_St_2_Mid_3_1_1 = ns_St_2_Mid_3;
          } else {
            ns_St_2_Mid_3_1_0 = ns_St_2_Mid_3;
          };
        } else {
          ns_St_2_Mid_2_0 = ns_St_2_Mid_2;
          if (ns_St_2_Mid_2_0) {
            ns_St_2_Mid_3_0_1 = ns_St_2_Mid_3;
          } else {
            ns_St_2_Mid_3_0_0 = ns_St_2_Mid_3;
          };
        };
      };
      v_742 = v_741;
      v_754 = v_748;
      v_755 = v_749;
      v_756 = v_750;
      v_762 = v_761;
    };
    _out->s = v_742;
    ns_1 = v_754;
    ns_2 = v_755;
    ns_3 = v_756;
    nr = v_762;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      v_744 = 0;
      v_757 = true;
      v_758 = true;
      v_759 = true;
      v_764 = true;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        s_St_2_Veryhigh = 5;
        v_743 = s_St_2_Veryhigh;
        nr_St_2_Veryhigh = false;
        v_763 = nr_St_2_Veryhigh;
        ns_St_2_Veryhigh_1 = false;
        v_751 = ns_St_2_Veryhigh_1;
        ns_St_2_Veryhigh_2 = false;
        v_752 = ns_St_2_Veryhigh_2;
        ns_St_2_Veryhigh_3 = true;
        v_753 = ns_St_2_Veryhigh_3;
      } else {
        s_St_2_Verylow = 1;
        nr_St_2_Verylow = false;
        ns_St_2_Verylow_1 = false;
        ns_St_2_Verylow_2 = false;
        ns_St_2_Verylow_3 = false;
        v_743 = s_St_2_Verylow;
        v_763 = nr_St_2_Verylow;
        v_751 = ns_St_2_Verylow_1;
        v_752 = ns_St_2_Verylow_2;
        v_753 = ns_St_2_Verylow_3;
      };
      v_744 = v_743;
      v_757 = v_751;
      v_758 = v_752;
      v_759 = v_753;
      v_764 = v_763;
    };
    _out->s = v_744;
    ns_1 = v_757;
    ns_2 = v_758;
    ns_3 = v_759;
    nr = v_764;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_3_1)) {
    if (!(ck_3_2_0)) {
      if (ck_3_3_0_0) {
        if (ns_St_2_Veryhigh_1) {
          ns_St_2_Veryhigh_2_1 = ns_St_2_Veryhigh_2;
          if (ns_St_2_Veryhigh_2_1) {
            ns_St_2_Veryhigh_3_1_1 = ns_St_2_Veryhigh_3;
          } else {
            ns_St_2_Veryhigh_3_1_0 = ns_St_2_Veryhigh_3;
          };
        } else {
          ns_St_2_Veryhigh_2_0 = ns_St_2_Veryhigh_2;
          if (ns_St_2_Veryhigh_2_0) {
            ns_St_2_Veryhigh_3_0_1 = ns_St_2_Veryhigh_3;
          } else {
            ns_St_2_Veryhigh_3_0_0 = ns_St_2_Veryhigh_3;
          };
        };
      } else {
        if (ns_St_2_Verylow_1) {
          ns_St_2_Verylow_2_1 = ns_St_2_Verylow_2;
          if (ns_St_2_Verylow_2_1) {
            ns_St_2_Verylow_3_1_1 = ns_St_2_Verylow_3;
          } else {
            ns_St_2_Verylow_3_1_0 = ns_St_2_Verylow_3;
          };
        } else {
          ns_St_2_Verylow_2_0 = ns_St_2_Verylow_2;
          if (ns_St_2_Verylow_2_0) {
            ns_St_2_Verylow_3_0_1 = ns_St_2_Verylow_3;
          } else {
            ns_St_2_Verylow_3_0_0 = ns_St_2_Verylow_3;
          };
        };
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
    if (s_4_2_1) {
      s_4_3_1_1 = s_4_3;
    } else {
      s_4_3_1_0 = s_4_3;
    };
  } else {
    s_4_2_0 = s_4_2;
    if (s_4_2_0) {
      s_4_3_0_1 = s_4_3;
    } else {
      s_4_3_0_0 = s_4_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_4_0_0) {
        if (s_4_St_2_Veryhigh_1) {
          s_4_St_2_Veryhigh_2_1 = s_4_St_2_Veryhigh_2;
          if (s_4_St_2_Veryhigh_2_1) {
            s_4_St_2_Veryhigh_3_1_1 = s_4_St_2_Veryhigh_3;
          } else {
            s_4_St_2_Veryhigh_3_1_0 = s_4_St_2_Veryhigh_3;
          };
        } else {
          s_4_St_2_Veryhigh_2_0 = s_4_St_2_Veryhigh_2;
          if (s_4_St_2_Veryhigh_2_0) {
            s_4_St_2_Veryhigh_3_0_1 = s_4_St_2_Veryhigh_3;
          } else {
            s_4_St_2_Veryhigh_3_0_0 = s_4_St_2_Veryhigh_3;
          };
        };
      } else {
        if (s_4_St_2_Verylow_1) {
          s_4_St_2_Verylow_2_1 = s_4_St_2_Verylow_2;
          if (s_4_St_2_Verylow_2_1) {
            s_4_St_2_Verylow_3_1_1 = s_4_St_2_Verylow_3;
          } else {
            s_4_St_2_Verylow_3_1_0 = s_4_St_2_Verylow_3;
          };
        } else {
          s_4_St_2_Verylow_2_0 = s_4_St_2_Verylow_2;
          if (s_4_St_2_Verylow_2_0) {
            s_4_St_2_Verylow_3_0_1 = s_4_St_2_Verylow_3;
          } else {
            s_4_St_2_Verylow_3_0_0 = s_4_St_2_Verylow_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_765 = ns_1;
  self->v_766 = ns_2;
  self->v_767 = ns_3;;
}

void Som__music_reset(Som__music_mem* self) {
  self->pnr = false;
  self->v_818 = false;
  self->v_819 = true;
  self->v_820 = true;
}

void Som__music_step(int tipo, Som__music_out* _out, Som__music_mem* self) {
  
  int v_817;
  int v_816;
  int v_815;
  int v_814;
  int v_813;
  int v_812;
  int v_811;
  int v_810;
  int v_809;
  int v_808;
  int v_807;
  int v_806;
  int v_805;
  int v_804;
  int v_803;
  int v_802;
  int v_801;
  int v_800;
  int v_799;
  int v_798;
  int v_797;
  int v_796;
  int v_795;
  int v_794;
  int v_793;
  int v_792;
  int v_791;
  int v_790;
  int v_789;
  int v_788;
  int ns_St_3_Rock_2_0;
  int ns_St_3_Rock_3_0_0;
  int ns_St_3_Rock_3_0_1;
  int ns_St_3_Rock_2_1;
  int ns_St_3_Rock_3_1_0;
  int ns_St_3_Rock_3_1_1;
  int ns_St_3_Regue_2_0;
  int ns_St_3_Regue_3_0_0;
  int ns_St_3_Regue_3_0_1;
  int ns_St_3_Regue_2_1;
  int ns_St_3_Regue_3_1_0;
  int ns_St_3_Regue_3_1_1;
  int ns_St_3_POP_2_0;
  int ns_St_3_POP_3_0_0;
  int ns_St_3_POP_3_0_1;
  int ns_St_3_POP_2_1;
  int ns_St_3_POP_3_1_0;
  int ns_St_3_POP_3_1_1;
  int ns_St_3_Indie_2_0;
  int ns_St_3_Indie_3_0_0;
  int ns_St_3_Indie_3_0_1;
  int ns_St_3_Indie_2_1;
  int ns_St_3_Indie_3_1_0;
  int ns_St_3_Indie_3_1_1;
  int ns_St_3_Funk_2_0;
  int ns_St_3_Funk_3_0_0;
  int ns_St_3_Funk_3_0_1;
  int ns_St_3_Funk_2_1;
  int ns_St_3_Funk_3_1_0;
  int ns_St_3_Funk_3_1_1;
  int ns_St_3_Electronic_2_0;
  int ns_St_3_Electronic_3_0_0;
  int ns_St_3_Electronic_3_0_1;
  int ns_St_3_Electronic_2_1;
  int ns_St_3_Electronic_3_1_0;
  int ns_St_3_Electronic_3_1_1;
  int ns_St_3_Classic_2_0;
  int ns_St_3_Classic_3_0_0;
  int ns_St_3_Classic_3_0_1;
  int ns_St_3_Classic_2_1;
  int ns_St_3_Classic_3_1_0;
  int ns_St_3_Classic_3_1_1;
  int ns_St_3_Off_2_0;
  int ns_St_3_Off_3_0_0;
  int ns_St_3_Off_3_0_1;
  int ns_St_3_Off_2_1;
  int ns_St_3_Off_3_1_0;
  int ns_St_3_Off_3_1_1;
  int ck_4_2_0;
  int ck_4_3_0_0;
  int ck_4_3_0_1;
  int ck_4_2_1;
  int ck_4_3_1_0;
  int ck_4_3_1_1;
  int nr_St_3_Rock;
  int ns_St_3_Rock_3;
  int ns_St_3_Rock_2;
  int ns_St_3_Rock_1;
  int res_St_3_Rock;
  int nr_St_3_Regue;
  int ns_St_3_Regue_3;
  int ns_St_3_Regue_2;
  int ns_St_3_Regue_1;
  int res_St_3_Regue;
  int nr_St_3_POP;
  int ns_St_3_POP_3;
  int ns_St_3_POP_2;
  int ns_St_3_POP_1;
  int res_St_3_POP;
  int nr_St_3_Indie;
  int ns_St_3_Indie_3;
  int ns_St_3_Indie_2;
  int ns_St_3_Indie_1;
  int res_St_3_Indie;
  int nr_St_3_Funk;
  int ns_St_3_Funk_3;
  int ns_St_3_Funk_2;
  int ns_St_3_Funk_1;
  int res_St_3_Funk;
  int nr_St_3_Electronic;
  int ns_St_3_Electronic_3;
  int ns_St_3_Electronic_2;
  int ns_St_3_Electronic_1;
  int res_St_3_Electronic;
  int nr_St_3_Classic;
  int ns_St_3_Classic_3;
  int ns_St_3_Classic_2;
  int ns_St_3_Classic_1;
  int res_St_3_Classic;
  int nr_St_3_Off;
  int ns_St_3_Off_3;
  int ns_St_3_Off_2;
  int ns_St_3_Off_1;
  int res_St_3_Off;
  int ck_4_3;
  int ck_4_2;
  int ck_4_1;
  int v_216_2_0;
  int v_216_3_0_0;
  int v_216_3_0_1;
  int v_216_2_1;
  int v_216_3_1_0;
  int v_216_3_1_1;
  int v_214_2_0;
  int v_214_3_0_0;
  int v_214_3_0_1;
  int v_214_2_1;
  int v_214_3_1_0;
  int v_214_3_1_1;
  int v_212_2_0;
  int v_212_3_0_0;
  int v_212_3_0_1;
  int v_212_2_1;
  int v_212_3_1_0;
  int v_212_3_1_1;
  int v_210_2_0;
  int v_210_3_0_0;
  int v_210_3_0_1;
  int v_210_2_1;
  int v_210_3_1_0;
  int v_210_3_1_1;
  int v_208_2_0;
  int v_208_3_0_0;
  int v_208_3_0_1;
  int v_208_2_1;
  int v_208_3_1_0;
  int v_208_3_1_1;
  int v_206_2_0;
  int v_206_3_0_0;
  int v_206_3_0_1;
  int v_206_2_1;
  int v_206_3_1_0;
  int v_206_3_1_1;
  int v_217;
  int v_216_3;
  int v_216_2;
  int v_216_1;
  int v_215;
  int v_214_3;
  int v_214_2;
  int v_214_1;
  int v_213;
  int v_212_3;
  int v_212_2;
  int v_212_1;
  int v_211;
  int v_210_3;
  int v_210_2;
  int v_210_1;
  int v_209;
  int v_208_3;
  int v_208_2;
  int v_208_1;
  int v_207;
  int v_206_3;
  int v_206_2;
  int v_206_1;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_197_2_0;
  int v_197_3_0_0;
  int v_197_3_0_1;
  int v_197_2_1;
  int v_197_3_1_0;
  int v_197_3_1_1;
  int v_195_2_0;
  int v_195_3_0_0;
  int v_195_3_0_1;
  int v_195_2_1;
  int v_195_3_1_0;
  int v_195_3_1_1;
  int v_193_2_0;
  int v_193_3_0_0;
  int v_193_3_0_1;
  int v_193_2_1;
  int v_193_3_1_0;
  int v_193_3_1_1;
  int v_191_2_0;
  int v_191_3_0_0;
  int v_191_3_0_1;
  int v_191_2_1;
  int v_191_3_1_0;
  int v_191_3_1_1;
  int v_189_2_0;
  int v_189_3_0_0;
  int v_189_3_0_1;
  int v_189_2_1;
  int v_189_3_1_0;
  int v_189_3_1_1;
  int v_187_2_0;
  int v_187_3_0_0;
  int v_187_3_0_1;
  int v_187_2_1;
  int v_187_3_1_0;
  int v_187_3_1_1;
  int v_198;
  int v_197_3;
  int v_197_2;
  int v_197_1;
  int v_196;
  int v_195_3;
  int v_195_2;
  int v_195_1;
  int v_194;
  int v_193_3;
  int v_193_2;
  int v_193_1;
  int v_192;
  int v_191_3;
  int v_191_2;
  int v_191_1;
  int v_190;
  int v_189_3;
  int v_189_2;
  int v_189_1;
  int v_188;
  int v_187_3;
  int v_187_2;
  int v_187_1;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_178_2_0;
  int v_178_3_0_0;
  int v_178_3_0_1;
  int v_178_2_1;
  int v_178_3_1_0;
  int v_178_3_1_1;
  int v_176_2_0;
  int v_176_3_0_0;
  int v_176_3_0_1;
  int v_176_2_1;
  int v_176_3_1_0;
  int v_176_3_1_1;
  int v_174_2_0;
  int v_174_3_0_0;
  int v_174_3_0_1;
  int v_174_2_1;
  int v_174_3_1_0;
  int v_174_3_1_1;
  int v_172_2_0;
  int v_172_3_0_0;
  int v_172_3_0_1;
  int v_172_2_1;
  int v_172_3_1_0;
  int v_172_3_1_1;
  int v_170_2_0;
  int v_170_3_0_0;
  int v_170_3_0_1;
  int v_170_2_1;
  int v_170_3_1_0;
  int v_170_3_1_1;
  int v_168_2_0;
  int v_168_3_0_0;
  int v_168_3_0_1;
  int v_168_2_1;
  int v_168_3_1_0;
  int v_168_3_1_1;
  int v_179;
  int v_178_3;
  int v_178_2;
  int v_178_1;
  int v_177;
  int v_176_3;
  int v_176_2;
  int v_176_1;
  int v_175;
  int v_174_3;
  int v_174_2;
  int v_174_1;
  int v_173;
  int v_172_3;
  int v_172_2;
  int v_172_1;
  int v_171;
  int v_170_3;
  int v_170_2;
  int v_170_1;
  int v_169;
  int v_168_3;
  int v_168_2;
  int v_168_1;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_159_2_0;
  int v_159_3_0_0;
  int v_159_3_0_1;
  int v_159_2_1;
  int v_159_3_1_0;
  int v_159_3_1_1;
  int v_157_2_0;
  int v_157_3_0_0;
  int v_157_3_0_1;
  int v_157_2_1;
  int v_157_3_1_0;
  int v_157_3_1_1;
  int v_155_2_0;
  int v_155_3_0_0;
  int v_155_3_0_1;
  int v_155_2_1;
  int v_155_3_1_0;
  int v_155_3_1_1;
  int v_153_2_0;
  int v_153_3_0_0;
  int v_153_3_0_1;
  int v_153_2_1;
  int v_153_3_1_0;
  int v_153_3_1_1;
  int v_151_2_0;
  int v_151_3_0_0;
  int v_151_3_0_1;
  int v_151_2_1;
  int v_151_3_1_0;
  int v_151_3_1_1;
  int v_149_2_0;
  int v_149_3_0_0;
  int v_149_3_0_1;
  int v_149_2_1;
  int v_149_3_1_0;
  int v_149_3_1_1;
  int v_160;
  int v_159_3;
  int v_159_2;
  int v_159_1;
  int v_158;
  int v_157_3;
  int v_157_2;
  int v_157_1;
  int v_156;
  int v_155_3;
  int v_155_2;
  int v_155_1;
  int v_154;
  int v_153_3;
  int v_153_2;
  int v_153_1;
  int v_152;
  int v_151_3;
  int v_151_2;
  int v_151_1;
  int v_150;
  int v_149_3;
  int v_149_2;
  int v_149_1;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_140_2_0;
  int v_140_3_0_0;
  int v_140_3_0_1;
  int v_140_2_1;
  int v_140_3_1_0;
  int v_140_3_1_1;
  int v_138_2_0;
  int v_138_3_0_0;
  int v_138_3_0_1;
  int v_138_2_1;
  int v_138_3_1_0;
  int v_138_3_1_1;
  int v_136_2_0;
  int v_136_3_0_0;
  int v_136_3_0_1;
  int v_136_2_1;
  int v_136_3_1_0;
  int v_136_3_1_1;
  int v_134_2_0;
  int v_134_3_0_0;
  int v_134_3_0_1;
  int v_134_2_1;
  int v_134_3_1_0;
  int v_134_3_1_1;
  int v_132_2_0;
  int v_132_3_0_0;
  int v_132_3_0_1;
  int v_132_2_1;
  int v_132_3_1_0;
  int v_132_3_1_1;
  int v_130_2_0;
  int v_130_3_0_0;
  int v_130_3_0_1;
  int v_130_2_1;
  int v_130_3_1_0;
  int v_130_3_1_1;
  int v_141;
  int v_140_3;
  int v_140_2;
  int v_140_1;
  int v_139;
  int v_138_3;
  int v_138_2;
  int v_138_1;
  int v_137;
  int v_136_3;
  int v_136_2;
  int v_136_1;
  int v_135;
  int v_134_3;
  int v_134_2;
  int v_134_1;
  int v_133;
  int v_132_3;
  int v_132_2;
  int v_132_1;
  int v_131;
  int v_130_3;
  int v_130_2;
  int v_130_1;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_121_2_0;
  int v_121_3_0_0;
  int v_121_3_0_1;
  int v_121_2_1;
  int v_121_3_1_0;
  int v_121_3_1_1;
  int v_119_2_0;
  int v_119_3_0_0;
  int v_119_3_0_1;
  int v_119_2_1;
  int v_119_3_1_0;
  int v_119_3_1_1;
  int v_117_2_0;
  int v_117_3_0_0;
  int v_117_3_0_1;
  int v_117_2_1;
  int v_117_3_1_0;
  int v_117_3_1_1;
  int v_115_2_0;
  int v_115_3_0_0;
  int v_115_3_0_1;
  int v_115_2_1;
  int v_115_3_1_0;
  int v_115_3_1_1;
  int v_113_2_0;
  int v_113_3_0_0;
  int v_113_3_0_1;
  int v_113_2_1;
  int v_113_3_1_0;
  int v_113_3_1_1;
  int v_111_2_0;
  int v_111_3_0_0;
  int v_111_3_0_1;
  int v_111_2_1;
  int v_111_3_1_0;
  int v_111_3_1_1;
  int v_122;
  int v_121_3;
  int v_121_2;
  int v_121_1;
  int v_120;
  int v_119_3;
  int v_119_2;
  int v_119_1;
  int v_118;
  int v_117_3;
  int v_117_2;
  int v_117_1;
  int v_116;
  int v_115_3;
  int v_115_2;
  int v_115_1;
  int v_114;
  int v_113_3;
  int v_113_2;
  int v_113_1;
  int v_112;
  int v_111_3;
  int v_111_2;
  int v_111_1;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_102_2_0;
  int v_102_3_0_0;
  int v_102_3_0_1;
  int v_102_2_1;
  int v_102_3_1_0;
  int v_102_3_1_1;
  int v_100_2_0;
  int v_100_3_0_0;
  int v_100_3_0_1;
  int v_100_2_1;
  int v_100_3_1_0;
  int v_100_3_1_1;
  int v_98_2_0;
  int v_98_3_0_0;
  int v_98_3_0_1;
  int v_98_2_1;
  int v_98_3_1_0;
  int v_98_3_1_1;
  int v_96_2_0;
  int v_96_3_0_0;
  int v_96_3_0_1;
  int v_96_2_1;
  int v_96_3_1_0;
  int v_96_3_1_1;
  int v_94_2_0;
  int v_94_3_0_0;
  int v_94_3_0_1;
  int v_94_2_1;
  int v_94_3_1_0;
  int v_94_3_1_1;
  int v_92_2_0;
  int v_92_3_0_0;
  int v_92_3_0_1;
  int v_92_2_1;
  int v_92_3_1_0;
  int v_92_3_1_1;
  int v_103;
  int v_102_3;
  int v_102_2;
  int v_102_1;
  int v_101;
  int v_100_3;
  int v_100_2;
  int v_100_1;
  int v_99;
  int v_98_3;
  int v_98_2;
  int v_98_1;
  int v_97;
  int v_96_3;
  int v_96_2;
  int v_96_1;
  int v_95;
  int v_94_3;
  int v_94_2;
  int v_94_1;
  int v_93;
  int v_92_3;
  int v_92_2;
  int v_92_1;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_83_2_0;
  int v_83_3_0_0;
  int v_83_3_0_1;
  int v_83_2_1;
  int v_83_3_1_0;
  int v_83_3_1_1;
  int v_81_2_0;
  int v_81_3_0_0;
  int v_81_3_0_1;
  int v_81_2_1;
  int v_81_3_1_0;
  int v_81_3_1_1;
  int v_79_2_0;
  int v_79_3_0_0;
  int v_79_3_0_1;
  int v_79_2_1;
  int v_79_3_1_0;
  int v_79_3_1_1;
  int v_77_2_0;
  int v_77_3_0_0;
  int v_77_3_0_1;
  int v_77_2_1;
  int v_77_3_1_0;
  int v_77_3_1_1;
  int v_75_2_0;
  int v_75_3_0_0;
  int v_75_3_0_1;
  int v_75_2_1;
  int v_75_3_1_0;
  int v_75_3_1_1;
  int v_73_2_0;
  int v_73_3_0_0;
  int v_73_3_0_1;
  int v_73_2_1;
  int v_73_3_1_0;
  int v_73_3_1_1;
  int v_84;
  int v_83_3;
  int v_83_2;
  int v_83_1;
  int v_82;
  int v_81_3;
  int v_81_2;
  int v_81_1;
  int v_80;
  int v_79_3;
  int v_79_2;
  int v_79_1;
  int v_78;
  int v_77_3;
  int v_77_2;
  int v_77_1;
  int v_76;
  int v_75_3;
  int v_75_2;
  int v_75_1;
  int v_74;
  int v_73_3;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v;
  int v_844;
  int v_843;
  int v_842;
  int v_841;
  int v_840;
  int v_839;
  int v_838;
  int v_837;
  int v_836;
  int v_835;
  int v_834;
  int v_833;
  int v_832;
  int v_831;
  int v_830;
  int v_829;
  int v_828;
  int v_827;
  int v_826;
  int v_825;
  int v_824;
  int v_823;
  int v_822;
  int v_821;
  int s_St_3_Rock_2_0;
  int s_St_3_Rock_3_0_0;
  int s_St_3_Rock_3_0_1;
  int s_St_3_Rock_2_1;
  int s_St_3_Rock_3_1_0;
  int s_St_3_Rock_3_1_1;
  int s_St_3_Regue_2_0;
  int s_St_3_Regue_3_0_0;
  int s_St_3_Regue_3_0_1;
  int s_St_3_Regue_2_1;
  int s_St_3_Regue_3_1_0;
  int s_St_3_Regue_3_1_1;
  int s_St_3_POP_2_0;
  int s_St_3_POP_3_0_0;
  int s_St_3_POP_3_0_1;
  int s_St_3_POP_2_1;
  int s_St_3_POP_3_1_0;
  int s_St_3_POP_3_1_1;
  int s_St_3_Indie_2_0;
  int s_St_3_Indie_3_0_0;
  int s_St_3_Indie_3_0_1;
  int s_St_3_Indie_2_1;
  int s_St_3_Indie_3_1_0;
  int s_St_3_Indie_3_1_1;
  int s_St_3_Funk_2_0;
  int s_St_3_Funk_3_0_0;
  int s_St_3_Funk_3_0_1;
  int s_St_3_Funk_2_1;
  int s_St_3_Funk_3_1_0;
  int s_St_3_Funk_3_1_1;
  int s_St_3_Electronic_2_0;
  int s_St_3_Electronic_3_0_0;
  int s_St_3_Electronic_3_0_1;
  int s_St_3_Electronic_2_1;
  int s_St_3_Electronic_3_1_0;
  int s_St_3_Electronic_3_1_1;
  int s_St_3_Classic_2_0;
  int s_St_3_Classic_3_0_0;
  int s_St_3_Classic_3_0_1;
  int s_St_3_Classic_2_1;
  int s_St_3_Classic_3_1_0;
  int s_St_3_Classic_3_1_1;
  int s_St_3_Off_2_0;
  int s_St_3_Off_3_0_0;
  int s_St_3_Off_3_0_1;
  int s_St_3_Off_2_1;
  int s_St_3_Off_3_1_0;
  int s_St_3_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_3_Rock;
  int s_St_3_Rock_3;
  int s_St_3_Rock_2;
  int s_St_3_Rock_1;
  int r_St_3_Regue;
  int s_St_3_Regue_3;
  int s_St_3_Regue_2;
  int s_St_3_Regue_1;
  int r_St_3_POP;
  int s_St_3_POP_3;
  int s_St_3_POP_2;
  int s_St_3_POP_1;
  int r_St_3_Indie;
  int s_St_3_Indie_3;
  int s_St_3_Indie_2;
  int s_St_3_Indie_1;
  int r_St_3_Funk;
  int s_St_3_Funk_3;
  int s_St_3_Funk_2;
  int s_St_3_Funk_1;
  int r_St_3_Electronic;
  int s_St_3_Electronic_3;
  int s_St_3_Electronic_2;
  int s_St_3_Electronic_1;
  int r_St_3_Classic;
  int s_St_3_Classic_3;
  int s_St_3_Classic_2;
  int s_St_3_Classic_1;
  int r_St_3_Off;
  int s_St_3_Off_3;
  int s_St_3_Off_2;
  int s_St_3_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_818;
  ck_2 = self->v_819;
  ck_3 = self->v_820;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_186 = (tipo==7);
        if (v_186) {
          v_188 = true;
          v_187_1 = false;
          v_187_2 = false;
          v_187_3 = false;
        } else {
          v_188 = self->pnr;
          v_187_1 = true;
          v_187_2 = true;
          v_187_3 = true;
        };
        v_185 = (tipo==6);
        if (v_185) {
          v_190 = true;
          v_189_1 = false;
          v_189_2 = false;
          v_189_3 = true;
        } else {
          v_190 = v_188;
          v_189_1 = v_187_1;
          v_189_2 = v_187_2;
          v_189_3 = v_187_3;
        };
        v_184 = (tipo==5);
        if (v_184) {
          v_192 = true;
          v_191_1 = false;
          v_191_2 = true;
          v_191_3 = false;
        } else {
          v_192 = v_190;
          v_191_1 = v_189_1;
          v_191_2 = v_189_2;
          v_191_3 = v_189_3;
        };
        v_183 = (tipo==4);
        if (v_183) {
          v_194 = true;
          v_193_1 = true;
          v_193_2 = false;
          v_193_3 = false;
        } else {
          v_194 = v_192;
          v_193_1 = v_191_1;
          v_193_2 = v_191_2;
          v_193_3 = v_191_3;
        };
        v_182 = (tipo==3);
        if (v_182) {
          v_196 = true;
          v_195_1 = true;
          v_195_2 = false;
          v_195_3 = true;
        } else {
          v_196 = v_194;
          v_195_1 = v_193_1;
          v_195_2 = v_193_2;
          v_195_3 = v_193_3;
        };
        v_181 = (tipo==2);
        if (v_181) {
          v_198 = true;
          v_197_1 = true;
          v_197_2 = true;
          v_197_3 = false;
        } else {
          v_198 = v_196;
          v_197_1 = v_195_1;
          v_197_2 = v_195_2;
          v_197_3 = v_195_3;
        };
        v_180 = (tipo==0);
        if (v_180) {
          r_St_3_Classic = true;
          s_St_3_Classic_1 = false;
          s_St_3_Classic_2 = true;
          s_St_3_Classic_3 = true;
        } else {
          r_St_3_Classic = v_198;
          s_St_3_Classic_1 = v_197_1;
          s_St_3_Classic_2 = v_197_2;
          s_St_3_Classic_3 = v_197_3;
        };
        v_839 = r_St_3_Classic;
        v_821 = s_St_3_Classic_1;
        v_822 = s_St_3_Classic_2;
        v_823 = s_St_3_Classic_3;
        if (v_187_1) {
          v_187_2_1 = v_187_2;
          if (v_187_2_1) {
            v_187_3_1_1 = v_187_3;
          } else {
            v_187_3_1_0 = v_187_3;
          };
        } else {
          v_187_2_0 = v_187_2;
          if (v_187_2_0) {
            v_187_3_0_1 = v_187_3;
          } else {
            v_187_3_0_0 = v_187_3;
          };
        };
        if (v_189_1) {
          v_189_2_1 = v_189_2;
          if (v_189_2_1) {
            v_189_3_1_1 = v_189_3;
          } else {
            v_189_3_1_0 = v_189_3;
          };
        } else {
          v_189_2_0 = v_189_2;
          if (v_189_2_0) {
            v_189_3_0_1 = v_189_3;
          } else {
            v_189_3_0_0 = v_189_3;
          };
        };
        if (v_191_1) {
          v_191_2_1 = v_191_2;
          if (v_191_2_1) {
            v_191_3_1_1 = v_191_3;
          } else {
            v_191_3_1_0 = v_191_3;
          };
        } else {
          v_191_2_0 = v_191_2;
          if (v_191_2_0) {
            v_191_3_0_1 = v_191_3;
          } else {
            v_191_3_0_0 = v_191_3;
          };
        };
        if (v_193_1) {
          v_193_2_1 = v_193_2;
          if (v_193_2_1) {
            v_193_3_1_1 = v_193_3;
          } else {
            v_193_3_1_0 = v_193_3;
          };
        } else {
          v_193_2_0 = v_193_2;
          if (v_193_2_0) {
            v_193_3_0_1 = v_193_3;
          } else {
            v_193_3_0_0 = v_193_3;
          };
        };
        if (v_195_1) {
          v_195_2_1 = v_195_2;
          if (v_195_2_1) {
            v_195_3_1_1 = v_195_3;
          } else {
            v_195_3_1_0 = v_195_3;
          };
        } else {
          v_195_2_0 = v_195_2;
          if (v_195_2_0) {
            v_195_3_0_1 = v_195_3;
          } else {
            v_195_3_0_0 = v_195_3;
          };
        };
        if (v_197_1) {
          v_197_2_1 = v_197_2;
          if (v_197_2_1) {
            v_197_3_1_1 = v_197_3;
          } else {
            v_197_3_1_0 = v_197_3;
          };
        } else {
          v_197_2_0 = v_197_2;
          if (v_197_2_0) {
            v_197_3_0_1 = v_197_3;
          } else {
            v_197_3_0_0 = v_197_3;
          };
        };
        if (s_St_3_Classic_1) {
          s_St_3_Classic_2_1 = s_St_3_Classic_2;
          if (s_St_3_Classic_2_1) {
            s_St_3_Classic_3_1_1 = s_St_3_Classic_3;
          } else {
            s_St_3_Classic_3_1_0 = s_St_3_Classic_3;
          };
        } else {
          s_St_3_Classic_2_0 = s_St_3_Classic_2;
          if (s_St_3_Classic_2_0) {
            s_St_3_Classic_3_0_1 = s_St_3_Classic_3;
          } else {
            s_St_3_Classic_3_0_0 = s_St_3_Classic_3;
          };
        };
      } else {
        v_167 = (tipo==7);
        if (v_167) {
          v_169 = true;
          v_168_1 = false;
          v_168_2 = false;
          v_168_3 = false;
        } else {
          v_169 = self->pnr;
          v_168_1 = true;
          v_168_2 = true;
          v_168_3 = false;
        };
        v_166 = (tipo==6);
        if (v_166) {
          v_171 = true;
          v_170_1 = false;
          v_170_2 = false;
          v_170_3 = true;
        } else {
          v_171 = v_169;
          v_170_1 = v_168_1;
          v_170_2 = v_168_2;
          v_170_3 = v_168_3;
        };
        v_165 = (tipo==5);
        if (v_165) {
          v_173 = true;
          v_172_1 = false;
          v_172_2 = true;
          v_172_3 = false;
        } else {
          v_173 = v_171;
          v_172_1 = v_170_1;
          v_172_2 = v_170_2;
          v_172_3 = v_170_3;
        };
        v_164 = (tipo==4);
        if (v_164) {
          v_175 = true;
          v_174_1 = true;
          v_174_2 = false;
          v_174_3 = false;
        } else {
          v_175 = v_173;
          v_174_1 = v_172_1;
          v_174_2 = v_172_2;
          v_174_3 = v_172_3;
        };
        v_163 = (tipo==3);
        if (v_163) {
          v_177 = true;
          v_176_1 = true;
          v_176_2 = false;
          v_176_3 = true;
        } else {
          v_177 = v_175;
          v_176_1 = v_174_1;
          v_176_2 = v_174_2;
          v_176_3 = v_174_3;
        };
        v_162 = (tipo==1);
        if (v_162) {
          v_179 = true;
          v_178_1 = true;
          v_178_2 = true;
          v_178_3 = true;
        } else {
          v_179 = v_177;
          v_178_1 = v_176_1;
          v_178_2 = v_176_2;
          v_178_3 = v_176_3;
        };
        v_161 = (tipo==0);
        if (v_161) {
          r_St_3_Electronic = true;
        } else {
          r_St_3_Electronic = v_179;
        };
        v_839 = r_St_3_Electronic;
        if (v_161) {
          s_St_3_Electronic_1 = false;
        } else {
          s_St_3_Electronic_1 = v_178_1;
        };
        v_821 = s_St_3_Electronic_1;
        if (v_161) {
          s_St_3_Electronic_2 = true;
        } else {
          s_St_3_Electronic_2 = v_178_2;
        };
        v_822 = s_St_3_Electronic_2;
        if (v_161) {
          s_St_3_Electronic_3 = true;
        } else {
          s_St_3_Electronic_3 = v_178_3;
        };
        v_823 = s_St_3_Electronic_3;
        if (v_168_1) {
          v_168_2_1 = v_168_2;
          if (v_168_2_1) {
            v_168_3_1_1 = v_168_3;
          } else {
            v_168_3_1_0 = v_168_3;
          };
        } else {
          v_168_2_0 = v_168_2;
          if (v_168_2_0) {
            v_168_3_0_1 = v_168_3;
          } else {
            v_168_3_0_0 = v_168_3;
          };
        };
        if (v_170_1) {
          v_170_2_1 = v_170_2;
          if (v_170_2_1) {
            v_170_3_1_1 = v_170_3;
          } else {
            v_170_3_1_0 = v_170_3;
          };
        } else {
          v_170_2_0 = v_170_2;
          if (v_170_2_0) {
            v_170_3_0_1 = v_170_3;
          } else {
            v_170_3_0_0 = v_170_3;
          };
        };
        if (v_172_1) {
          v_172_2_1 = v_172_2;
          if (v_172_2_1) {
            v_172_3_1_1 = v_172_3;
          } else {
            v_172_3_1_0 = v_172_3;
          };
        } else {
          v_172_2_0 = v_172_2;
          if (v_172_2_0) {
            v_172_3_0_1 = v_172_3;
          } else {
            v_172_3_0_0 = v_172_3;
          };
        };
        if (v_174_1) {
          v_174_2_1 = v_174_2;
          if (v_174_2_1) {
            v_174_3_1_1 = v_174_3;
          } else {
            v_174_3_1_0 = v_174_3;
          };
        } else {
          v_174_2_0 = v_174_2;
          if (v_174_2_0) {
            v_174_3_0_1 = v_174_3;
          } else {
            v_174_3_0_0 = v_174_3;
          };
        };
        if (v_176_1) {
          v_176_2_1 = v_176_2;
          if (v_176_2_1) {
            v_176_3_1_1 = v_176_3;
          } else {
            v_176_3_1_0 = v_176_3;
          };
        } else {
          v_176_2_0 = v_176_2;
          if (v_176_2_0) {
            v_176_3_0_1 = v_176_3;
          } else {
            v_176_3_0_0 = v_176_3;
          };
        };
        if (v_178_1) {
          v_178_2_1 = v_178_2;
          if (v_178_2_1) {
            v_178_3_1_1 = v_178_3;
          } else {
            v_178_3_1_0 = v_178_3;
          };
        } else {
          v_178_2_0 = v_178_2;
          if (v_178_2_0) {
            v_178_3_0_1 = v_178_3;
          } else {
            v_178_3_0_0 = v_178_3;
          };
        };
        if (s_St_3_Electronic_1) {
          s_St_3_Electronic_2_1 = s_St_3_Electronic_2;
          if (s_St_3_Electronic_2_1) {
            s_St_3_Electronic_3_1_1 = s_St_3_Electronic_3;
          } else {
            s_St_3_Electronic_3_1_0 = s_St_3_Electronic_3;
          };
        } else {
          s_St_3_Electronic_2_0 = s_St_3_Electronic_2;
          if (s_St_3_Electronic_2_0) {
            s_St_3_Electronic_3_0_1 = s_St_3_Electronic_3;
          } else {
            s_St_3_Electronic_3_0_0 = s_St_3_Electronic_3;
          };
        };
      };
      v_833 = v_821;
      v_834 = v_822;
      v_835 = v_823;
      v_841 = v_839;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_148 = (tipo==7);
        if (v_148) {
          v_150 = true;
          v_149_1 = false;
          v_149_2 = false;
          v_149_3 = false;
        } else {
          v_150 = self->pnr;
          v_149_1 = true;
          v_149_2 = false;
          v_149_3 = true;
        };
        v_147 = (tipo==6);
        if (v_147) {
          v_152 = true;
          v_151_1 = false;
          v_151_2 = false;
          v_151_3 = true;
        } else {
          v_152 = v_150;
          v_151_1 = v_149_1;
          v_151_2 = v_149_2;
          v_151_3 = v_149_3;
        };
        v_146 = (tipo==5);
        if (v_146) {
          v_154 = true;
          v_153_1 = false;
          v_153_2 = true;
          v_153_3 = false;
        } else {
          v_154 = v_152;
          v_153_1 = v_151_1;
          v_153_2 = v_151_2;
          v_153_3 = v_151_3;
        };
        v_145 = (tipo==4);
        if (v_145) {
          v_156 = true;
          v_155_1 = true;
          v_155_2 = false;
          v_155_3 = false;
        } else {
          v_156 = v_154;
          v_155_1 = v_153_1;
          v_155_2 = v_153_2;
          v_155_3 = v_153_3;
        };
        v_144 = (tipo==2);
        if (v_144) {
          v_158 = true;
          v_157_1 = true;
          v_157_2 = true;
          v_157_3 = false;
        } else {
          v_158 = v_156;
          v_157_1 = v_155_1;
          v_157_2 = v_155_2;
          v_157_3 = v_155_3;
        };
        v_143 = (tipo==1);
        if (v_143) {
          v_160 = true;
          v_159_1 = true;
          v_159_2 = true;
          v_159_3 = true;
        } else {
          v_160 = v_158;
          v_159_1 = v_157_1;
          v_159_2 = v_157_2;
          v_159_3 = v_157_3;
        };
        v_142 = (tipo==0);
        if (v_142) {
          r_St_3_Funk = true;
          s_St_3_Funk_1 = false;
          s_St_3_Funk_2 = true;
          s_St_3_Funk_3 = true;
        } else {
          r_St_3_Funk = v_160;
          s_St_3_Funk_1 = v_159_1;
          s_St_3_Funk_2 = v_159_2;
          s_St_3_Funk_3 = v_159_3;
        };
        v_840 = r_St_3_Funk;
        v_824 = s_St_3_Funk_1;
        v_825 = s_St_3_Funk_2;
        v_826 = s_St_3_Funk_3;
      } else {
        v_129 = (tipo==7);
        if (v_129) {
          v_131 = true;
          v_130_1 = false;
          v_130_2 = false;
          v_130_3 = false;
        } else {
          v_131 = self->pnr;
          v_130_1 = true;
          v_130_2 = false;
          v_130_3 = false;
        };
        v_128 = (tipo==6);
        if (v_128) {
          v_133 = true;
          v_132_1 = false;
          v_132_2 = false;
          v_132_3 = true;
        } else {
          v_133 = v_131;
          v_132_1 = v_130_1;
          v_132_2 = v_130_2;
          v_132_3 = v_130_3;
        };
        v_127 = (tipo==5);
        if (v_127) {
          v_135 = true;
          v_134_1 = false;
          v_134_2 = true;
          v_134_3 = false;
        } else {
          v_135 = v_133;
          v_134_1 = v_132_1;
          v_134_2 = v_132_2;
          v_134_3 = v_132_3;
        };
        v_126 = (tipo==3);
        if (v_126) {
          v_137 = true;
          v_136_1 = true;
          v_136_2 = false;
          v_136_3 = true;
        } else {
          v_137 = v_135;
          v_136_1 = v_134_1;
          v_136_2 = v_134_2;
          v_136_3 = v_134_3;
        };
        v_125 = (tipo==2);
        if (v_125) {
          v_139 = true;
          v_138_1 = true;
          v_138_2 = true;
          v_138_3 = false;
        } else {
          v_139 = v_137;
          v_138_1 = v_136_1;
          v_138_2 = v_136_2;
          v_138_3 = v_136_3;
        };
        v_124 = (tipo==1);
        if (v_124) {
          v_141 = true;
          v_140_1 = true;
          v_140_2 = true;
          v_140_3 = true;
        } else {
          v_141 = v_139;
          v_140_1 = v_138_1;
          v_140_2 = v_138_2;
          v_140_3 = v_138_3;
        };
        v_123 = (tipo==0);
        if (v_123) {
          r_St_3_Indie = true;
        } else {
          r_St_3_Indie = v_141;
        };
        v_840 = r_St_3_Indie;
        if (v_123) {
          s_St_3_Indie_1 = false;
        } else {
          s_St_3_Indie_1 = v_140_1;
        };
        v_824 = s_St_3_Indie_1;
        if (v_123) {
          s_St_3_Indie_2 = true;
        } else {
          s_St_3_Indie_2 = v_140_2;
        };
        v_825 = s_St_3_Indie_2;
        if (v_123) {
          s_St_3_Indie_3 = true;
        } else {
          s_St_3_Indie_3 = v_140_3;
        };
        v_826 = s_St_3_Indie_3;
      };
      v_833 = v_824;
      v_834 = v_825;
      v_835 = v_826;
      v_841 = v_840;
      if (ck_3_1_0) {
        if (v_149_1) {
          v_149_2_1 = v_149_2;
          if (v_149_2_1) {
            v_149_3_1_1 = v_149_3;
          } else {
            v_149_3_1_0 = v_149_3;
          };
        } else {
          v_149_2_0 = v_149_2;
          if (v_149_2_0) {
            v_149_3_0_1 = v_149_3;
          } else {
            v_149_3_0_0 = v_149_3;
          };
        };
        if (v_151_1) {
          v_151_2_1 = v_151_2;
          if (v_151_2_1) {
            v_151_3_1_1 = v_151_3;
          } else {
            v_151_3_1_0 = v_151_3;
          };
        } else {
          v_151_2_0 = v_151_2;
          if (v_151_2_0) {
            v_151_3_0_1 = v_151_3;
          } else {
            v_151_3_0_0 = v_151_3;
          };
        };
        if (v_153_1) {
          v_153_2_1 = v_153_2;
          if (v_153_2_1) {
            v_153_3_1_1 = v_153_3;
          } else {
            v_153_3_1_0 = v_153_3;
          };
        } else {
          v_153_2_0 = v_153_2;
          if (v_153_2_0) {
            v_153_3_0_1 = v_153_3;
          } else {
            v_153_3_0_0 = v_153_3;
          };
        };
        if (v_155_1) {
          v_155_2_1 = v_155_2;
          if (v_155_2_1) {
            v_155_3_1_1 = v_155_3;
          } else {
            v_155_3_1_0 = v_155_3;
          };
        } else {
          v_155_2_0 = v_155_2;
          if (v_155_2_0) {
            v_155_3_0_1 = v_155_3;
          } else {
            v_155_3_0_0 = v_155_3;
          };
        };
        if (v_157_1) {
          v_157_2_1 = v_157_2;
          if (v_157_2_1) {
            v_157_3_1_1 = v_157_3;
          } else {
            v_157_3_1_0 = v_157_3;
          };
        } else {
          v_157_2_0 = v_157_2;
          if (v_157_2_0) {
            v_157_3_0_1 = v_157_3;
          } else {
            v_157_3_0_0 = v_157_3;
          };
        };
        if (v_159_1) {
          v_159_2_1 = v_159_2;
          if (v_159_2_1) {
            v_159_3_1_1 = v_159_3;
          } else {
            v_159_3_1_0 = v_159_3;
          };
        } else {
          v_159_2_0 = v_159_2;
          if (v_159_2_0) {
            v_159_3_0_1 = v_159_3;
          } else {
            v_159_3_0_0 = v_159_3;
          };
        };
        if (s_St_3_Funk_1) {
          s_St_3_Funk_2_1 = s_St_3_Funk_2;
          if (s_St_3_Funk_2_1) {
            s_St_3_Funk_3_1_1 = s_St_3_Funk_3;
          } else {
            s_St_3_Funk_3_1_0 = s_St_3_Funk_3;
          };
        } else {
          s_St_3_Funk_2_0 = s_St_3_Funk_2;
          if (s_St_3_Funk_2_0) {
            s_St_3_Funk_3_0_1 = s_St_3_Funk_3;
          } else {
            s_St_3_Funk_3_0_0 = s_St_3_Funk_3;
          };
        };
      } else {
        if (v_130_1) {
          v_130_2_1 = v_130_2;
          if (v_130_2_1) {
            v_130_3_1_1 = v_130_3;
          } else {
            v_130_3_1_0 = v_130_3;
          };
        } else {
          v_130_2_0 = v_130_2;
          if (v_130_2_0) {
            v_130_3_0_1 = v_130_3;
          } else {
            v_130_3_0_0 = v_130_3;
          };
        };
        if (v_132_1) {
          v_132_2_1 = v_132_2;
          if (v_132_2_1) {
            v_132_3_1_1 = v_132_3;
          } else {
            v_132_3_1_0 = v_132_3;
          };
        } else {
          v_132_2_0 = v_132_2;
          if (v_132_2_0) {
            v_132_3_0_1 = v_132_3;
          } else {
            v_132_3_0_0 = v_132_3;
          };
        };
        if (v_134_1) {
          v_134_2_1 = v_134_2;
          if (v_134_2_1) {
            v_134_3_1_1 = v_134_3;
          } else {
            v_134_3_1_0 = v_134_3;
          };
        } else {
          v_134_2_0 = v_134_2;
          if (v_134_2_0) {
            v_134_3_0_1 = v_134_3;
          } else {
            v_134_3_0_0 = v_134_3;
          };
        };
        if (v_136_1) {
          v_136_2_1 = v_136_2;
          if (v_136_2_1) {
            v_136_3_1_1 = v_136_3;
          } else {
            v_136_3_1_0 = v_136_3;
          };
        } else {
          v_136_2_0 = v_136_2;
          if (v_136_2_0) {
            v_136_3_0_1 = v_136_3;
          } else {
            v_136_3_0_0 = v_136_3;
          };
        };
        if (v_138_1) {
          v_138_2_1 = v_138_2;
          if (v_138_2_1) {
            v_138_3_1_1 = v_138_3;
          } else {
            v_138_3_1_0 = v_138_3;
          };
        } else {
          v_138_2_0 = v_138_2;
          if (v_138_2_0) {
            v_138_3_0_1 = v_138_3;
          } else {
            v_138_3_0_0 = v_138_3;
          };
        };
        if (v_140_1) {
          v_140_2_1 = v_140_2;
          if (v_140_2_1) {
            v_140_3_1_1 = v_140_3;
          } else {
            v_140_3_1_0 = v_140_3;
          };
        } else {
          v_140_2_0 = v_140_2;
          if (v_140_2_0) {
            v_140_3_0_1 = v_140_3;
          } else {
            v_140_3_0_0 = v_140_3;
          };
        };
        if (s_St_3_Indie_1) {
          s_St_3_Indie_2_1 = s_St_3_Indie_2;
          if (s_St_3_Indie_2_1) {
            s_St_3_Indie_3_1_1 = s_St_3_Indie_3;
          } else {
            s_St_3_Indie_3_1_0 = s_St_3_Indie_3;
          };
        } else {
          s_St_3_Indie_2_0 = s_St_3_Indie_2;
          if (s_St_3_Indie_2_0) {
            s_St_3_Indie_3_0_1 = s_St_3_Indie_3;
          } else {
            s_St_3_Indie_3_0_0 = s_St_3_Indie_3;
          };
        };
      };
    };
    s_1 = v_833;
    s_2 = v_834;
    s_3 = v_835;
    r = v_841;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        v_205 = (tipo==7);
        if (v_205) {
          v_207 = true;
          v_206_1 = false;
          v_206_2 = false;
          v_206_3 = false;
        } else {
          v_207 = self->pnr;
          v_206_1 = false;
          v_206_2 = true;
          v_206_3 = true;
        };
        v_204 = (tipo==6);
        if (v_204) {
          v_209 = true;
          v_208_1 = false;
          v_208_2 = false;
          v_208_3 = true;
        } else {
          v_209 = v_207;
          v_208_1 = v_206_1;
          v_208_2 = v_206_2;
          v_208_3 = v_206_3;
        };
        v_203 = (tipo==5);
        if (v_203) {
          v_211 = true;
          v_210_1 = false;
          v_210_2 = true;
          v_210_3 = false;
        } else {
          v_211 = v_209;
          v_210_1 = v_208_1;
          v_210_2 = v_208_2;
          v_210_3 = v_208_3;
        };
        v_202 = (tipo==4);
        if (v_202) {
          v_213 = true;
          v_212_1 = true;
          v_212_2 = false;
          v_212_3 = false;
        } else {
          v_213 = v_211;
          v_212_1 = v_210_1;
          v_212_2 = v_210_2;
          v_212_3 = v_210_3;
        };
        v_201 = (tipo==3);
        if (v_201) {
          v_215 = true;
          v_214_1 = true;
          v_214_2 = false;
          v_214_3 = true;
        } else {
          v_215 = v_213;
          v_214_1 = v_212_1;
          v_214_2 = v_212_2;
          v_214_3 = v_212_3;
        };
        v_200 = (tipo==2);
        if (v_200) {
          v_217 = true;
          v_216_1 = true;
          v_216_2 = true;
          v_216_3 = false;
        } else {
          v_217 = v_215;
          v_216_1 = v_214_1;
          v_216_2 = v_214_2;
          v_216_3 = v_214_3;
        };
        v_199 = (tipo==1);
        if (v_199) {
          r_St_3_Off = true;
          s_St_3_Off_1 = true;
          s_St_3_Off_2 = true;
          s_St_3_Off_3 = true;
        } else {
          r_St_3_Off = v_217;
          s_St_3_Off_1 = v_216_1;
          s_St_3_Off_2 = v_216_2;
          s_St_3_Off_3 = v_216_3;
        };
        v_842 = r_St_3_Off;
        v_827 = s_St_3_Off_1;
        v_828 = s_St_3_Off_2;
        v_829 = s_St_3_Off_3;
        if (v_206_1) {
          v_206_2_1 = v_206_2;
          if (v_206_2_1) {
            v_206_3_1_1 = v_206_3;
          } else {
            v_206_3_1_0 = v_206_3;
          };
        } else {
          v_206_2_0 = v_206_2;
          if (v_206_2_0) {
            v_206_3_0_1 = v_206_3;
          } else {
            v_206_3_0_0 = v_206_3;
          };
        };
        if (v_208_1) {
          v_208_2_1 = v_208_2;
          if (v_208_2_1) {
            v_208_3_1_1 = v_208_3;
          } else {
            v_208_3_1_0 = v_208_3;
          };
        } else {
          v_208_2_0 = v_208_2;
          if (v_208_2_0) {
            v_208_3_0_1 = v_208_3;
          } else {
            v_208_3_0_0 = v_208_3;
          };
        };
        if (v_210_1) {
          v_210_2_1 = v_210_2;
          if (v_210_2_1) {
            v_210_3_1_1 = v_210_3;
          } else {
            v_210_3_1_0 = v_210_3;
          };
        } else {
          v_210_2_0 = v_210_2;
          if (v_210_2_0) {
            v_210_3_0_1 = v_210_3;
          } else {
            v_210_3_0_0 = v_210_3;
          };
        };
        if (v_212_1) {
          v_212_2_1 = v_212_2;
          if (v_212_2_1) {
            v_212_3_1_1 = v_212_3;
          } else {
            v_212_3_1_0 = v_212_3;
          };
        } else {
          v_212_2_0 = v_212_2;
          if (v_212_2_0) {
            v_212_3_0_1 = v_212_3;
          } else {
            v_212_3_0_0 = v_212_3;
          };
        };
        if (v_214_1) {
          v_214_2_1 = v_214_2;
          if (v_214_2_1) {
            v_214_3_1_1 = v_214_3;
          } else {
            v_214_3_1_0 = v_214_3;
          };
        } else {
          v_214_2_0 = v_214_2;
          if (v_214_2_0) {
            v_214_3_0_1 = v_214_3;
          } else {
            v_214_3_0_0 = v_214_3;
          };
        };
        if (v_216_1) {
          v_216_2_1 = v_216_2;
          if (v_216_2_1) {
            v_216_3_1_1 = v_216_3;
          } else {
            v_216_3_1_0 = v_216_3;
          };
        } else {
          v_216_2_0 = v_216_2;
          if (v_216_2_0) {
            v_216_3_0_1 = v_216_3;
          } else {
            v_216_3_0_0 = v_216_3;
          };
        };
        if (s_St_3_Off_1) {
          s_St_3_Off_2_1 = s_St_3_Off_2;
          if (s_St_3_Off_2_1) {
            s_St_3_Off_3_1_1 = s_St_3_Off_3;
          } else {
            s_St_3_Off_3_1_0 = s_St_3_Off_3;
          };
        } else {
          s_St_3_Off_2_0 = s_St_3_Off_2;
          if (s_St_3_Off_2_0) {
            s_St_3_Off_3_0_1 = s_St_3_Off_3;
          } else {
            s_St_3_Off_3_0_0 = s_St_3_Off_3;
          };
        };
      } else {
        v_110 = (tipo==7);
        if (v_110) {
          v_112 = true;
          v_111_1 = false;
          v_111_2 = false;
          v_111_3 = false;
        } else {
          v_112 = self->pnr;
          v_111_1 = false;
          v_111_2 = true;
          v_111_3 = false;
        };
        v_109 = (tipo==6);
        if (v_109) {
          v_114 = true;
          v_113_1 = false;
          v_113_2 = false;
          v_113_3 = true;
        } else {
          v_114 = v_112;
          v_113_1 = v_111_1;
          v_113_2 = v_111_2;
          v_113_3 = v_111_3;
        };
        v_108 = (tipo==4);
        if (v_108) {
          v_116 = true;
          v_115_1 = true;
          v_115_2 = false;
          v_115_3 = false;
        } else {
          v_116 = v_114;
          v_115_1 = v_113_1;
          v_115_2 = v_113_2;
          v_115_3 = v_113_3;
        };
        v_107 = (tipo==3);
        if (v_107) {
          v_118 = true;
          v_117_1 = true;
          v_117_2 = false;
          v_117_3 = true;
        } else {
          v_118 = v_116;
          v_117_1 = v_115_1;
          v_117_2 = v_115_2;
          v_117_3 = v_115_3;
        };
        v_106 = (tipo==2);
        if (v_106) {
          v_120 = true;
          v_119_1 = true;
          v_119_2 = true;
          v_119_3 = false;
        } else {
          v_120 = v_118;
          v_119_1 = v_117_1;
          v_119_2 = v_117_2;
          v_119_3 = v_117_3;
        };
        v_105 = (tipo==1);
        if (v_105) {
          v_122 = true;
          v_121_1 = true;
          v_121_2 = true;
          v_121_3 = true;
        } else {
          v_122 = v_120;
          v_121_1 = v_119_1;
          v_121_2 = v_119_2;
          v_121_3 = v_119_3;
        };
        v_104 = (tipo==0);
        if (v_104) {
          r_St_3_POP = true;
        } else {
          r_St_3_POP = v_122;
        };
        v_842 = r_St_3_POP;
        if (v_104) {
          s_St_3_POP_1 = false;
        } else {
          s_St_3_POP_1 = v_121_1;
        };
        v_827 = s_St_3_POP_1;
        if (v_104) {
          s_St_3_POP_2 = true;
        } else {
          s_St_3_POP_2 = v_121_2;
        };
        v_828 = s_St_3_POP_2;
        if (v_104) {
          s_St_3_POP_3 = true;
        } else {
          s_St_3_POP_3 = v_121_3;
        };
        v_829 = s_St_3_POP_3;
        if (v_111_1) {
          v_111_2_1 = v_111_2;
          if (v_111_2_1) {
            v_111_3_1_1 = v_111_3;
          } else {
            v_111_3_1_0 = v_111_3;
          };
        } else {
          v_111_2_0 = v_111_2;
          if (v_111_2_0) {
            v_111_3_0_1 = v_111_3;
          } else {
            v_111_3_0_0 = v_111_3;
          };
        };
        if (v_113_1) {
          v_113_2_1 = v_113_2;
          if (v_113_2_1) {
            v_113_3_1_1 = v_113_3;
          } else {
            v_113_3_1_0 = v_113_3;
          };
        } else {
          v_113_2_0 = v_113_2;
          if (v_113_2_0) {
            v_113_3_0_1 = v_113_3;
          } else {
            v_113_3_0_0 = v_113_3;
          };
        };
        if (v_115_1) {
          v_115_2_1 = v_115_2;
          if (v_115_2_1) {
            v_115_3_1_1 = v_115_3;
          } else {
            v_115_3_1_0 = v_115_3;
          };
        } else {
          v_115_2_0 = v_115_2;
          if (v_115_2_0) {
            v_115_3_0_1 = v_115_3;
          } else {
            v_115_3_0_0 = v_115_3;
          };
        };
        if (v_117_1) {
          v_117_2_1 = v_117_2;
          if (v_117_2_1) {
            v_117_3_1_1 = v_117_3;
          } else {
            v_117_3_1_0 = v_117_3;
          };
        } else {
          v_117_2_0 = v_117_2;
          if (v_117_2_0) {
            v_117_3_0_1 = v_117_3;
          } else {
            v_117_3_0_0 = v_117_3;
          };
        };
        if (v_119_1) {
          v_119_2_1 = v_119_2;
          if (v_119_2_1) {
            v_119_3_1_1 = v_119_3;
          } else {
            v_119_3_1_0 = v_119_3;
          };
        } else {
          v_119_2_0 = v_119_2;
          if (v_119_2_0) {
            v_119_3_0_1 = v_119_3;
          } else {
            v_119_3_0_0 = v_119_3;
          };
        };
        if (v_121_1) {
          v_121_2_1 = v_121_2;
          if (v_121_2_1) {
            v_121_3_1_1 = v_121_3;
          } else {
            v_121_3_1_0 = v_121_3;
          };
        } else {
          v_121_2_0 = v_121_2;
          if (v_121_2_0) {
            v_121_3_0_1 = v_121_3;
          } else {
            v_121_3_0_0 = v_121_3;
          };
        };
        if (s_St_3_POP_1) {
          s_St_3_POP_2_1 = s_St_3_POP_2;
          if (s_St_3_POP_2_1) {
            s_St_3_POP_3_1_1 = s_St_3_POP_3;
          } else {
            s_St_3_POP_3_1_0 = s_St_3_POP_3;
          };
        } else {
          s_St_3_POP_2_0 = s_St_3_POP_2;
          if (s_St_3_POP_2_0) {
            s_St_3_POP_3_0_1 = s_St_3_POP_3;
          } else {
            s_St_3_POP_3_0_0 = s_St_3_POP_3;
          };
        };
      };
      v_836 = v_827;
      v_837 = v_828;
      v_838 = v_829;
      v_844 = v_842;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_91 = (tipo==7);
        if (v_91) {
          v_93 = true;
          v_92_1 = false;
          v_92_2 = false;
          v_92_3 = false;
        } else {
          v_93 = self->pnr;
          v_92_1 = false;
          v_92_2 = false;
          v_92_3 = true;
        };
        v_90 = (tipo==5);
        if (v_90) {
          v_95 = true;
          v_94_1 = false;
          v_94_2 = true;
          v_94_3 = false;
        } else {
          v_95 = v_93;
          v_94_1 = v_92_1;
          v_94_2 = v_92_2;
          v_94_3 = v_92_3;
        };
        v_89 = (tipo==4);
        if (v_89) {
          v_97 = true;
          v_96_1 = true;
          v_96_2 = false;
          v_96_3 = false;
        } else {
          v_97 = v_95;
          v_96_1 = v_94_1;
          v_96_2 = v_94_2;
          v_96_3 = v_94_3;
        };
        v_88 = (tipo==3);
        if (v_88) {
          v_99 = true;
          v_98_1 = true;
          v_98_2 = false;
          v_98_3 = true;
        } else {
          v_99 = v_97;
          v_98_1 = v_96_1;
          v_98_2 = v_96_2;
          v_98_3 = v_96_3;
        };
        v_87 = (tipo==2);
        if (v_87) {
          v_101 = true;
          v_100_1 = true;
          v_100_2 = true;
          v_100_3 = false;
        } else {
          v_101 = v_99;
          v_100_1 = v_98_1;
          v_100_2 = v_98_2;
          v_100_3 = v_98_3;
        };
        v_86 = (tipo==1);
        if (v_86) {
          v_103 = true;
          v_102_1 = true;
          v_102_2 = true;
          v_102_3 = true;
        } else {
          v_103 = v_101;
          v_102_1 = v_100_1;
          v_102_2 = v_100_2;
          v_102_3 = v_100_3;
        };
        v_85 = (tipo==0);
        if (v_85) {
          r_St_3_Regue = true;
          s_St_3_Regue_1 = false;
          s_St_3_Regue_2 = true;
          s_St_3_Regue_3 = true;
        } else {
          r_St_3_Regue = v_103;
          s_St_3_Regue_1 = v_102_1;
          s_St_3_Regue_2 = v_102_2;
          s_St_3_Regue_3 = v_102_3;
        };
        v_843 = r_St_3_Regue;
        v_830 = s_St_3_Regue_1;
        v_831 = s_St_3_Regue_2;
        v_832 = s_St_3_Regue_3;
      } else {
        v_72 = (tipo==6);
        if (v_72) {
          v_74 = true;
          v_73_1 = false;
          v_73_2 = false;
          v_73_3 = true;
        } else {
          v_74 = self->pnr;
          v_73_1 = false;
          v_73_2 = false;
          v_73_3 = false;
        };
        v_71 = (tipo==5);
        if (v_71) {
          v_76 = true;
          v_75_1 = false;
          v_75_2 = true;
          v_75_3 = false;
        } else {
          v_76 = v_74;
          v_75_1 = v_73_1;
          v_75_2 = v_73_2;
          v_75_3 = v_73_3;
        };
        v_70 = (tipo==4);
        if (v_70) {
          v_78 = true;
          v_77_1 = true;
          v_77_2 = false;
          v_77_3 = false;
        } else {
          v_78 = v_76;
          v_77_1 = v_75_1;
          v_77_2 = v_75_2;
          v_77_3 = v_75_3;
        };
        v_69 = (tipo==3);
        if (v_69) {
          v_80 = true;
          v_79_1 = true;
          v_79_2 = false;
          v_79_3 = true;
        } else {
          v_80 = v_78;
          v_79_1 = v_77_1;
          v_79_2 = v_77_2;
          v_79_3 = v_77_3;
        };
        v_68 = (tipo==2);
        if (v_68) {
          v_82 = true;
          v_81_1 = true;
          v_81_2 = true;
          v_81_3 = false;
        } else {
          v_82 = v_80;
          v_81_1 = v_79_1;
          v_81_2 = v_79_2;
          v_81_3 = v_79_3;
        };
        v_67 = (tipo==1);
        if (v_67) {
          v_84 = true;
          v_83_1 = true;
          v_83_2 = true;
          v_83_3 = true;
        } else {
          v_84 = v_82;
          v_83_1 = v_81_1;
          v_83_2 = v_81_2;
          v_83_3 = v_81_3;
        };
        v = (tipo==0);
        if (v) {
          r_St_3_Rock = true;
        } else {
          r_St_3_Rock = v_84;
        };
        v_843 = r_St_3_Rock;
        if (v) {
          s_St_3_Rock_1 = false;
        } else {
          s_St_3_Rock_1 = v_83_1;
        };
        v_830 = s_St_3_Rock_1;
        if (v) {
          s_St_3_Rock_2 = true;
        } else {
          s_St_3_Rock_2 = v_83_2;
        };
        v_831 = s_St_3_Rock_2;
        if (v) {
          s_St_3_Rock_3 = true;
        } else {
          s_St_3_Rock_3 = v_83_3;
        };
        v_832 = s_St_3_Rock_3;
      };
      v_836 = v_830;
      v_837 = v_831;
      v_838 = v_832;
      v_844 = v_843;
    };
    s_1 = v_836;
    s_2 = v_837;
    s_3 = v_838;
    r = v_844;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  ck_4_3 = s_3;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      ck_4_3_1_1 = ck_4_3;
      if (ck_4_3_1_1) {
        res_St_3_Classic = 1;
        nr_St_3_Classic = false;
        ns_St_3_Classic_1 = true;
        ns_St_3_Classic_2 = true;
        ns_St_3_Classic_3 = true;
        v_788 = res_St_3_Classic;
        v_812 = nr_St_3_Classic;
        v_794 = ns_St_3_Classic_1;
        v_795 = ns_St_3_Classic_2;
        v_796 = ns_St_3_Classic_3;
        if (ns_St_3_Classic_1) {
          ns_St_3_Classic_2_1 = ns_St_3_Classic_2;
          if (ns_St_3_Classic_2_1) {
            ns_St_3_Classic_3_1_1 = ns_St_3_Classic_3;
          } else {
            ns_St_3_Classic_3_1_0 = ns_St_3_Classic_3;
          };
        } else {
          ns_St_3_Classic_2_0 = ns_St_3_Classic_2;
          if (ns_St_3_Classic_2_0) {
            ns_St_3_Classic_3_0_1 = ns_St_3_Classic_3;
          } else {
            ns_St_3_Classic_3_0_0 = ns_St_3_Classic_3;
          };
        };
      } else {
        res_St_3_Electronic = 2;
        v_788 = res_St_3_Electronic;
        nr_St_3_Electronic = false;
        v_812 = nr_St_3_Electronic;
        ns_St_3_Electronic_1 = true;
        v_794 = ns_St_3_Electronic_1;
        ns_St_3_Electronic_2 = true;
        v_795 = ns_St_3_Electronic_2;
        ns_St_3_Electronic_3 = false;
        v_796 = ns_St_3_Electronic_3;
        if (ns_St_3_Electronic_1) {
          ns_St_3_Electronic_2_1 = ns_St_3_Electronic_2;
          if (ns_St_3_Electronic_2_1) {
            ns_St_3_Electronic_3_1_1 = ns_St_3_Electronic_3;
          } else {
            ns_St_3_Electronic_3_1_0 = ns_St_3_Electronic_3;
          };
        } else {
          ns_St_3_Electronic_2_0 = ns_St_3_Electronic_2;
          if (ns_St_3_Electronic_2_0) {
            ns_St_3_Electronic_3_0_1 = ns_St_3_Electronic_3;
          } else {
            ns_St_3_Electronic_3_0_0 = ns_St_3_Electronic_3;
          };
        };
      };
      v_790 = v_788;
      v_806 = v_794;
      v_807 = v_795;
      v_808 = v_796;
      v_814 = v_812;
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        res_St_3_Funk = 3;
        nr_St_3_Funk = false;
        ns_St_3_Funk_1 = true;
        ns_St_3_Funk_2 = false;
        ns_St_3_Funk_3 = true;
        v_789 = res_St_3_Funk;
        v_813 = nr_St_3_Funk;
        v_797 = ns_St_3_Funk_1;
        v_798 = ns_St_3_Funk_2;
        v_799 = ns_St_3_Funk_3;
      } else {
        res_St_3_Indie = 4;
        v_789 = res_St_3_Indie;
        nr_St_3_Indie = false;
        v_813 = nr_St_3_Indie;
        ns_St_3_Indie_1 = true;
        v_797 = ns_St_3_Indie_1;
        ns_St_3_Indie_2 = false;
        v_798 = ns_St_3_Indie_2;
        ns_St_3_Indie_3 = false;
        v_799 = ns_St_3_Indie_3;
      };
      v_790 = v_789;
      v_806 = v_797;
      v_807 = v_798;
      v_808 = v_799;
      v_814 = v_813;
      if (ck_4_3_1_0) {
        if (ns_St_3_Funk_1) {
          ns_St_3_Funk_2_1 = ns_St_3_Funk_2;
          if (ns_St_3_Funk_2_1) {
            ns_St_3_Funk_3_1_1 = ns_St_3_Funk_3;
          } else {
            ns_St_3_Funk_3_1_0 = ns_St_3_Funk_3;
          };
        } else {
          ns_St_3_Funk_2_0 = ns_St_3_Funk_2;
          if (ns_St_3_Funk_2_0) {
            ns_St_3_Funk_3_0_1 = ns_St_3_Funk_3;
          } else {
            ns_St_3_Funk_3_0_0 = ns_St_3_Funk_3;
          };
        };
      } else {
        if (ns_St_3_Indie_1) {
          ns_St_3_Indie_2_1 = ns_St_3_Indie_2;
          if (ns_St_3_Indie_2_1) {
            ns_St_3_Indie_3_1_1 = ns_St_3_Indie_3;
          } else {
            ns_St_3_Indie_3_1_0 = ns_St_3_Indie_3;
          };
        } else {
          ns_St_3_Indie_2_0 = ns_St_3_Indie_2;
          if (ns_St_3_Indie_2_0) {
            ns_St_3_Indie_3_0_1 = ns_St_3_Indie_3;
          } else {
            ns_St_3_Indie_3_0_0 = ns_St_3_Indie_3;
          };
        };
      };
    };
    _out->res = v_790;
    ns_1 = v_806;
    ns_2 = v_807;
    ns_3 = v_808;
    nr = v_814;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      ck_4_3_0_1 = ck_4_3;
      if (ck_4_3_0_1) {
        res_St_3_Off = 0;
        nr_St_3_Off = false;
        ns_St_3_Off_1 = false;
        ns_St_3_Off_2 = true;
        ns_St_3_Off_3 = true;
        v_791 = res_St_3_Off;
        v_815 = nr_St_3_Off;
        v_800 = ns_St_3_Off_1;
        v_801 = ns_St_3_Off_2;
        v_802 = ns_St_3_Off_3;
        if (ns_St_3_Off_1) {
          ns_St_3_Off_2_1 = ns_St_3_Off_2;
          if (ns_St_3_Off_2_1) {
            ns_St_3_Off_3_1_1 = ns_St_3_Off_3;
          } else {
            ns_St_3_Off_3_1_0 = ns_St_3_Off_3;
          };
        } else {
          ns_St_3_Off_2_0 = ns_St_3_Off_2;
          if (ns_St_3_Off_2_0) {
            ns_St_3_Off_3_0_1 = ns_St_3_Off_3;
          } else {
            ns_St_3_Off_3_0_0 = ns_St_3_Off_3;
          };
        };
      } else {
        res_St_3_POP = 5;
        v_791 = res_St_3_POP;
        nr_St_3_POP = false;
        v_815 = nr_St_3_POP;
        ns_St_3_POP_1 = false;
        v_800 = ns_St_3_POP_1;
        ns_St_3_POP_2 = true;
        v_801 = ns_St_3_POP_2;
        ns_St_3_POP_3 = false;
        v_802 = ns_St_3_POP_3;
        if (ns_St_3_POP_1) {
          ns_St_3_POP_2_1 = ns_St_3_POP_2;
          if (ns_St_3_POP_2_1) {
            ns_St_3_POP_3_1_1 = ns_St_3_POP_3;
          } else {
            ns_St_3_POP_3_1_0 = ns_St_3_POP_3;
          };
        } else {
          ns_St_3_POP_2_0 = ns_St_3_POP_2;
          if (ns_St_3_POP_2_0) {
            ns_St_3_POP_3_0_1 = ns_St_3_POP_3;
          } else {
            ns_St_3_POP_3_0_0 = ns_St_3_POP_3;
          };
        };
      };
      v_793 = v_791;
      v_809 = v_800;
      v_810 = v_801;
      v_811 = v_802;
      v_817 = v_815;
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (ck_4_3_0_0) {
        res_St_3_Regue = 6;
        nr_St_3_Regue = false;
        ns_St_3_Regue_1 = false;
        ns_St_3_Regue_2 = false;
        ns_St_3_Regue_3 = true;
        v_792 = res_St_3_Regue;
        v_816 = nr_St_3_Regue;
        v_803 = ns_St_3_Regue_1;
        v_804 = ns_St_3_Regue_2;
        v_805 = ns_St_3_Regue_3;
      } else {
        res_St_3_Rock = 7;
        v_792 = res_St_3_Rock;
        nr_St_3_Rock = false;
        v_816 = nr_St_3_Rock;
        ns_St_3_Rock_1 = false;
        v_803 = ns_St_3_Rock_1;
        ns_St_3_Rock_2 = false;
        v_804 = ns_St_3_Rock_2;
        ns_St_3_Rock_3 = false;
        v_805 = ns_St_3_Rock_3;
      };
      v_793 = v_792;
      v_809 = v_803;
      v_810 = v_804;
      v_811 = v_805;
      v_817 = v_816;
    };
    _out->res = v_793;
    ns_1 = v_809;
    ns_2 = v_810;
    ns_3 = v_811;
    nr = v_817;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_4_1)) {
    if (!(ck_4_2_0)) {
      if (ck_4_3_0_0) {
        if (ns_St_3_Regue_1) {
          ns_St_3_Regue_2_1 = ns_St_3_Regue_2;
          if (ns_St_3_Regue_2_1) {
            ns_St_3_Regue_3_1_1 = ns_St_3_Regue_3;
          } else {
            ns_St_3_Regue_3_1_0 = ns_St_3_Regue_3;
          };
        } else {
          ns_St_3_Regue_2_0 = ns_St_3_Regue_2;
          if (ns_St_3_Regue_2_0) {
            ns_St_3_Regue_3_0_1 = ns_St_3_Regue_3;
          } else {
            ns_St_3_Regue_3_0_0 = ns_St_3_Regue_3;
          };
        };
      } else {
        if (ns_St_3_Rock_1) {
          ns_St_3_Rock_2_1 = ns_St_3_Rock_2;
          if (ns_St_3_Rock_2_1) {
            ns_St_3_Rock_3_1_1 = ns_St_3_Rock_3;
          } else {
            ns_St_3_Rock_3_1_0 = ns_St_3_Rock_3;
          };
        } else {
          ns_St_3_Rock_2_0 = ns_St_3_Rock_2;
          if (ns_St_3_Rock_2_0) {
            ns_St_3_Rock_3_0_1 = ns_St_3_Rock_3;
          } else {
            ns_St_3_Rock_3_0_0 = ns_St_3_Rock_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (v_92_1) {
          v_92_2_1 = v_92_2;
          if (v_92_2_1) {
            v_92_3_1_1 = v_92_3;
          } else {
            v_92_3_1_0 = v_92_3;
          };
        } else {
          v_92_2_0 = v_92_2;
          if (v_92_2_0) {
            v_92_3_0_1 = v_92_3;
          } else {
            v_92_3_0_0 = v_92_3;
          };
        };
        if (v_94_1) {
          v_94_2_1 = v_94_2;
          if (v_94_2_1) {
            v_94_3_1_1 = v_94_3;
          } else {
            v_94_3_1_0 = v_94_3;
          };
        } else {
          v_94_2_0 = v_94_2;
          if (v_94_2_0) {
            v_94_3_0_1 = v_94_3;
          } else {
            v_94_3_0_0 = v_94_3;
          };
        };
        if (v_96_1) {
          v_96_2_1 = v_96_2;
          if (v_96_2_1) {
            v_96_3_1_1 = v_96_3;
          } else {
            v_96_3_1_0 = v_96_3;
          };
        } else {
          v_96_2_0 = v_96_2;
          if (v_96_2_0) {
            v_96_3_0_1 = v_96_3;
          } else {
            v_96_3_0_0 = v_96_3;
          };
        };
        if (v_98_1) {
          v_98_2_1 = v_98_2;
          if (v_98_2_1) {
            v_98_3_1_1 = v_98_3;
          } else {
            v_98_3_1_0 = v_98_3;
          };
        } else {
          v_98_2_0 = v_98_2;
          if (v_98_2_0) {
            v_98_3_0_1 = v_98_3;
          } else {
            v_98_3_0_0 = v_98_3;
          };
        };
        if (v_100_1) {
          v_100_2_1 = v_100_2;
          if (v_100_2_1) {
            v_100_3_1_1 = v_100_3;
          } else {
            v_100_3_1_0 = v_100_3;
          };
        } else {
          v_100_2_0 = v_100_2;
          if (v_100_2_0) {
            v_100_3_0_1 = v_100_3;
          } else {
            v_100_3_0_0 = v_100_3;
          };
        };
        if (v_102_1) {
          v_102_2_1 = v_102_2;
          if (v_102_2_1) {
            v_102_3_1_1 = v_102_3;
          } else {
            v_102_3_1_0 = v_102_3;
          };
        } else {
          v_102_2_0 = v_102_2;
          if (v_102_2_0) {
            v_102_3_0_1 = v_102_3;
          } else {
            v_102_3_0_0 = v_102_3;
          };
        };
        if (s_St_3_Regue_1) {
          s_St_3_Regue_2_1 = s_St_3_Regue_2;
          if (s_St_3_Regue_2_1) {
            s_St_3_Regue_3_1_1 = s_St_3_Regue_3;
          } else {
            s_St_3_Regue_3_1_0 = s_St_3_Regue_3;
          };
        } else {
          s_St_3_Regue_2_0 = s_St_3_Regue_2;
          if (s_St_3_Regue_2_0) {
            s_St_3_Regue_3_0_1 = s_St_3_Regue_3;
          } else {
            s_St_3_Regue_3_0_0 = s_St_3_Regue_3;
          };
        };
      } else {
        if (v_73_1) {
          v_73_2_1 = v_73_2;
          if (v_73_2_1) {
            v_73_3_1_1 = v_73_3;
          } else {
            v_73_3_1_0 = v_73_3;
          };
        } else {
          v_73_2_0 = v_73_2;
          if (v_73_2_0) {
            v_73_3_0_1 = v_73_3;
          } else {
            v_73_3_0_0 = v_73_3;
          };
        };
        if (v_75_1) {
          v_75_2_1 = v_75_2;
          if (v_75_2_1) {
            v_75_3_1_1 = v_75_3;
          } else {
            v_75_3_1_0 = v_75_3;
          };
        } else {
          v_75_2_0 = v_75_2;
          if (v_75_2_0) {
            v_75_3_0_1 = v_75_3;
          } else {
            v_75_3_0_0 = v_75_3;
          };
        };
        if (v_77_1) {
          v_77_2_1 = v_77_2;
          if (v_77_2_1) {
            v_77_3_1_1 = v_77_3;
          } else {
            v_77_3_1_0 = v_77_3;
          };
        } else {
          v_77_2_0 = v_77_2;
          if (v_77_2_0) {
            v_77_3_0_1 = v_77_3;
          } else {
            v_77_3_0_0 = v_77_3;
          };
        };
        if (v_79_1) {
          v_79_2_1 = v_79_2;
          if (v_79_2_1) {
            v_79_3_1_1 = v_79_3;
          } else {
            v_79_3_1_0 = v_79_3;
          };
        } else {
          v_79_2_0 = v_79_2;
          if (v_79_2_0) {
            v_79_3_0_1 = v_79_3;
          } else {
            v_79_3_0_0 = v_79_3;
          };
        };
        if (v_81_1) {
          v_81_2_1 = v_81_2;
          if (v_81_2_1) {
            v_81_3_1_1 = v_81_3;
          } else {
            v_81_3_1_0 = v_81_3;
          };
        } else {
          v_81_2_0 = v_81_2;
          if (v_81_2_0) {
            v_81_3_0_1 = v_81_3;
          } else {
            v_81_3_0_0 = v_81_3;
          };
        };
        if (v_83_1) {
          v_83_2_1 = v_83_2;
          if (v_83_2_1) {
            v_83_3_1_1 = v_83_3;
          } else {
            v_83_3_1_0 = v_83_3;
          };
        } else {
          v_83_2_0 = v_83_2;
          if (v_83_2_0) {
            v_83_3_0_1 = v_83_3;
          } else {
            v_83_3_0_0 = v_83_3;
          };
        };
        if (s_St_3_Rock_1) {
          s_St_3_Rock_2_1 = s_St_3_Rock_2;
          if (s_St_3_Rock_2_1) {
            s_St_3_Rock_3_1_1 = s_St_3_Rock_3;
          } else {
            s_St_3_Rock_3_1_0 = s_St_3_Rock_3;
          };
        } else {
          s_St_3_Rock_2_0 = s_St_3_Rock_2;
          if (s_St_3_Rock_2_0) {
            s_St_3_Rock_3_0_1 = s_St_3_Rock_3;
          } else {
            s_St_3_Rock_3_0_0 = s_St_3_Rock_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_818 = ns_1;
  self->v_819 = ns_2;
  self->v_820 = ns_3;;
}

void Som__main_reset(Som__main_mem* self) {
  self->pnr = false;
  self->ck_20_1 = false;
  self->pnr_1 = false;
  self->v_870 = false;
  self->v_871 = false;
  self->v_872 = false;
  self->pnr_2 = false;
  self->v_918 = false;
  self->v_919 = false;
  self->v_920 = false;
  self->pnr_3 = false;
  self->v_966 = false;
  self->v_967 = false;
  self->v_968 = false;
  self->pnr_4 = false;
  self->v_1014 = false;
  self->v_1015 = false;
  self->v_1016 = false;
  self->pnr_5 = false;
  self->ck_10_1 = false;
  self->pnr_6 = false;
  self->ck_8_1 = false;
  self->pnr_7 = false;
  self->ck_6_1 = false;
  self->pnr_8 = false;
  self->v_1067 = false;
  self->v_1068 = true;
  self->v_1069 = true;
}

void Som__main_step(int tipo, int upa, int downa, int upm, int downm,
                    int upg, int downg, int upv, int downv, int hora,
                    Som__main_out* _out, Som__main_mem* self) {
  Main_controller__main_controller_out Main_controller__main_controller_out_st;
  
  int nr_St_4_Madrugada;
  int ns_St_4_Madrugada_1;
  int madrug_1_St_4_Madrugada;
  int nr_St_4_NaoMadrugada;
  int ns_St_4_NaoMadrugada_1;
  int madrug_1_St_4_NaoMadrugada;
  int ck_21_1;
  int v_739;
  int v_738;
  int r_St_4_Madrugada;
  int s_5_St_4_Madrugada_1;
  int r_St_4_NaoMadrugada;
  int s_5_St_4_NaoMadrugada_1;
  int v_869;
  int v_868;
  int v_867;
  int v_866;
  int v_865;
  int v_864;
  int v_863;
  int v_862;
  int v_861;
  int v_860;
  int v_859;
  int v_858;
  int v_857;
  int v_856;
  int v_855;
  int v_854;
  int v_853;
  int v_852;
  int v_851;
  int v_850;
  int v_849;
  int v_848;
  int v_847;
  int v_846;
  int v_845;
  int ns_1_St_5_Veryhigh_2_0;
  int ns_1_St_5_Veryhigh_3_0_0;
  int ns_1_St_5_Veryhigh_3_0_1;
  int ns_1_St_5_Veryhigh_2_1;
  int ns_1_St_5_Veryhigh_3_1_0;
  int ns_1_St_5_Veryhigh_3_1_1;
  int ns_1_St_5_High_2_0;
  int ns_1_St_5_High_3_0_0;
  int ns_1_St_5_High_3_0_1;
  int ns_1_St_5_High_2_1;
  int ns_1_St_5_High_3_1_0;
  int ns_1_St_5_High_3_1_1;
  int ns_1_St_5_Mid_2_0;
  int ns_1_St_5_Mid_3_0_0;
  int ns_1_St_5_Mid_3_0_1;
  int ns_1_St_5_Mid_2_1;
  int ns_1_St_5_Mid_3_1_0;
  int ns_1_St_5_Mid_3_1_1;
  int ns_1_St_5_Low_2_0;
  int ns_1_St_5_Low_3_0_0;
  int ns_1_St_5_Low_3_0_1;
  int ns_1_St_5_Low_2_1;
  int ns_1_St_5_Low_3_1_0;
  int ns_1_St_5_Low_3_1_1;
  int ns_1_St_5_Verylow_2_0;
  int ns_1_St_5_Verylow_3_0_0;
  int ns_1_St_5_Verylow_3_0_1;
  int ns_1_St_5_Verylow_2_1;
  int ns_1_St_5_Verylow_3_1_0;
  int ns_1_St_5_Verylow_3_1_1;
  int ck_19_2_0;
  int ck_19_3_0_0;
  int ck_19_3_0_1;
  int ck_19_2_1;
  int ck_19_3_1_0;
  int ck_19_3_1_1;
  int nr_1_St_5_Veryhigh;
  int ns_1_St_5_Veryhigh_3;
  int ns_1_St_5_Veryhigh_2;
  int ns_1_St_5_Veryhigh_1;
  int s_3_St_5_Veryhigh;
  int nr_1_St_5_High;
  int ns_1_St_5_High_3;
  int ns_1_St_5_High_2;
  int ns_1_St_5_High_1;
  int s_3_St_5_High;
  int nr_1_St_5_Mid;
  int ns_1_St_5_Mid_3;
  int ns_1_St_5_Mid_2;
  int ns_1_St_5_Mid_1;
  int s_3_St_5_Mid;
  int nr_1_St_5_Low;
  int ns_1_St_5_Low_3;
  int ns_1_St_5_Low_2;
  int ns_1_St_5_Low_1;
  int s_3_St_5_Low;
  int nr_1_St_5_Verylow;
  int ns_1_St_5_Verylow_3;
  int ns_1_St_5_Verylow_2;
  int ns_1_St_5_Verylow_1;
  int s_3_St_5_Verylow;
  int ck_19_3;
  int ck_19_2;
  int ck_19_1;
  int v_736_2_0;
  int v_736_3_0_0;
  int v_736_3_0_1;
  int v_736_2_1;
  int v_736_3_1_0;
  int v_736_3_1_1;
  int v_734_2_0;
  int v_734_3_0_0;
  int v_734_3_0_1;
  int v_734_2_1;
  int v_734_3_1_0;
  int v_734_3_1_1;
  int v_732_2_0;
  int v_732_3_0_0;
  int v_732_3_0_1;
  int v_732_2_1;
  int v_732_3_1_0;
  int v_732_3_1_1;
  int v_737;
  int v_736_3;
  int v_736_2;
  int v_736_1;
  int v_735;
  int v_734_3;
  int v_734_2;
  int v_734_1;
  int v_733;
  int v_732_3;
  int v_732_2;
  int v_732_1;
  int v_731;
  int v_730;
  int v_729;
  int v_728;
  int v_727;
  int v_726;
  int v_724_2_0;
  int v_724_3_0_0;
  int v_724_3_0_1;
  int v_724_2_1;
  int v_724_3_1_0;
  int v_724_3_1_1;
  int v_722_2_0;
  int v_722_3_0_0;
  int v_722_3_0_1;
  int v_722_2_1;
  int v_722_3_1_0;
  int v_722_3_1_1;
  int v_720_2_0;
  int v_720_3_0_0;
  int v_720_3_0_1;
  int v_720_2_1;
  int v_720_3_1_0;
  int v_720_3_1_1;
  int v_725;
  int v_724_3;
  int v_724_2;
  int v_724_1;
  int v_723;
  int v_722_3;
  int v_722_2;
  int v_722_1;
  int v_721;
  int v_720_3;
  int v_720_2;
  int v_720_1;
  int v_719;
  int v_718;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_710_2_0;
  int v_710_3_0_0;
  int v_710_3_0_1;
  int v_710_2_1;
  int v_710_3_1_0;
  int v_710_3_1_1;
  int v_708_2_0;
  int v_708_3_0_0;
  int v_708_3_0_1;
  int v_708_2_1;
  int v_708_3_1_0;
  int v_708_3_1_1;
  int v_706_2_0;
  int v_706_3_0_0;
  int v_706_3_0_1;
  int v_706_2_1;
  int v_706_3_1_0;
  int v_706_3_1_1;
  int v_711;
  int v_710_3;
  int v_710_2;
  int v_710_1;
  int v_709;
  int v_708_3;
  int v_708_2;
  int v_708_1;
  int v_707;
  int v_706_3;
  int v_706_2;
  int v_706_1;
  int v_705;
  int v_704;
  int v_703;
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_696_2_0;
  int v_696_3_0_0;
  int v_696_3_0_1;
  int v_696_2_1;
  int v_696_3_1_0;
  int v_696_3_1_1;
  int v_694_2_0;
  int v_694_3_0_0;
  int v_694_3_0_1;
  int v_694_2_1;
  int v_694_3_1_0;
  int v_694_3_1_1;
  int v_692_2_0;
  int v_692_3_0_0;
  int v_692_3_0_1;
  int v_692_2_1;
  int v_692_3_1_0;
  int v_692_3_1_1;
  int v_697;
  int v_696_3;
  int v_696_2;
  int v_696_1;
  int v_695;
  int v_694_3;
  int v_694_2;
  int v_694_1;
  int v_693;
  int v_692_3;
  int v_692_2;
  int v_692_1;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_682_2_0;
  int v_682_3_0_0;
  int v_682_3_0_1;
  int v_682_2_1;
  int v_682_3_1_0;
  int v_682_3_1_1;
  int v_680_2_0;
  int v_680_3_0_0;
  int v_680_3_0_1;
  int v_680_2_1;
  int v_680_3_1_0;
  int v_680_3_1_1;
  int v_678_2_0;
  int v_678_3_0_0;
  int v_678_3_0_1;
  int v_678_2_1;
  int v_678_3_1_0;
  int v_678_3_1_1;
  int v_683;
  int v_682_3;
  int v_682_2;
  int v_682_1;
  int v_681;
  int v_680_3;
  int v_680_2;
  int v_680_1;
  int v_679;
  int v_678_3;
  int v_678_2;
  int v_678_1;
  int v_677;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_892;
  int v_891;
  int v_890;
  int v_889;
  int v_888;
  int v_887;
  int v_886;
  int v_885;
  int v_884;
  int v_883;
  int v_882;
  int v_881;
  int v_880;
  int v_879;
  int v_878;
  int v_877;
  int v_876;
  int v_875;
  int v_874;
  int v_873;
  int s_6_St_5_Veryhigh_2_0;
  int s_6_St_5_Veryhigh_3_0_0;
  int s_6_St_5_Veryhigh_3_0_1;
  int s_6_St_5_Veryhigh_2_1;
  int s_6_St_5_Veryhigh_3_1_0;
  int s_6_St_5_Veryhigh_3_1_1;
  int s_6_St_5_High_2_0;
  int s_6_St_5_High_3_0_0;
  int s_6_St_5_High_3_0_1;
  int s_6_St_5_High_2_1;
  int s_6_St_5_High_3_1_0;
  int s_6_St_5_High_3_1_1;
  int s_6_St_5_Mid_2_0;
  int s_6_St_5_Mid_3_0_0;
  int s_6_St_5_Mid_3_0_1;
  int s_6_St_5_Mid_2_1;
  int s_6_St_5_Mid_3_1_0;
  int s_6_St_5_Mid_3_1_1;
  int s_6_St_5_Low_2_0;
  int s_6_St_5_Low_3_0_0;
  int s_6_St_5_Low_3_0_1;
  int s_6_St_5_Low_2_1;
  int s_6_St_5_Low_3_1_0;
  int s_6_St_5_Low_3_1_1;
  int s_6_St_5_Verylow_2_0;
  int s_6_St_5_Verylow_3_0_0;
  int s_6_St_5_Verylow_3_0_1;
  int s_6_St_5_Verylow_2_1;
  int s_6_St_5_Verylow_3_1_0;
  int s_6_St_5_Verylow_3_1_1;
  int ck_18_2_0;
  int ck_18_3_0_0;
  int ck_18_3_0_1;
  int ck_18_2_1;
  int ck_18_3_1_0;
  int ck_18_3_1_1;
  int r_1_St_5_Veryhigh;
  int s_6_St_5_Veryhigh_3;
  int s_6_St_5_Veryhigh_2;
  int s_6_St_5_Veryhigh_1;
  int r_1_St_5_High;
  int s_6_St_5_High_3;
  int s_6_St_5_High_2;
  int s_6_St_5_High_1;
  int r_1_St_5_Mid;
  int s_6_St_5_Mid_3;
  int s_6_St_5_Mid_2;
  int s_6_St_5_Mid_1;
  int r_1_St_5_Low;
  int s_6_St_5_Low_3;
  int s_6_St_5_Low_2;
  int s_6_St_5_Low_1;
  int r_1_St_5_Verylow;
  int s_6_St_5_Verylow_3;
  int s_6_St_5_Verylow_2;
  int s_6_St_5_Verylow_1;
  int ck_18_3;
  int ck_18_2;
  int ck_18_1;
  int v_917;
  int v_916;
  int v_915;
  int v_914;
  int v_913;
  int v_912;
  int v_911;
  int v_910;
  int v_909;
  int v_908;
  int v_907;
  int v_906;
  int v_905;
  int v_904;
  int v_903;
  int v_902;
  int v_901;
  int v_900;
  int v_899;
  int v_898;
  int v_897;
  int v_896;
  int v_895;
  int v_894;
  int v_893;
  int ns_2_St_6_Veryhigh_2_0;
  int ns_2_St_6_Veryhigh_3_0_0;
  int ns_2_St_6_Veryhigh_3_0_1;
  int ns_2_St_6_Veryhigh_2_1;
  int ns_2_St_6_Veryhigh_3_1_0;
  int ns_2_St_6_Veryhigh_3_1_1;
  int ns_2_St_6_High_2_0;
  int ns_2_St_6_High_3_0_0;
  int ns_2_St_6_High_3_0_1;
  int ns_2_St_6_High_2_1;
  int ns_2_St_6_High_3_1_0;
  int ns_2_St_6_High_3_1_1;
  int ns_2_St_6_Mid_2_0;
  int ns_2_St_6_Mid_3_0_0;
  int ns_2_St_6_Mid_3_0_1;
  int ns_2_St_6_Mid_2_1;
  int ns_2_St_6_Mid_3_1_0;
  int ns_2_St_6_Mid_3_1_1;
  int ns_2_St_6_Low_2_0;
  int ns_2_St_6_Low_3_0_0;
  int ns_2_St_6_Low_3_0_1;
  int ns_2_St_6_Low_2_1;
  int ns_2_St_6_Low_3_1_0;
  int ns_2_St_6_Low_3_1_1;
  int ns_2_St_6_Verylow_2_0;
  int ns_2_St_6_Verylow_3_0_0;
  int ns_2_St_6_Verylow_3_0_1;
  int ns_2_St_6_Verylow_2_1;
  int ns_2_St_6_Verylow_3_1_0;
  int ns_2_St_6_Verylow_3_1_1;
  int ck_17_2_0;
  int ck_17_3_0_0;
  int ck_17_3_0_1;
  int ck_17_2_1;
  int ck_17_3_1_0;
  int ck_17_3_1_1;
  int nr_2_St_6_Veryhigh;
  int ns_2_St_6_Veryhigh_3;
  int ns_2_St_6_Veryhigh_2;
  int ns_2_St_6_Veryhigh_1;
  int s_2_St_6_Veryhigh;
  int nr_2_St_6_High;
  int ns_2_St_6_High_3;
  int ns_2_St_6_High_2;
  int ns_2_St_6_High_1;
  int s_2_St_6_High;
  int nr_2_St_6_Mid;
  int ns_2_St_6_Mid_3;
  int ns_2_St_6_Mid_2;
  int ns_2_St_6_Mid_1;
  int s_2_St_6_Mid;
  int nr_2_St_6_Low;
  int ns_2_St_6_Low_3;
  int ns_2_St_6_Low_2;
  int ns_2_St_6_Low_1;
  int s_2_St_6_Low;
  int nr_2_St_6_Verylow;
  int ns_2_St_6_Verylow_3;
  int ns_2_St_6_Verylow_2;
  int ns_2_St_6_Verylow_1;
  int s_2_St_6_Verylow;
  int ck_17_3;
  int ck_17_2;
  int ck_17_1;
  int v_670_2_0;
  int v_670_3_0_0;
  int v_670_3_0_1;
  int v_670_2_1;
  int v_670_3_1_0;
  int v_670_3_1_1;
  int v_668_2_0;
  int v_668_3_0_0;
  int v_668_3_0_1;
  int v_668_2_1;
  int v_668_3_1_0;
  int v_668_3_1_1;
  int v_666_2_0;
  int v_666_3_0_0;
  int v_666_3_0_1;
  int v_666_2_1;
  int v_666_3_1_0;
  int v_666_3_1_1;
  int v_671;
  int v_670_3;
  int v_670_2;
  int v_670_1;
  int v_669;
  int v_668_3;
  int v_668_2;
  int v_668_1;
  int v_667;
  int v_666_3;
  int v_666_2;
  int v_666_1;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_658_2_0;
  int v_658_3_0_0;
  int v_658_3_0_1;
  int v_658_2_1;
  int v_658_3_1_0;
  int v_658_3_1_1;
  int v_656_2_0;
  int v_656_3_0_0;
  int v_656_3_0_1;
  int v_656_2_1;
  int v_656_3_1_0;
  int v_656_3_1_1;
  int v_654_2_0;
  int v_654_3_0_0;
  int v_654_3_0_1;
  int v_654_2_1;
  int v_654_3_1_0;
  int v_654_3_1_1;
  int v_659;
  int v_658_3;
  int v_658_2;
  int v_658_1;
  int v_657;
  int v_656_3;
  int v_656_2;
  int v_656_1;
  int v_655;
  int v_654_3;
  int v_654_2;
  int v_654_1;
  int v_653;
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_644_2_0;
  int v_644_3_0_0;
  int v_644_3_0_1;
  int v_644_2_1;
  int v_644_3_1_0;
  int v_644_3_1_1;
  int v_642_2_0;
  int v_642_3_0_0;
  int v_642_3_0_1;
  int v_642_2_1;
  int v_642_3_1_0;
  int v_642_3_1_1;
  int v_640_2_0;
  int v_640_3_0_0;
  int v_640_3_0_1;
  int v_640_2_1;
  int v_640_3_1_0;
  int v_640_3_1_1;
  int v_645;
  int v_644_3;
  int v_644_2;
  int v_644_1;
  int v_643;
  int v_642_3;
  int v_642_2;
  int v_642_1;
  int v_641;
  int v_640_3;
  int v_640_2;
  int v_640_1;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_630_2_0;
  int v_630_3_0_0;
  int v_630_3_0_1;
  int v_630_2_1;
  int v_630_3_1_0;
  int v_630_3_1_1;
  int v_628_2_0;
  int v_628_3_0_0;
  int v_628_3_0_1;
  int v_628_2_1;
  int v_628_3_1_0;
  int v_628_3_1_1;
  int v_626_2_0;
  int v_626_3_0_0;
  int v_626_3_0_1;
  int v_626_2_1;
  int v_626_3_1_0;
  int v_626_3_1_1;
  int v_631;
  int v_630_3;
  int v_630_2;
  int v_630_1;
  int v_629;
  int v_628_3;
  int v_628_2;
  int v_628_1;
  int v_627;
  int v_626_3;
  int v_626_2;
  int v_626_1;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_616_2_0;
  int v_616_3_0_0;
  int v_616_3_0_1;
  int v_616_2_1;
  int v_616_3_1_0;
  int v_616_3_1_1;
  int v_614_2_0;
  int v_614_3_0_0;
  int v_614_3_0_1;
  int v_614_2_1;
  int v_614_3_1_0;
  int v_614_3_1_1;
  int v_612_2_0;
  int v_612_3_0_0;
  int v_612_3_0_1;
  int v_612_2_1;
  int v_612_3_1_0;
  int v_612_3_1_1;
  int v_617;
  int v_616_3;
  int v_616_2;
  int v_616_1;
  int v_615;
  int v_614_3;
  int v_614_2;
  int v_614_1;
  int v_613;
  int v_612_3;
  int v_612_2;
  int v_612_1;
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_940;
  int v_939;
  int v_938;
  int v_937;
  int v_936;
  int v_935;
  int v_934;
  int v_933;
  int v_932;
  int v_931;
  int v_930;
  int v_929;
  int v_928;
  int v_927;
  int v_926;
  int v_925;
  int v_924;
  int v_923;
  int v_922;
  int v_921;
  int s_7_St_6_Veryhigh_2_0;
  int s_7_St_6_Veryhigh_3_0_0;
  int s_7_St_6_Veryhigh_3_0_1;
  int s_7_St_6_Veryhigh_2_1;
  int s_7_St_6_Veryhigh_3_1_0;
  int s_7_St_6_Veryhigh_3_1_1;
  int s_7_St_6_High_2_0;
  int s_7_St_6_High_3_0_0;
  int s_7_St_6_High_3_0_1;
  int s_7_St_6_High_2_1;
  int s_7_St_6_High_3_1_0;
  int s_7_St_6_High_3_1_1;
  int s_7_St_6_Mid_2_0;
  int s_7_St_6_Mid_3_0_0;
  int s_7_St_6_Mid_3_0_1;
  int s_7_St_6_Mid_2_1;
  int s_7_St_6_Mid_3_1_0;
  int s_7_St_6_Mid_3_1_1;
  int s_7_St_6_Low_2_0;
  int s_7_St_6_Low_3_0_0;
  int s_7_St_6_Low_3_0_1;
  int s_7_St_6_Low_2_1;
  int s_7_St_6_Low_3_1_0;
  int s_7_St_6_Low_3_1_1;
  int s_7_St_6_Verylow_2_0;
  int s_7_St_6_Verylow_3_0_0;
  int s_7_St_6_Verylow_3_0_1;
  int s_7_St_6_Verylow_2_1;
  int s_7_St_6_Verylow_3_1_0;
  int s_7_St_6_Verylow_3_1_1;
  int ck_16_2_0;
  int ck_16_3_0_0;
  int ck_16_3_0_1;
  int ck_16_2_1;
  int ck_16_3_1_0;
  int ck_16_3_1_1;
  int r_2_St_6_Veryhigh;
  int s_7_St_6_Veryhigh_3;
  int s_7_St_6_Veryhigh_2;
  int s_7_St_6_Veryhigh_1;
  int r_2_St_6_High;
  int s_7_St_6_High_3;
  int s_7_St_6_High_2;
  int s_7_St_6_High_1;
  int r_2_St_6_Mid;
  int s_7_St_6_Mid_3;
  int s_7_St_6_Mid_2;
  int s_7_St_6_Mid_1;
  int r_2_St_6_Low;
  int s_7_St_6_Low_3;
  int s_7_St_6_Low_2;
  int s_7_St_6_Low_1;
  int r_2_St_6_Verylow;
  int s_7_St_6_Verylow_3;
  int s_7_St_6_Verylow_2;
  int s_7_St_6_Verylow_1;
  int ck_16_3;
  int ck_16_2;
  int ck_16_1;
  int v_965;
  int v_964;
  int v_963;
  int v_962;
  int v_961;
  int v_960;
  int v_959;
  int v_958;
  int v_957;
  int v_956;
  int v_955;
  int v_954;
  int v_953;
  int v_952;
  int v_951;
  int v_950;
  int v_949;
  int v_948;
  int v_947;
  int v_946;
  int v_945;
  int v_944;
  int v_943;
  int v_942;
  int v_941;
  int ns_3_St_7_Veryhigh_2_0;
  int ns_3_St_7_Veryhigh_3_0_0;
  int ns_3_St_7_Veryhigh_3_0_1;
  int ns_3_St_7_Veryhigh_2_1;
  int ns_3_St_7_Veryhigh_3_1_0;
  int ns_3_St_7_Veryhigh_3_1_1;
  int ns_3_St_7_High_2_0;
  int ns_3_St_7_High_3_0_0;
  int ns_3_St_7_High_3_0_1;
  int ns_3_St_7_High_2_1;
  int ns_3_St_7_High_3_1_0;
  int ns_3_St_7_High_3_1_1;
  int ns_3_St_7_Mid_2_0;
  int ns_3_St_7_Mid_3_0_0;
  int ns_3_St_7_Mid_3_0_1;
  int ns_3_St_7_Mid_2_1;
  int ns_3_St_7_Mid_3_1_0;
  int ns_3_St_7_Mid_3_1_1;
  int ns_3_St_7_Low_2_0;
  int ns_3_St_7_Low_3_0_0;
  int ns_3_St_7_Low_3_0_1;
  int ns_3_St_7_Low_2_1;
  int ns_3_St_7_Low_3_1_0;
  int ns_3_St_7_Low_3_1_1;
  int ns_3_St_7_Verylow_2_0;
  int ns_3_St_7_Verylow_3_0_0;
  int ns_3_St_7_Verylow_3_0_1;
  int ns_3_St_7_Verylow_2_1;
  int ns_3_St_7_Verylow_3_1_0;
  int ns_3_St_7_Verylow_3_1_1;
  int ck_15_2_0;
  int ck_15_3_0_0;
  int ck_15_3_0_1;
  int ck_15_2_1;
  int ck_15_3_1_0;
  int ck_15_3_1_1;
  int nr_3_St_7_Veryhigh;
  int ns_3_St_7_Veryhigh_3;
  int ns_3_St_7_Veryhigh_2;
  int ns_3_St_7_Veryhigh_1;
  int s_1_St_7_Veryhigh;
  int nr_3_St_7_High;
  int ns_3_St_7_High_3;
  int ns_3_St_7_High_2;
  int ns_3_St_7_High_1;
  int s_1_St_7_High;
  int nr_3_St_7_Mid;
  int ns_3_St_7_Mid_3;
  int ns_3_St_7_Mid_2;
  int ns_3_St_7_Mid_1;
  int s_1_St_7_Mid;
  int nr_3_St_7_Low;
  int ns_3_St_7_Low_3;
  int ns_3_St_7_Low_2;
  int ns_3_St_7_Low_1;
  int s_1_St_7_Low;
  int nr_3_St_7_Verylow;
  int ns_3_St_7_Verylow_3;
  int ns_3_St_7_Verylow_2;
  int ns_3_St_7_Verylow_1;
  int s_1_St_7_Verylow;
  int ck_15_3;
  int ck_15_2;
  int ck_15_1;
  int v_604_2_0;
  int v_604_3_0_0;
  int v_604_3_0_1;
  int v_604_2_1;
  int v_604_3_1_0;
  int v_604_3_1_1;
  int v_602_2_0;
  int v_602_3_0_0;
  int v_602_3_0_1;
  int v_602_2_1;
  int v_602_3_1_0;
  int v_602_3_1_1;
  int v_600_2_0;
  int v_600_3_0_0;
  int v_600_3_0_1;
  int v_600_2_1;
  int v_600_3_1_0;
  int v_600_3_1_1;
  int v_605;
  int v_604_3;
  int v_604_2;
  int v_604_1;
  int v_603;
  int v_602_3;
  int v_602_2;
  int v_602_1;
  int v_601;
  int v_600_3;
  int v_600_2;
  int v_600_1;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_592_2_0;
  int v_592_3_0_0;
  int v_592_3_0_1;
  int v_592_2_1;
  int v_592_3_1_0;
  int v_592_3_1_1;
  int v_590_2_0;
  int v_590_3_0_0;
  int v_590_3_0_1;
  int v_590_2_1;
  int v_590_3_1_0;
  int v_590_3_1_1;
  int v_588_2_0;
  int v_588_3_0_0;
  int v_588_3_0_1;
  int v_588_2_1;
  int v_588_3_1_0;
  int v_588_3_1_1;
  int v_593;
  int v_592_3;
  int v_592_2;
  int v_592_1;
  int v_591;
  int v_590_3;
  int v_590_2;
  int v_590_1;
  int v_589;
  int v_588_3;
  int v_588_2;
  int v_588_1;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_578_2_0;
  int v_578_3_0_0;
  int v_578_3_0_1;
  int v_578_2_1;
  int v_578_3_1_0;
  int v_578_3_1_1;
  int v_576_2_0;
  int v_576_3_0_0;
  int v_576_3_0_1;
  int v_576_2_1;
  int v_576_3_1_0;
  int v_576_3_1_1;
  int v_574_2_0;
  int v_574_3_0_0;
  int v_574_3_0_1;
  int v_574_2_1;
  int v_574_3_1_0;
  int v_574_3_1_1;
  int v_579;
  int v_578_3;
  int v_578_2;
  int v_578_1;
  int v_577;
  int v_576_3;
  int v_576_2;
  int v_576_1;
  int v_575;
  int v_574_3;
  int v_574_2;
  int v_574_1;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_564_2_0;
  int v_564_3_0_0;
  int v_564_3_0_1;
  int v_564_2_1;
  int v_564_3_1_0;
  int v_564_3_1_1;
  int v_562_2_0;
  int v_562_3_0_0;
  int v_562_3_0_1;
  int v_562_2_1;
  int v_562_3_1_0;
  int v_562_3_1_1;
  int v_560_2_0;
  int v_560_3_0_0;
  int v_560_3_0_1;
  int v_560_2_1;
  int v_560_3_1_0;
  int v_560_3_1_1;
  int v_565;
  int v_564_3;
  int v_564_2;
  int v_564_1;
  int v_563;
  int v_562_3;
  int v_562_2;
  int v_562_1;
  int v_561;
  int v_560_3;
  int v_560_2;
  int v_560_1;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_550_2_0;
  int v_550_3_0_0;
  int v_550_3_0_1;
  int v_550_2_1;
  int v_550_3_1_0;
  int v_550_3_1_1;
  int v_548_2_0;
  int v_548_3_0_0;
  int v_548_3_0_1;
  int v_548_2_1;
  int v_548_3_1_0;
  int v_548_3_1_1;
  int v_546_2_0;
  int v_546_3_0_0;
  int v_546_3_0_1;
  int v_546_2_1;
  int v_546_3_1_0;
  int v_546_3_1_1;
  int v_551;
  int v_550_3;
  int v_550_2;
  int v_550_1;
  int v_549;
  int v_548_3;
  int v_548_2;
  int v_548_1;
  int v_547;
  int v_546_3;
  int v_546_2;
  int v_546_1;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_988;
  int v_987;
  int v_986;
  int v_985;
  int v_984;
  int v_983;
  int v_982;
  int v_981;
  int v_980;
  int v_979;
  int v_978;
  int v_977;
  int v_976;
  int v_975;
  int v_974;
  int v_973;
  int v_972;
  int v_971;
  int v_970;
  int v_969;
  int s_8_St_7_Veryhigh_2_0;
  int s_8_St_7_Veryhigh_3_0_0;
  int s_8_St_7_Veryhigh_3_0_1;
  int s_8_St_7_Veryhigh_2_1;
  int s_8_St_7_Veryhigh_3_1_0;
  int s_8_St_7_Veryhigh_3_1_1;
  int s_8_St_7_High_2_0;
  int s_8_St_7_High_3_0_0;
  int s_8_St_7_High_3_0_1;
  int s_8_St_7_High_2_1;
  int s_8_St_7_High_3_1_0;
  int s_8_St_7_High_3_1_1;
  int s_8_St_7_Mid_2_0;
  int s_8_St_7_Mid_3_0_0;
  int s_8_St_7_Mid_3_0_1;
  int s_8_St_7_Mid_2_1;
  int s_8_St_7_Mid_3_1_0;
  int s_8_St_7_Mid_3_1_1;
  int s_8_St_7_Low_2_0;
  int s_8_St_7_Low_3_0_0;
  int s_8_St_7_Low_3_0_1;
  int s_8_St_7_Low_2_1;
  int s_8_St_7_Low_3_1_0;
  int s_8_St_7_Low_3_1_1;
  int s_8_St_7_Verylow_2_0;
  int s_8_St_7_Verylow_3_0_0;
  int s_8_St_7_Verylow_3_0_1;
  int s_8_St_7_Verylow_2_1;
  int s_8_St_7_Verylow_3_1_0;
  int s_8_St_7_Verylow_3_1_1;
  int ck_14_2_0;
  int ck_14_3_0_0;
  int ck_14_3_0_1;
  int ck_14_2_1;
  int ck_14_3_1_0;
  int ck_14_3_1_1;
  int r_3_St_7_Veryhigh;
  int s_8_St_7_Veryhigh_3;
  int s_8_St_7_Veryhigh_2;
  int s_8_St_7_Veryhigh_1;
  int r_3_St_7_High;
  int s_8_St_7_High_3;
  int s_8_St_7_High_2;
  int s_8_St_7_High_1;
  int r_3_St_7_Mid;
  int s_8_St_7_Mid_3;
  int s_8_St_7_Mid_2;
  int s_8_St_7_Mid_1;
  int r_3_St_7_Low;
  int s_8_St_7_Low_3;
  int s_8_St_7_Low_2;
  int s_8_St_7_Low_1;
  int r_3_St_7_Verylow;
  int s_8_St_7_Verylow_3;
  int s_8_St_7_Verylow_2;
  int s_8_St_7_Verylow_1;
  int ck_14_3;
  int ck_14_2;
  int ck_14_1;
  int v_1013;
  int v_1012;
  int v_1011;
  int v_1010;
  int v_1009;
  int v_1008;
  int v_1007;
  int v_1006;
  int v_1005;
  int v_1004;
  int v_1003;
  int v_1002;
  int v_1001;
  int v_1000;
  int v_999;
  int v_998;
  int v_997;
  int v_996;
  int v_995;
  int v_994;
  int v_993;
  int v_992;
  int v_991;
  int v_990;
  int v_989;
  int ns_4_St_8_Veryhigh_2_0;
  int ns_4_St_8_Veryhigh_3_0_0;
  int ns_4_St_8_Veryhigh_3_0_1;
  int ns_4_St_8_Veryhigh_2_1;
  int ns_4_St_8_Veryhigh_3_1_0;
  int ns_4_St_8_Veryhigh_3_1_1;
  int ns_4_St_8_High_2_0;
  int ns_4_St_8_High_3_0_0;
  int ns_4_St_8_High_3_0_1;
  int ns_4_St_8_High_2_1;
  int ns_4_St_8_High_3_1_0;
  int ns_4_St_8_High_3_1_1;
  int ns_4_St_8_Mid_2_0;
  int ns_4_St_8_Mid_3_0_0;
  int ns_4_St_8_Mid_3_0_1;
  int ns_4_St_8_Mid_2_1;
  int ns_4_St_8_Mid_3_1_0;
  int ns_4_St_8_Mid_3_1_1;
  int ns_4_St_8_Low_2_0;
  int ns_4_St_8_Low_3_0_0;
  int ns_4_St_8_Low_3_0_1;
  int ns_4_St_8_Low_2_1;
  int ns_4_St_8_Low_3_1_0;
  int ns_4_St_8_Low_3_1_1;
  int ns_4_St_8_Verylow_2_0;
  int ns_4_St_8_Verylow_3_0_0;
  int ns_4_St_8_Verylow_3_0_1;
  int ns_4_St_8_Verylow_2_1;
  int ns_4_St_8_Verylow_3_1_0;
  int ns_4_St_8_Verylow_3_1_1;
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int nr_4_St_8_Veryhigh;
  int ns_4_St_8_Veryhigh_3;
  int ns_4_St_8_Veryhigh_2;
  int ns_4_St_8_Veryhigh_1;
  int s_St_8_Veryhigh;
  int nr_4_St_8_High;
  int ns_4_St_8_High_3;
  int ns_4_St_8_High_2;
  int ns_4_St_8_High_1;
  int s_St_8_High;
  int nr_4_St_8_Mid;
  int ns_4_St_8_Mid_3;
  int ns_4_St_8_Mid_2;
  int ns_4_St_8_Mid_1;
  int s_St_8_Mid;
  int nr_4_St_8_Low;
  int ns_4_St_8_Low_3;
  int ns_4_St_8_Low_2;
  int ns_4_St_8_Low_1;
  int s_St_8_Low;
  int nr_4_St_8_Verylow;
  int ns_4_St_8_Verylow_3;
  int ns_4_St_8_Verylow_2;
  int ns_4_St_8_Verylow_1;
  int s_St_8_Verylow;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_538_2_0;
  int v_538_3_0_0;
  int v_538_3_0_1;
  int v_538_2_1;
  int v_538_3_1_0;
  int v_538_3_1_1;
  int v_536_2_0;
  int v_536_3_0_0;
  int v_536_3_0_1;
  int v_536_2_1;
  int v_536_3_1_0;
  int v_536_3_1_1;
  int v_534_2_0;
  int v_534_3_0_0;
  int v_534_3_0_1;
  int v_534_2_1;
  int v_534_3_1_0;
  int v_534_3_1_1;
  int v_539;
  int v_538_3;
  int v_538_2;
  int v_538_1;
  int v_537;
  int v_536_3;
  int v_536_2;
  int v_536_1;
  int v_535;
  int v_534_3;
  int v_534_2;
  int v_534_1;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_526_2_0;
  int v_526_3_0_0;
  int v_526_3_0_1;
  int v_526_2_1;
  int v_526_3_1_0;
  int v_526_3_1_1;
  int v_524_2_0;
  int v_524_3_0_0;
  int v_524_3_0_1;
  int v_524_2_1;
  int v_524_3_1_0;
  int v_524_3_1_1;
  int v_522_2_0;
  int v_522_3_0_0;
  int v_522_3_0_1;
  int v_522_2_1;
  int v_522_3_1_0;
  int v_522_3_1_1;
  int v_527;
  int v_526_3;
  int v_526_2;
  int v_526_1;
  int v_525;
  int v_524_3;
  int v_524_2;
  int v_524_1;
  int v_523;
  int v_522_3;
  int v_522_2;
  int v_522_1;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_512_2_0;
  int v_512_3_0_0;
  int v_512_3_0_1;
  int v_512_2_1;
  int v_512_3_1_0;
  int v_512_3_1_1;
  int v_510_2_0;
  int v_510_3_0_0;
  int v_510_3_0_1;
  int v_510_2_1;
  int v_510_3_1_0;
  int v_510_3_1_1;
  int v_508_2_0;
  int v_508_3_0_0;
  int v_508_3_0_1;
  int v_508_2_1;
  int v_508_3_1_0;
  int v_508_3_1_1;
  int v_513;
  int v_512_3;
  int v_512_2;
  int v_512_1;
  int v_511;
  int v_510_3;
  int v_510_2;
  int v_510_1;
  int v_509;
  int v_508_3;
  int v_508_2;
  int v_508_1;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_498_2_0;
  int v_498_3_0_0;
  int v_498_3_0_1;
  int v_498_2_1;
  int v_498_3_1_0;
  int v_498_3_1_1;
  int v_496_2_0;
  int v_496_3_0_0;
  int v_496_3_0_1;
  int v_496_2_1;
  int v_496_3_1_0;
  int v_496_3_1_1;
  int v_494_2_0;
  int v_494_3_0_0;
  int v_494_3_0_1;
  int v_494_2_1;
  int v_494_3_1_0;
  int v_494_3_1_1;
  int v_499;
  int v_498_3;
  int v_498_2;
  int v_498_1;
  int v_497;
  int v_496_3;
  int v_496_2;
  int v_496_1;
  int v_495;
  int v_494_3;
  int v_494_2;
  int v_494_1;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_484_2_0;
  int v_484_3_0_0;
  int v_484_3_0_1;
  int v_484_2_1;
  int v_484_3_1_0;
  int v_484_3_1_1;
  int v_482_2_0;
  int v_482_3_0_0;
  int v_482_3_0_1;
  int v_482_2_1;
  int v_482_3_1_0;
  int v_482_3_1_1;
  int v_480_2_0;
  int v_480_3_0_0;
  int v_480_3_0_1;
  int v_480_2_1;
  int v_480_3_1_0;
  int v_480_3_1_1;
  int v_485;
  int v_484_3;
  int v_484_2;
  int v_484_1;
  int v_483;
  int v_482_3;
  int v_482_2;
  int v_482_1;
  int v_481;
  int v_480_3;
  int v_480_2;
  int v_480_1;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_1036;
  int v_1035;
  int v_1034;
  int v_1033;
  int v_1032;
  int v_1031;
  int v_1030;
  int v_1029;
  int v_1028;
  int v_1027;
  int v_1026;
  int v_1025;
  int v_1024;
  int v_1023;
  int v_1022;
  int v_1021;
  int v_1020;
  int v_1019;
  int v_1018;
  int v_1017;
  int s_9_St_8_Veryhigh_2_0;
  int s_9_St_8_Veryhigh_3_0_0;
  int s_9_St_8_Veryhigh_3_0_1;
  int s_9_St_8_Veryhigh_2_1;
  int s_9_St_8_Veryhigh_3_1_0;
  int s_9_St_8_Veryhigh_3_1_1;
  int s_9_St_8_High_2_0;
  int s_9_St_8_High_3_0_0;
  int s_9_St_8_High_3_0_1;
  int s_9_St_8_High_2_1;
  int s_9_St_8_High_3_1_0;
  int s_9_St_8_High_3_1_1;
  int s_9_St_8_Mid_2_0;
  int s_9_St_8_Mid_3_0_0;
  int s_9_St_8_Mid_3_0_1;
  int s_9_St_8_Mid_2_1;
  int s_9_St_8_Mid_3_1_0;
  int s_9_St_8_Mid_3_1_1;
  int s_9_St_8_Low_2_0;
  int s_9_St_8_Low_3_0_0;
  int s_9_St_8_Low_3_0_1;
  int s_9_St_8_Low_2_1;
  int s_9_St_8_Low_3_1_0;
  int s_9_St_8_Low_3_1_1;
  int s_9_St_8_Verylow_2_0;
  int s_9_St_8_Verylow_3_0_0;
  int s_9_St_8_Verylow_3_0_1;
  int s_9_St_8_Verylow_2_1;
  int s_9_St_8_Verylow_3_1_0;
  int s_9_St_8_Verylow_3_1_1;
  int ck_12_2_0;
  int ck_12_3_0_0;
  int ck_12_3_0_1;
  int ck_12_2_1;
  int ck_12_3_1_0;
  int ck_12_3_1_1;
  int r_4_St_8_Veryhigh;
  int s_9_St_8_Veryhigh_3;
  int s_9_St_8_Veryhigh_2;
  int s_9_St_8_Veryhigh_1;
  int r_4_St_8_High;
  int s_9_St_8_High_3;
  int s_9_St_8_High_2;
  int s_9_St_8_High_1;
  int r_4_St_8_Mid;
  int s_9_St_8_Mid_3;
  int s_9_St_8_Mid_2;
  int s_9_St_8_Mid_1;
  int r_4_St_8_Low;
  int s_9_St_8_Low_3;
  int s_9_St_8_Low_2;
  int s_9_St_8_Low_1;
  int r_4_St_8_Verylow;
  int s_9_St_8_Verylow_3;
  int s_9_St_8_Verylow_2;
  int s_9_St_8_Verylow_1;
  int ck_12_3;
  int ck_12_2;
  int ck_12_1;
  int nr_5_St_9_ON;
  int ns_5_St_9_ON_1;
  int ligado_2_St_9_ON;
  int nr_5_St_9_Off;
  int ns_5_St_9_Off_1;
  int ligado_2_St_9_Off;
  int ck_11_1;
  int v_473;
  int r_5_St_9_ON;
  int s_10_St_9_ON_1;
  int r_5_St_9_Off;
  int s_10_St_9_Off_1;
  int nr_6_St_10_ON;
  int ns_6_St_10_ON_1;
  int ligado_1_St_10_ON;
  int nr_6_St_10_Off;
  int ns_6_St_10_Off_1;
  int ligado_1_St_10_Off;
  int ck_9_1;
  int v_472;
  int r_6_St_10_ON;
  int s_11_St_10_ON_1;
  int r_6_St_10_Off;
  int s_11_St_10_Off_1;
  int nr_7_St_11_ON;
  int ns_7_St_11_ON_1;
  int ligado_St_11_ON;
  int nr_7_St_11_Off;
  int ns_7_St_11_Off_1;
  int ligado_St_11_Off;
  int ck_7_1;
  int v_471;
  int r_7_St_11_ON;
  int s_12_St_11_ON_1;
  int r_7_St_11_Off;
  int s_12_St_11_Off_1;
  int v_1066;
  int v_1065;
  int v_1064;
  int v_1063;
  int v_1062;
  int v_1061;
  int v_1060;
  int v_1059;
  int v_1058;
  int v_1057;
  int v_1056;
  int v_1055;
  int v_1054;
  int v_1053;
  int v_1052;
  int v_1051;
  int v_1050;
  int v_1049;
  int v_1048;
  int v_1047;
  int v_1046;
  int v_1045;
  int v_1044;
  int v_1043;
  int v_1042;
  int v_1041;
  int v_1040;
  int v_1039;
  int v_1038;
  int v_1037;
  int ns_8_St_12_Rock_2_0;
  int ns_8_St_12_Rock_3_0_0;
  int ns_8_St_12_Rock_3_0_1;
  int ns_8_St_12_Rock_2_1;
  int ns_8_St_12_Rock_3_1_0;
  int ns_8_St_12_Rock_3_1_1;
  int ns_8_St_12_Regue_2_0;
  int ns_8_St_12_Regue_3_0_0;
  int ns_8_St_12_Regue_3_0_1;
  int ns_8_St_12_Regue_2_1;
  int ns_8_St_12_Regue_3_1_0;
  int ns_8_St_12_Regue_3_1_1;
  int ns_8_St_12_POP_2_0;
  int ns_8_St_12_POP_3_0_0;
  int ns_8_St_12_POP_3_0_1;
  int ns_8_St_12_POP_2_1;
  int ns_8_St_12_POP_3_1_0;
  int ns_8_St_12_POP_3_1_1;
  int ns_8_St_12_Indie_2_0;
  int ns_8_St_12_Indie_3_0_0;
  int ns_8_St_12_Indie_3_0_1;
  int ns_8_St_12_Indie_2_1;
  int ns_8_St_12_Indie_3_1_0;
  int ns_8_St_12_Indie_3_1_1;
  int ns_8_St_12_Funk_2_0;
  int ns_8_St_12_Funk_3_0_0;
  int ns_8_St_12_Funk_3_0_1;
  int ns_8_St_12_Funk_2_1;
  int ns_8_St_12_Funk_3_1_0;
  int ns_8_St_12_Funk_3_1_1;
  int ns_8_St_12_Electronic_2_0;
  int ns_8_St_12_Electronic_3_0_0;
  int ns_8_St_12_Electronic_3_0_1;
  int ns_8_St_12_Electronic_2_1;
  int ns_8_St_12_Electronic_3_1_0;
  int ns_8_St_12_Electronic_3_1_1;
  int ns_8_St_12_Classic_2_0;
  int ns_8_St_12_Classic_3_0_0;
  int ns_8_St_12_Classic_3_0_1;
  int ns_8_St_12_Classic_2_1;
  int ns_8_St_12_Classic_3_1_0;
  int ns_8_St_12_Classic_3_1_1;
  int ns_8_St_12_Off_2_0;
  int ns_8_St_12_Off_3_0_0;
  int ns_8_St_12_Off_3_0_1;
  int ns_8_St_12_Off_2_1;
  int ns_8_St_12_Off_3_1_0;
  int ns_8_St_12_Off_3_1_1;
  int ck_5_2_0;
  int ck_5_3_0_0;
  int ck_5_3_0_1;
  int ck_5_2_1;
  int ck_5_3_1_0;
  int ck_5_3_1_1;
  int nr_8_St_12_Rock;
  int ns_8_St_12_Rock_3;
  int ns_8_St_12_Rock_2;
  int ns_8_St_12_Rock_1;
  int res_1_St_12_Rock;
  int nr_8_St_12_Regue;
  int ns_8_St_12_Regue_3;
  int ns_8_St_12_Regue_2;
  int ns_8_St_12_Regue_1;
  int res_1_St_12_Regue;
  int nr_8_St_12_POP;
  int ns_8_St_12_POP_3;
  int ns_8_St_12_POP_2;
  int ns_8_St_12_POP_1;
  int res_1_St_12_POP;
  int nr_8_St_12_Indie;
  int ns_8_St_12_Indie_3;
  int ns_8_St_12_Indie_2;
  int ns_8_St_12_Indie_1;
  int res_1_St_12_Indie;
  int nr_8_St_12_Funk;
  int ns_8_St_12_Funk_3;
  int ns_8_St_12_Funk_2;
  int ns_8_St_12_Funk_1;
  int res_1_St_12_Funk;
  int nr_8_St_12_Electronic;
  int ns_8_St_12_Electronic_3;
  int ns_8_St_12_Electronic_2;
  int ns_8_St_12_Electronic_1;
  int res_1_St_12_Electronic;
  int nr_8_St_12_Classic;
  int ns_8_St_12_Classic_3;
  int ns_8_St_12_Classic_2;
  int ns_8_St_12_Classic_1;
  int res_1_St_12_Classic;
  int nr_8_St_12_Off;
  int ns_8_St_12_Off_3;
  int ns_8_St_12_Off_2;
  int ns_8_St_12_Off_1;
  int res_1_St_12_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_469_2_0;
  int v_469_3_0_0;
  int v_469_3_0_1;
  int v_469_2_1;
  int v_469_3_1_0;
  int v_469_3_1_1;
  int v_467_2_0;
  int v_467_3_0_0;
  int v_467_3_0_1;
  int v_467_2_1;
  int v_467_3_1_0;
  int v_467_3_1_1;
  int v_465_2_0;
  int v_465_3_0_0;
  int v_465_3_0_1;
  int v_465_2_1;
  int v_465_3_1_0;
  int v_465_3_1_1;
  int v_463_2_0;
  int v_463_3_0_0;
  int v_463_3_0_1;
  int v_463_2_1;
  int v_463_3_1_0;
  int v_463_3_1_1;
  int v_461_2_0;
  int v_461_3_0_0;
  int v_461_3_0_1;
  int v_461_2_1;
  int v_461_3_1_0;
  int v_461_3_1_1;
  int v_459_2_0;
  int v_459_3_0_0;
  int v_459_3_0_1;
  int v_459_2_1;
  int v_459_3_1_0;
  int v_459_3_1_1;
  int v_470;
  int v_469_3;
  int v_469_2;
  int v_469_1;
  int v_468;
  int v_467_3;
  int v_467_2;
  int v_467_1;
  int v_466;
  int v_465_3;
  int v_465_2;
  int v_465_1;
  int v_464;
  int v_463_3;
  int v_463_2;
  int v_463_1;
  int v_462;
  int v_461_3;
  int v_461_2;
  int v_461_1;
  int v_460;
  int v_459_3;
  int v_459_2;
  int v_459_1;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_450_2_0;
  int v_450_3_0_0;
  int v_450_3_0_1;
  int v_450_2_1;
  int v_450_3_1_0;
  int v_450_3_1_1;
  int v_448_2_0;
  int v_448_3_0_0;
  int v_448_3_0_1;
  int v_448_2_1;
  int v_448_3_1_0;
  int v_448_3_1_1;
  int v_446_2_0;
  int v_446_3_0_0;
  int v_446_3_0_1;
  int v_446_2_1;
  int v_446_3_1_0;
  int v_446_3_1_1;
  int v_444_2_0;
  int v_444_3_0_0;
  int v_444_3_0_1;
  int v_444_2_1;
  int v_444_3_1_0;
  int v_444_3_1_1;
  int v_442_2_0;
  int v_442_3_0_0;
  int v_442_3_0_1;
  int v_442_2_1;
  int v_442_3_1_0;
  int v_442_3_1_1;
  int v_440_2_0;
  int v_440_3_0_0;
  int v_440_3_0_1;
  int v_440_2_1;
  int v_440_3_1_0;
  int v_440_3_1_1;
  int v_451;
  int v_450_3;
  int v_450_2;
  int v_450_1;
  int v_449;
  int v_448_3;
  int v_448_2;
  int v_448_1;
  int v_447;
  int v_446_3;
  int v_446_2;
  int v_446_1;
  int v_445;
  int v_444_3;
  int v_444_2;
  int v_444_1;
  int v_443;
  int v_442_3;
  int v_442_2;
  int v_442_1;
  int v_441;
  int v_440_3;
  int v_440_2;
  int v_440_1;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_431_2_0;
  int v_431_3_0_0;
  int v_431_3_0_1;
  int v_431_2_1;
  int v_431_3_1_0;
  int v_431_3_1_1;
  int v_429_2_0;
  int v_429_3_0_0;
  int v_429_3_0_1;
  int v_429_2_1;
  int v_429_3_1_0;
  int v_429_3_1_1;
  int v_427_2_0;
  int v_427_3_0_0;
  int v_427_3_0_1;
  int v_427_2_1;
  int v_427_3_1_0;
  int v_427_3_1_1;
  int v_425_2_0;
  int v_425_3_0_0;
  int v_425_3_0_1;
  int v_425_2_1;
  int v_425_3_1_0;
  int v_425_3_1_1;
  int v_423_2_0;
  int v_423_3_0_0;
  int v_423_3_0_1;
  int v_423_2_1;
  int v_423_3_1_0;
  int v_423_3_1_1;
  int v_421_2_0;
  int v_421_3_0_0;
  int v_421_3_0_1;
  int v_421_2_1;
  int v_421_3_1_0;
  int v_421_3_1_1;
  int v_432;
  int v_431_3;
  int v_431_2;
  int v_431_1;
  int v_430;
  int v_429_3;
  int v_429_2;
  int v_429_1;
  int v_428;
  int v_427_3;
  int v_427_2;
  int v_427_1;
  int v_426;
  int v_425_3;
  int v_425_2;
  int v_425_1;
  int v_424;
  int v_423_3;
  int v_423_2;
  int v_423_1;
  int v_422;
  int v_421_3;
  int v_421_2;
  int v_421_1;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_412_2_0;
  int v_412_3_0_0;
  int v_412_3_0_1;
  int v_412_2_1;
  int v_412_3_1_0;
  int v_412_3_1_1;
  int v_410_2_0;
  int v_410_3_0_0;
  int v_410_3_0_1;
  int v_410_2_1;
  int v_410_3_1_0;
  int v_410_3_1_1;
  int v_408_2_0;
  int v_408_3_0_0;
  int v_408_3_0_1;
  int v_408_2_1;
  int v_408_3_1_0;
  int v_408_3_1_1;
  int v_406_2_0;
  int v_406_3_0_0;
  int v_406_3_0_1;
  int v_406_2_1;
  int v_406_3_1_0;
  int v_406_3_1_1;
  int v_404_2_0;
  int v_404_3_0_0;
  int v_404_3_0_1;
  int v_404_2_1;
  int v_404_3_1_0;
  int v_404_3_1_1;
  int v_402_2_0;
  int v_402_3_0_0;
  int v_402_3_0_1;
  int v_402_2_1;
  int v_402_3_1_0;
  int v_402_3_1_1;
  int v_413;
  int v_412_3;
  int v_412_2;
  int v_412_1;
  int v_411;
  int v_410_3;
  int v_410_2;
  int v_410_1;
  int v_409;
  int v_408_3;
  int v_408_2;
  int v_408_1;
  int v_407;
  int v_406_3;
  int v_406_2;
  int v_406_1;
  int v_405;
  int v_404_3;
  int v_404_2;
  int v_404_1;
  int v_403;
  int v_402_3;
  int v_402_2;
  int v_402_1;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_393_2_0;
  int v_393_3_0_0;
  int v_393_3_0_1;
  int v_393_2_1;
  int v_393_3_1_0;
  int v_393_3_1_1;
  int v_391_2_0;
  int v_391_3_0_0;
  int v_391_3_0_1;
  int v_391_2_1;
  int v_391_3_1_0;
  int v_391_3_1_1;
  int v_389_2_0;
  int v_389_3_0_0;
  int v_389_3_0_1;
  int v_389_2_1;
  int v_389_3_1_0;
  int v_389_3_1_1;
  int v_387_2_0;
  int v_387_3_0_0;
  int v_387_3_0_1;
  int v_387_2_1;
  int v_387_3_1_0;
  int v_387_3_1_1;
  int v_385_2_0;
  int v_385_3_0_0;
  int v_385_3_0_1;
  int v_385_2_1;
  int v_385_3_1_0;
  int v_385_3_1_1;
  int v_383_2_0;
  int v_383_3_0_0;
  int v_383_3_0_1;
  int v_383_2_1;
  int v_383_3_1_0;
  int v_383_3_1_1;
  int v_394;
  int v_393_3;
  int v_393_2;
  int v_393_1;
  int v_392;
  int v_391_3;
  int v_391_2;
  int v_391_1;
  int v_390;
  int v_389_3;
  int v_389_2;
  int v_389_1;
  int v_388;
  int v_387_3;
  int v_387_2;
  int v_387_1;
  int v_386;
  int v_385_3;
  int v_385_2;
  int v_385_1;
  int v_384;
  int v_383_3;
  int v_383_2;
  int v_383_1;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_374_2_0;
  int v_374_3_0_0;
  int v_374_3_0_1;
  int v_374_2_1;
  int v_374_3_1_0;
  int v_374_3_1_1;
  int v_372_2_0;
  int v_372_3_0_0;
  int v_372_3_0_1;
  int v_372_2_1;
  int v_372_3_1_0;
  int v_372_3_1_1;
  int v_370_2_0;
  int v_370_3_0_0;
  int v_370_3_0_1;
  int v_370_2_1;
  int v_370_3_1_0;
  int v_370_3_1_1;
  int v_368_2_0;
  int v_368_3_0_0;
  int v_368_3_0_1;
  int v_368_2_1;
  int v_368_3_1_0;
  int v_368_3_1_1;
  int v_366_2_0;
  int v_366_3_0_0;
  int v_366_3_0_1;
  int v_366_2_1;
  int v_366_3_1_0;
  int v_366_3_1_1;
  int v_364_2_0;
  int v_364_3_0_0;
  int v_364_3_0_1;
  int v_364_2_1;
  int v_364_3_1_0;
  int v_364_3_1_1;
  int v_375;
  int v_374_3;
  int v_374_2;
  int v_374_1;
  int v_373;
  int v_372_3;
  int v_372_2;
  int v_372_1;
  int v_371;
  int v_370_3;
  int v_370_2;
  int v_370_1;
  int v_369;
  int v_368_3;
  int v_368_2;
  int v_368_1;
  int v_367;
  int v_366_3;
  int v_366_2;
  int v_366_1;
  int v_365;
  int v_364_3;
  int v_364_2;
  int v_364_1;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_355_2_0;
  int v_355_3_0_0;
  int v_355_3_0_1;
  int v_355_2_1;
  int v_355_3_1_0;
  int v_355_3_1_1;
  int v_353_2_0;
  int v_353_3_0_0;
  int v_353_3_0_1;
  int v_353_2_1;
  int v_353_3_1_0;
  int v_353_3_1_1;
  int v_351_2_0;
  int v_351_3_0_0;
  int v_351_3_0_1;
  int v_351_2_1;
  int v_351_3_1_0;
  int v_351_3_1_1;
  int v_349_2_0;
  int v_349_3_0_0;
  int v_349_3_0_1;
  int v_349_2_1;
  int v_349_3_1_0;
  int v_349_3_1_1;
  int v_347_2_0;
  int v_347_3_0_0;
  int v_347_3_0_1;
  int v_347_2_1;
  int v_347_3_1_0;
  int v_347_3_1_1;
  int v_345_2_0;
  int v_345_3_0_0;
  int v_345_3_0_1;
  int v_345_2_1;
  int v_345_3_1_0;
  int v_345_3_1_1;
  int v_356;
  int v_355_3;
  int v_355_2;
  int v_355_1;
  int v_354;
  int v_353_3;
  int v_353_2;
  int v_353_1;
  int v_352;
  int v_351_3;
  int v_351_2;
  int v_351_1;
  int v_350;
  int v_349_3;
  int v_349_2;
  int v_349_1;
  int v_348;
  int v_347_3;
  int v_347_2;
  int v_347_1;
  int v_346;
  int v_345_3;
  int v_345_2;
  int v_345_1;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_336_2_0;
  int v_336_3_0_0;
  int v_336_3_0_1;
  int v_336_2_1;
  int v_336_3_1_0;
  int v_336_3_1_1;
  int v_334_2_0;
  int v_334_3_0_0;
  int v_334_3_0_1;
  int v_334_2_1;
  int v_334_3_1_0;
  int v_334_3_1_1;
  int v_332_2_0;
  int v_332_3_0_0;
  int v_332_3_0_1;
  int v_332_2_1;
  int v_332_3_1_0;
  int v_332_3_1_1;
  int v_330_2_0;
  int v_330_3_0_0;
  int v_330_3_0_1;
  int v_330_2_1;
  int v_330_3_1_0;
  int v_330_3_1_1;
  int v_328_2_0;
  int v_328_3_0_0;
  int v_328_3_0_1;
  int v_328_2_1;
  int v_328_3_1_0;
  int v_328_3_1_1;
  int v_326_2_0;
  int v_326_3_0_0;
  int v_326_3_0_1;
  int v_326_2_1;
  int v_326_3_1_0;
  int v_326_3_1_1;
  int v_337;
  int v_336_3;
  int v_336_2;
  int v_336_1;
  int v_335;
  int v_334_3;
  int v_334_2;
  int v_334_1;
  int v_333;
  int v_332_3;
  int v_332_2;
  int v_332_1;
  int v_331;
  int v_330_3;
  int v_330_2;
  int v_330_1;
  int v_329;
  int v_328_3;
  int v_328_2;
  int v_328_1;
  int v_327;
  int v_326_3;
  int v_326_2;
  int v_326_1;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_1093;
  int v_1092;
  int v_1091;
  int v_1090;
  int v_1089;
  int v_1088;
  int v_1087;
  int v_1086;
  int v_1085;
  int v_1084;
  int v_1083;
  int v_1082;
  int v_1081;
  int v_1080;
  int v_1079;
  int v_1078;
  int v_1077;
  int v_1076;
  int v_1075;
  int v_1074;
  int v_1073;
  int v_1072;
  int v_1071;
  int v_1070;
  int s_13_St_12_Rock_2_0;
  int s_13_St_12_Rock_3_0_0;
  int s_13_St_12_Rock_3_0_1;
  int s_13_St_12_Rock_2_1;
  int s_13_St_12_Rock_3_1_0;
  int s_13_St_12_Rock_3_1_1;
  int s_13_St_12_Regue_2_0;
  int s_13_St_12_Regue_3_0_0;
  int s_13_St_12_Regue_3_0_1;
  int s_13_St_12_Regue_2_1;
  int s_13_St_12_Regue_3_1_0;
  int s_13_St_12_Regue_3_1_1;
  int s_13_St_12_POP_2_0;
  int s_13_St_12_POP_3_0_0;
  int s_13_St_12_POP_3_0_1;
  int s_13_St_12_POP_2_1;
  int s_13_St_12_POP_3_1_0;
  int s_13_St_12_POP_3_1_1;
  int s_13_St_12_Indie_2_0;
  int s_13_St_12_Indie_3_0_0;
  int s_13_St_12_Indie_3_0_1;
  int s_13_St_12_Indie_2_1;
  int s_13_St_12_Indie_3_1_0;
  int s_13_St_12_Indie_3_1_1;
  int s_13_St_12_Funk_2_0;
  int s_13_St_12_Funk_3_0_0;
  int s_13_St_12_Funk_3_0_1;
  int s_13_St_12_Funk_2_1;
  int s_13_St_12_Funk_3_1_0;
  int s_13_St_12_Funk_3_1_1;
  int s_13_St_12_Electronic_2_0;
  int s_13_St_12_Electronic_3_0_0;
  int s_13_St_12_Electronic_3_0_1;
  int s_13_St_12_Electronic_2_1;
  int s_13_St_12_Electronic_3_1_0;
  int s_13_St_12_Electronic_3_1_1;
  int s_13_St_12_Classic_2_0;
  int s_13_St_12_Classic_3_0_0;
  int s_13_St_12_Classic_3_0_1;
  int s_13_St_12_Classic_2_1;
  int s_13_St_12_Classic_3_1_0;
  int s_13_St_12_Classic_3_1_1;
  int s_13_St_12_Off_2_0;
  int s_13_St_12_Off_3_0_0;
  int s_13_St_12_Off_3_0_1;
  int s_13_St_12_Off_2_1;
  int s_13_St_12_Off_3_1_0;
  int s_13_St_12_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_8_St_12_Rock;
  int s_13_St_12_Rock_3;
  int s_13_St_12_Rock_2;
  int s_13_St_12_Rock_1;
  int r_8_St_12_Regue;
  int s_13_St_12_Regue_3;
  int s_13_St_12_Regue_2;
  int s_13_St_12_Regue_1;
  int r_8_St_12_POP;
  int s_13_St_12_POP_3;
  int s_13_St_12_POP_2;
  int s_13_St_12_POP_1;
  int r_8_St_12_Indie;
  int s_13_St_12_Indie_3;
  int s_13_St_12_Indie_2;
  int s_13_St_12_Indie_1;
  int r_8_St_12_Funk;
  int s_13_St_12_Funk_3;
  int s_13_St_12_Funk_2;
  int s_13_St_12_Funk_1;
  int r_8_St_12_Electronic;
  int s_13_St_12_Electronic_3;
  int s_13_St_12_Electronic_2;
  int s_13_St_12_Electronic_1;
  int r_8_St_12_Classic;
  int s_13_St_12_Classic_3;
  int s_13_St_12_Classic_2;
  int s_13_St_12_Classic_1;
  int r_8_St_12_Off;
  int s_13_St_12_Off_3;
  int s_13_St_12_Off_2;
  int s_13_St_12_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_13_2_0;
  int s_13_3_0_0;
  int s_13_3_0_1;
  int s_13_2_1;
  int s_13_3_1_0;
  int s_13_3_1_1;
  int ns_8_2_0;
  int ns_8_3_0_0;
  int ns_8_3_0_1;
  int ns_8_2_1;
  int ns_8_3_1_0;
  int ns_8_3_1_1;
  int s_9_2_0;
  int s_9_3_0_0;
  int s_9_3_0_1;
  int s_9_2_1;
  int s_9_3_1_0;
  int s_9_3_1_1;
  int ns_4_2_0;
  int ns_4_3_0_0;
  int ns_4_3_0_1;
  int ns_4_2_1;
  int ns_4_3_1_0;
  int ns_4_3_1_1;
  int s_8_2_0;
  int s_8_3_0_0;
  int s_8_3_0_1;
  int s_8_2_1;
  int s_8_3_1_0;
  int s_8_3_1_1;
  int ns_3_2_0;
  int ns_3_3_0_0;
  int ns_3_3_0_1;
  int ns_3_2_1;
  int ns_3_3_1_0;
  int ns_3_3_1_1;
  int s_7_2_0;
  int s_7_3_0_0;
  int s_7_3_0_1;
  int s_7_2_1;
  int s_7_3_1_0;
  int s_7_3_1_1;
  int ns_2_2_0;
  int ns_2_3_0_0;
  int ns_2_3_0_1;
  int ns_2_2_1;
  int ns_2_3_1_0;
  int ns_2_3_1_1;
  int s_6_2_0;
  int s_6_3_0_0;
  int s_6_3_0_1;
  int s_6_2_1;
  int s_6_3_1_0;
  int s_6_3_1_1;
  int ns_1_2_0;
  int ns_1_3_0_0;
  int ns_1_3_0_1;
  int ns_1_2_1;
  int ns_1_3_1_0;
  int ns_1_3_1_1;
  int s_13_3;
  int s_13_2;
  int s_13_1;
  int ns_8_3;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_12_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_11_1;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_10_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_9_3;
  int s_9_2;
  int s_9_1;
  int ns_4_3;
  int ns_4_2;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_8_3;
  int s_8_2;
  int s_8_1;
  int ns_3_3;
  int ns_3_2;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_7_3;
  int s_7_2;
  int s_7_1;
  int ns_2_3;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_6_3;
  int s_6_2;
  int s_6_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_5_1;
  int ns_1_4;
  int r;
  int nr;
  int hora_1;
  int madrug_1;
  int cvl_3;
  int clo_3;
  int cmi_3;
  int chi_3;
  int cvh_3;
  int c_6;
  int up_3;
  int down_3;
  int s_3;
  int cvl_2;
  int clo_2;
  int cmi_2;
  int chi_2;
  int cvh_2;
  int c_5;
  int up_2;
  int down_2;
  int s_2;
  int cvl_1;
  int clo_1;
  int cmi_1;
  int chi_1;
  int cvh_1;
  int c_4;
  int up_1;
  int down_1;
  int s_1;
  int cvl;
  int clo;
  int cmi;
  int chi;
  int cvh;
  int c_3;
  int up;
  int down;
  int s;
  int c_2;
  int ligado_2;
  int c_1;
  int ligado_1;
  int c;
  int ligado;
  int tipo_1;
  int res_1;
  int ruleVol;
  int ruleRock;
  int ruleRegue;
  int rulePOP;
  int ruleIndie;
  int ruleFunk;
  int ruleElectron;
  int ruleClassic;
  int ruleOff;
  int v;
  int v_218;
  int v_219;
  int v_220;
  int v_221;
  int v_222;
  int v_223;
  int v_224;
  int v_225;
  int v_226;
  int v_227;
  int v_228;
  int v_229;
  int v_230;
  int v_231;
  int v_232;
  int v_233;
  int v_234;
  int v_235;
  int v_236;
  int v_237;
  int v_238;
  int v_239;
  int v_240;
  int v_241;
  int v_242;
  int v_243;
  int v_244;
  int v_245;
  int v_246;
  int v_247;
  int v_248;
  int v_249;
  int v_250;
  int v_251;
  int v_252;
  int v_253;
  int v_254;
  int v_255;
  int v_256;
  int v_257;
  int v_258;
  int v_259;
  int v_260;
  int v_261;
  int v_262;
  int v_263;
  int v_264;
  int v_265;
  int v_266;
  int v_267;
  int v_268;
  int v_269;
  int v_270;
  int v_271;
  int v_272;
  int v_273;
  int v_274;
  int v_275;
  int v_276;
  int v_277;
  int v_278;
  int v_279;
  int v_280;
  int v_281;
  int v_282;
  int v_283;
  int v_284;
  int v_285;
  int v_286;
  int v_287;
  int v_288;
  int v_289;
  int v_290;
  int v_291;
  int v_292;
  int v_293;
  int v_294;
  int v_295;
  int v_296;
  int v_297;
  int v_298;
  int v_299;
  int v_300;
  int v_301;
  int v_302;
  int v_303;
  int v_304;
  int v_305;
  int v_306;
  int v_307;
  int v_308;
  int v_309;
  int v_310;
  int v_311;
  int v_312;
  int v_313;
  int v_314;
  int v_315;
  int v_316;
  int v_317;
  int v_318;
  int cvol;
  int vol5;
  int vol4;
  int vol3;
  int vol2;
  int vol1;
  int cg;
  int cg5;
  int cg4;
  int cg3;
  int cg2;
  int cg1;
  int cm;
  int cm5;
  int cm4;
  int cm3;
  int cm2;
  int cm1;
  int ca;
  int ca5;
  int ca4;
  int ca3;
  int ca2;
  int ca1;
  int c3;
  int c2;
  int c1;
  hora_1 = hora;
  up_3 = upv;
  down_3 = downv;
  ck_18_1 = self->v_870;
  ck_18_2 = self->v_871;
  ck_18_3 = self->v_872;
  up_2 = upg;
  down_2 = downg;
  ck_16_1 = self->v_918;
  ck_16_2 = self->v_919;
  ck_16_3 = self->v_920;
  up_1 = upm;
  down_1 = downm;
  ck_14_1 = self->v_966;
  ck_14_2 = self->v_967;
  ck_14_3 = self->v_968;
  up = upa;
  down = downa;
  ck_12_1 = self->v_1014;
  ck_12_2 = self->v_1015;
  ck_12_3 = self->v_1016;
  tipo_1 = tipo;
  ck_1 = self->v_1067;
  ck_2 = self->v_1068;
  ck_3 = self->v_1069;
  if (self->ck_20_1) {
    v_738 = (hora_1<6);
    if (v_738) {
      r_St_4_Madrugada = true;
    } else {
      r_St_4_Madrugada = self->pnr;
    };
    r = r_St_4_Madrugada;
    if (v_738) {
      s_5_St_4_Madrugada_1 = false;
    } else {
      s_5_St_4_Madrugada_1 = true;
    };
    s_5_1 = s_5_St_4_Madrugada_1;
  } else {
    v_739 = (hora_1>=22);
    if (v_739) {
      r_St_4_NaoMadrugada = true;
      s_5_St_4_NaoMadrugada_1 = true;
    } else {
      r_St_4_NaoMadrugada = self->pnr;
      s_5_St_4_NaoMadrugada_1 = false;
    };
    r = r_St_4_NaoMadrugada;
    s_5_1 = s_5_St_4_NaoMadrugada_1;
  };
  ck_21_1 = s_5_1;
  if (ck_21_1) {
    madrug_1_St_4_Madrugada = true;
    madrug_1 = madrug_1_St_4_Madrugada;
    nr_St_4_Madrugada = false;
    nr = nr_St_4_Madrugada;
    ns_St_4_Madrugada_1 = true;
    ns_1_4 = ns_St_4_Madrugada_1;
  } else {
    madrug_1_St_4_NaoMadrugada = false;
    nr_St_4_NaoMadrugada = false;
    ns_St_4_NaoMadrugada_1 = false;
    madrug_1 = madrug_1_St_4_NaoMadrugada;
    nr = nr_St_4_NaoMadrugada;
    ns_1_4 = ns_St_4_NaoMadrugada_1;
  };
  _out->madrug = madrug_1;
  v = !(_out->madrug);
  if (ck_18_1) {
    ck_18_2_1 = ck_18_2;
    if (ck_18_2_1) {
      ck_18_3_1_1 = ck_18_3;
    } else {
      ck_18_3_1_0 = ck_18_3;
    };
  } else {
    ck_18_2_0 = ck_18_2;
    if (ck_18_2_0) {
      ck_18_3_0_1 = ck_18_3;
    } else {
      ck_18_3_0_0 = ck_18_3;
    };
  };
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      ck_16_3_1_1 = ck_16_3;
    } else {
      ck_16_3_1_0 = ck_16_3;
    };
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      ck_16_3_0_1 = ck_16_3;
    } else {
      ck_16_3_0_0 = ck_16_3;
    };
  };
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ck_14_3_1_1 = ck_14_3;
    } else {
      ck_14_3_1_0 = ck_14_3;
    };
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      ck_14_3_0_1 = ck_14_3;
    } else {
      ck_14_3_0_0 = ck_14_3;
    };
  };
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      ck_12_3_1_1 = ck_12_3;
    } else {
      ck_12_3_1_0 = ck_12_3;
    };
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      ck_12_3_0_1 = ck_12_3;
    } else {
      ck_12_3_0_0 = ck_12_3;
    };
  };
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_439 = (tipo_1==7);
        if (v_439) {
          v_441 = true;
          v_440_1 = false;
          v_440_2 = false;
          v_440_3 = false;
        } else {
          v_441 = self->pnr_8;
          v_440_1 = true;
          v_440_2 = true;
          v_440_3 = true;
        };
        v_438 = (tipo_1==6);
        if (v_438) {
          v_443 = true;
          v_442_1 = false;
          v_442_2 = false;
          v_442_3 = true;
        } else {
          v_443 = v_441;
          v_442_1 = v_440_1;
          v_442_2 = v_440_2;
          v_442_3 = v_440_3;
        };
        v_437 = (tipo_1==5);
        if (v_437) {
          v_445 = true;
          v_444_1 = false;
          v_444_2 = true;
          v_444_3 = false;
        } else {
          v_445 = v_443;
          v_444_1 = v_442_1;
          v_444_2 = v_442_2;
          v_444_3 = v_442_3;
        };
        v_436 = (tipo_1==4);
        if (v_436) {
          v_447 = true;
          v_446_1 = true;
          v_446_2 = false;
          v_446_3 = false;
        } else {
          v_447 = v_445;
          v_446_1 = v_444_1;
          v_446_2 = v_444_2;
          v_446_3 = v_444_3;
        };
        v_435 = (tipo_1==3);
        if (v_435) {
          v_449 = true;
          v_448_1 = true;
          v_448_2 = false;
          v_448_3 = true;
        } else {
          v_449 = v_447;
          v_448_1 = v_446_1;
          v_448_2 = v_446_2;
          v_448_3 = v_446_3;
        };
        v_434 = (tipo_1==2);
        if (v_434) {
          v_451 = true;
          v_450_1 = true;
          v_450_2 = true;
          v_450_3 = false;
        } else {
          v_451 = v_449;
          v_450_1 = v_448_1;
          v_450_2 = v_448_2;
          v_450_3 = v_448_3;
        };
        v_433 = (tipo_1==0);
        if (v_433) {
          r_8_St_12_Classic = true;
          s_13_St_12_Classic_1 = false;
          s_13_St_12_Classic_2 = true;
          s_13_St_12_Classic_3 = true;
        } else {
          r_8_St_12_Classic = v_451;
          s_13_St_12_Classic_1 = v_450_1;
          s_13_St_12_Classic_2 = v_450_2;
          s_13_St_12_Classic_3 = v_450_3;
        };
        v_1088 = r_8_St_12_Classic;
        v_1070 = s_13_St_12_Classic_1;
        v_1071 = s_13_St_12_Classic_2;
        v_1072 = s_13_St_12_Classic_3;
        if (v_440_1) {
          v_440_2_1 = v_440_2;
          if (v_440_2_1) {
            v_440_3_1_1 = v_440_3;
          } else {
            v_440_3_1_0 = v_440_3;
          };
        } else {
          v_440_2_0 = v_440_2;
          if (v_440_2_0) {
            v_440_3_0_1 = v_440_3;
          } else {
            v_440_3_0_0 = v_440_3;
          };
        };
        if (v_442_1) {
          v_442_2_1 = v_442_2;
          if (v_442_2_1) {
            v_442_3_1_1 = v_442_3;
          } else {
            v_442_3_1_0 = v_442_3;
          };
        } else {
          v_442_2_0 = v_442_2;
          if (v_442_2_0) {
            v_442_3_0_1 = v_442_3;
          } else {
            v_442_3_0_0 = v_442_3;
          };
        };
        if (v_444_1) {
          v_444_2_1 = v_444_2;
          if (v_444_2_1) {
            v_444_3_1_1 = v_444_3;
          } else {
            v_444_3_1_0 = v_444_3;
          };
        } else {
          v_444_2_0 = v_444_2;
          if (v_444_2_0) {
            v_444_3_0_1 = v_444_3;
          } else {
            v_444_3_0_0 = v_444_3;
          };
        };
        if (v_446_1) {
          v_446_2_1 = v_446_2;
          if (v_446_2_1) {
            v_446_3_1_1 = v_446_3;
          } else {
            v_446_3_1_0 = v_446_3;
          };
        } else {
          v_446_2_0 = v_446_2;
          if (v_446_2_0) {
            v_446_3_0_1 = v_446_3;
          } else {
            v_446_3_0_0 = v_446_3;
          };
        };
        if (v_448_1) {
          v_448_2_1 = v_448_2;
          if (v_448_2_1) {
            v_448_3_1_1 = v_448_3;
          } else {
            v_448_3_1_0 = v_448_3;
          };
        } else {
          v_448_2_0 = v_448_2;
          if (v_448_2_0) {
            v_448_3_0_1 = v_448_3;
          } else {
            v_448_3_0_0 = v_448_3;
          };
        };
        if (v_450_1) {
          v_450_2_1 = v_450_2;
          if (v_450_2_1) {
            v_450_3_1_1 = v_450_3;
          } else {
            v_450_3_1_0 = v_450_3;
          };
        } else {
          v_450_2_0 = v_450_2;
          if (v_450_2_0) {
            v_450_3_0_1 = v_450_3;
          } else {
            v_450_3_0_0 = v_450_3;
          };
        };
        if (s_13_St_12_Classic_1) {
          s_13_St_12_Classic_2_1 = s_13_St_12_Classic_2;
          if (s_13_St_12_Classic_2_1) {
            s_13_St_12_Classic_3_1_1 = s_13_St_12_Classic_3;
          } else {
            s_13_St_12_Classic_3_1_0 = s_13_St_12_Classic_3;
          };
        } else {
          s_13_St_12_Classic_2_0 = s_13_St_12_Classic_2;
          if (s_13_St_12_Classic_2_0) {
            s_13_St_12_Classic_3_0_1 = s_13_St_12_Classic_3;
          } else {
            s_13_St_12_Classic_3_0_0 = s_13_St_12_Classic_3;
          };
        };
      } else {
        v_420 = (tipo_1==7);
        if (v_420) {
          v_422 = true;
          v_421_1 = false;
          v_421_2 = false;
          v_421_3 = false;
        } else {
          v_422 = self->pnr_8;
          v_421_1 = true;
          v_421_2 = true;
          v_421_3 = false;
        };
        v_419 = (tipo_1==6);
        if (v_419) {
          v_424 = true;
          v_423_1 = false;
          v_423_2 = false;
          v_423_3 = true;
        } else {
          v_424 = v_422;
          v_423_1 = v_421_1;
          v_423_2 = v_421_2;
          v_423_3 = v_421_3;
        };
        v_418 = (tipo_1==5);
        if (v_418) {
          v_426 = true;
          v_425_1 = false;
          v_425_2 = true;
          v_425_3 = false;
        } else {
          v_426 = v_424;
          v_425_1 = v_423_1;
          v_425_2 = v_423_2;
          v_425_3 = v_423_3;
        };
        v_417 = (tipo_1==4);
        if (v_417) {
          v_428 = true;
          v_427_1 = true;
          v_427_2 = false;
          v_427_3 = false;
        } else {
          v_428 = v_426;
          v_427_1 = v_425_1;
          v_427_2 = v_425_2;
          v_427_3 = v_425_3;
        };
        v_416 = (tipo_1==3);
        if (v_416) {
          v_430 = true;
          v_429_1 = true;
          v_429_2 = false;
          v_429_3 = true;
        } else {
          v_430 = v_428;
          v_429_1 = v_427_1;
          v_429_2 = v_427_2;
          v_429_3 = v_427_3;
        };
        v_415 = (tipo_1==1);
        if (v_415) {
          v_432 = true;
          v_431_1 = true;
          v_431_2 = true;
          v_431_3 = true;
        } else {
          v_432 = v_430;
          v_431_1 = v_429_1;
          v_431_2 = v_429_2;
          v_431_3 = v_429_3;
        };
        v_414 = (tipo_1==0);
        if (v_414) {
          r_8_St_12_Electronic = true;
        } else {
          r_8_St_12_Electronic = v_432;
        };
        v_1088 = r_8_St_12_Electronic;
        if (v_414) {
          s_13_St_12_Electronic_1 = false;
        } else {
          s_13_St_12_Electronic_1 = v_431_1;
        };
        v_1070 = s_13_St_12_Electronic_1;
        if (v_414) {
          s_13_St_12_Electronic_2 = true;
        } else {
          s_13_St_12_Electronic_2 = v_431_2;
        };
        v_1071 = s_13_St_12_Electronic_2;
        if (v_414) {
          s_13_St_12_Electronic_3 = true;
        } else {
          s_13_St_12_Electronic_3 = v_431_3;
        };
        v_1072 = s_13_St_12_Electronic_3;
        if (v_421_1) {
          v_421_2_1 = v_421_2;
          if (v_421_2_1) {
            v_421_3_1_1 = v_421_3;
          } else {
            v_421_3_1_0 = v_421_3;
          };
        } else {
          v_421_2_0 = v_421_2;
          if (v_421_2_0) {
            v_421_3_0_1 = v_421_3;
          } else {
            v_421_3_0_0 = v_421_3;
          };
        };
        if (v_423_1) {
          v_423_2_1 = v_423_2;
          if (v_423_2_1) {
            v_423_3_1_1 = v_423_3;
          } else {
            v_423_3_1_0 = v_423_3;
          };
        } else {
          v_423_2_0 = v_423_2;
          if (v_423_2_0) {
            v_423_3_0_1 = v_423_3;
          } else {
            v_423_3_0_0 = v_423_3;
          };
        };
        if (v_425_1) {
          v_425_2_1 = v_425_2;
          if (v_425_2_1) {
            v_425_3_1_1 = v_425_3;
          } else {
            v_425_3_1_0 = v_425_3;
          };
        } else {
          v_425_2_0 = v_425_2;
          if (v_425_2_0) {
            v_425_3_0_1 = v_425_3;
          } else {
            v_425_3_0_0 = v_425_3;
          };
        };
        if (v_427_1) {
          v_427_2_1 = v_427_2;
          if (v_427_2_1) {
            v_427_3_1_1 = v_427_3;
          } else {
            v_427_3_1_0 = v_427_3;
          };
        } else {
          v_427_2_0 = v_427_2;
          if (v_427_2_0) {
            v_427_3_0_1 = v_427_3;
          } else {
            v_427_3_0_0 = v_427_3;
          };
        };
        if (v_429_1) {
          v_429_2_1 = v_429_2;
          if (v_429_2_1) {
            v_429_3_1_1 = v_429_3;
          } else {
            v_429_3_1_0 = v_429_3;
          };
        } else {
          v_429_2_0 = v_429_2;
          if (v_429_2_0) {
            v_429_3_0_1 = v_429_3;
          } else {
            v_429_3_0_0 = v_429_3;
          };
        };
        if (v_431_1) {
          v_431_2_1 = v_431_2;
          if (v_431_2_1) {
            v_431_3_1_1 = v_431_3;
          } else {
            v_431_3_1_0 = v_431_3;
          };
        } else {
          v_431_2_0 = v_431_2;
          if (v_431_2_0) {
            v_431_3_0_1 = v_431_3;
          } else {
            v_431_3_0_0 = v_431_3;
          };
        };
        if (s_13_St_12_Electronic_1) {
          s_13_St_12_Electronic_2_1 = s_13_St_12_Electronic_2;
          if (s_13_St_12_Electronic_2_1) {
            s_13_St_12_Electronic_3_1_1 = s_13_St_12_Electronic_3;
          } else {
            s_13_St_12_Electronic_3_1_0 = s_13_St_12_Electronic_3;
          };
        } else {
          s_13_St_12_Electronic_2_0 = s_13_St_12_Electronic_2;
          if (s_13_St_12_Electronic_2_0) {
            s_13_St_12_Electronic_3_0_1 = s_13_St_12_Electronic_3;
          } else {
            s_13_St_12_Electronic_3_0_0 = s_13_St_12_Electronic_3;
          };
        };
      };
      v_1082 = v_1070;
      v_1083 = v_1071;
      v_1084 = v_1072;
      v_1090 = v_1088;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_401 = (tipo_1==7);
        if (v_401) {
          v_403 = true;
          v_402_1 = false;
          v_402_2 = false;
          v_402_3 = false;
        } else {
          v_403 = self->pnr_8;
          v_402_1 = true;
          v_402_2 = false;
          v_402_3 = true;
        };
        v_400 = (tipo_1==6);
        if (v_400) {
          v_405 = true;
          v_404_1 = false;
          v_404_2 = false;
          v_404_3 = true;
        } else {
          v_405 = v_403;
          v_404_1 = v_402_1;
          v_404_2 = v_402_2;
          v_404_3 = v_402_3;
        };
        v_399 = (tipo_1==5);
        if (v_399) {
          v_407 = true;
          v_406_1 = false;
          v_406_2 = true;
          v_406_3 = false;
        } else {
          v_407 = v_405;
          v_406_1 = v_404_1;
          v_406_2 = v_404_2;
          v_406_3 = v_404_3;
        };
        v_398 = (tipo_1==4);
        if (v_398) {
          v_409 = true;
          v_408_1 = true;
          v_408_2 = false;
          v_408_3 = false;
        } else {
          v_409 = v_407;
          v_408_1 = v_406_1;
          v_408_2 = v_406_2;
          v_408_3 = v_406_3;
        };
        v_397 = (tipo_1==2);
        if (v_397) {
          v_411 = true;
          v_410_1 = true;
          v_410_2 = true;
          v_410_3 = false;
        } else {
          v_411 = v_409;
          v_410_1 = v_408_1;
          v_410_2 = v_408_2;
          v_410_3 = v_408_3;
        };
        v_396 = (tipo_1==1);
        if (v_396) {
          v_413 = true;
          v_412_1 = true;
          v_412_2 = true;
          v_412_3 = true;
        } else {
          v_413 = v_411;
          v_412_1 = v_410_1;
          v_412_2 = v_410_2;
          v_412_3 = v_410_3;
        };
        v_395 = (tipo_1==0);
        if (v_395) {
          r_8_St_12_Funk = true;
          s_13_St_12_Funk_1 = false;
          s_13_St_12_Funk_2 = true;
          s_13_St_12_Funk_3 = true;
        } else {
          r_8_St_12_Funk = v_413;
          s_13_St_12_Funk_1 = v_412_1;
          s_13_St_12_Funk_2 = v_412_2;
          s_13_St_12_Funk_3 = v_412_3;
        };
        v_1089 = r_8_St_12_Funk;
        v_1073 = s_13_St_12_Funk_1;
        v_1074 = s_13_St_12_Funk_2;
        v_1075 = s_13_St_12_Funk_3;
      } else {
        v_382 = (tipo_1==7);
        if (v_382) {
          v_384 = true;
          v_383_1 = false;
          v_383_2 = false;
          v_383_3 = false;
        } else {
          v_384 = self->pnr_8;
          v_383_1 = true;
          v_383_2 = false;
          v_383_3 = false;
        };
        v_381 = (tipo_1==6);
        if (v_381) {
          v_386 = true;
          v_385_1 = false;
          v_385_2 = false;
          v_385_3 = true;
        } else {
          v_386 = v_384;
          v_385_1 = v_383_1;
          v_385_2 = v_383_2;
          v_385_3 = v_383_3;
        };
        v_380 = (tipo_1==5);
        if (v_380) {
          v_388 = true;
          v_387_1 = false;
          v_387_2 = true;
          v_387_3 = false;
        } else {
          v_388 = v_386;
          v_387_1 = v_385_1;
          v_387_2 = v_385_2;
          v_387_3 = v_385_3;
        };
        v_379 = (tipo_1==3);
        if (v_379) {
          v_390 = true;
          v_389_1 = true;
          v_389_2 = false;
          v_389_3 = true;
        } else {
          v_390 = v_388;
          v_389_1 = v_387_1;
          v_389_2 = v_387_2;
          v_389_3 = v_387_3;
        };
        v_378 = (tipo_1==2);
        if (v_378) {
          v_392 = true;
          v_391_1 = true;
          v_391_2 = true;
          v_391_3 = false;
        } else {
          v_392 = v_390;
          v_391_1 = v_389_1;
          v_391_2 = v_389_2;
          v_391_3 = v_389_3;
        };
        v_377 = (tipo_1==1);
        if (v_377) {
          v_394 = true;
          v_393_1 = true;
          v_393_2 = true;
          v_393_3 = true;
        } else {
          v_394 = v_392;
          v_393_1 = v_391_1;
          v_393_2 = v_391_2;
          v_393_3 = v_391_3;
        };
        v_376 = (tipo_1==0);
        if (v_376) {
          r_8_St_12_Indie = true;
        } else {
          r_8_St_12_Indie = v_394;
        };
        v_1089 = r_8_St_12_Indie;
        if (v_376) {
          s_13_St_12_Indie_1 = false;
        } else {
          s_13_St_12_Indie_1 = v_393_1;
        };
        v_1073 = s_13_St_12_Indie_1;
        if (v_376) {
          s_13_St_12_Indie_2 = true;
        } else {
          s_13_St_12_Indie_2 = v_393_2;
        };
        v_1074 = s_13_St_12_Indie_2;
        if (v_376) {
          s_13_St_12_Indie_3 = true;
        } else {
          s_13_St_12_Indie_3 = v_393_3;
        };
        v_1075 = s_13_St_12_Indie_3;
      };
      v_1082 = v_1073;
      v_1083 = v_1074;
      v_1084 = v_1075;
      v_1090 = v_1089;
      if (ck_3_1_0) {
        if (v_402_1) {
          v_402_2_1 = v_402_2;
          if (v_402_2_1) {
            v_402_3_1_1 = v_402_3;
          } else {
            v_402_3_1_0 = v_402_3;
          };
        } else {
          v_402_2_0 = v_402_2;
          if (v_402_2_0) {
            v_402_3_0_1 = v_402_3;
          } else {
            v_402_3_0_0 = v_402_3;
          };
        };
        if (v_404_1) {
          v_404_2_1 = v_404_2;
          if (v_404_2_1) {
            v_404_3_1_1 = v_404_3;
          } else {
            v_404_3_1_0 = v_404_3;
          };
        } else {
          v_404_2_0 = v_404_2;
          if (v_404_2_0) {
            v_404_3_0_1 = v_404_3;
          } else {
            v_404_3_0_0 = v_404_3;
          };
        };
        if (v_406_1) {
          v_406_2_1 = v_406_2;
          if (v_406_2_1) {
            v_406_3_1_1 = v_406_3;
          } else {
            v_406_3_1_0 = v_406_3;
          };
        } else {
          v_406_2_0 = v_406_2;
          if (v_406_2_0) {
            v_406_3_0_1 = v_406_3;
          } else {
            v_406_3_0_0 = v_406_3;
          };
        };
        if (v_408_1) {
          v_408_2_1 = v_408_2;
          if (v_408_2_1) {
            v_408_3_1_1 = v_408_3;
          } else {
            v_408_3_1_0 = v_408_3;
          };
        } else {
          v_408_2_0 = v_408_2;
          if (v_408_2_0) {
            v_408_3_0_1 = v_408_3;
          } else {
            v_408_3_0_0 = v_408_3;
          };
        };
        if (v_410_1) {
          v_410_2_1 = v_410_2;
          if (v_410_2_1) {
            v_410_3_1_1 = v_410_3;
          } else {
            v_410_3_1_0 = v_410_3;
          };
        } else {
          v_410_2_0 = v_410_2;
          if (v_410_2_0) {
            v_410_3_0_1 = v_410_3;
          } else {
            v_410_3_0_0 = v_410_3;
          };
        };
        if (v_412_1) {
          v_412_2_1 = v_412_2;
          if (v_412_2_1) {
            v_412_3_1_1 = v_412_3;
          } else {
            v_412_3_1_0 = v_412_3;
          };
        } else {
          v_412_2_0 = v_412_2;
          if (v_412_2_0) {
            v_412_3_0_1 = v_412_3;
          } else {
            v_412_3_0_0 = v_412_3;
          };
        };
        if (s_13_St_12_Funk_1) {
          s_13_St_12_Funk_2_1 = s_13_St_12_Funk_2;
          if (s_13_St_12_Funk_2_1) {
            s_13_St_12_Funk_3_1_1 = s_13_St_12_Funk_3;
          } else {
            s_13_St_12_Funk_3_1_0 = s_13_St_12_Funk_3;
          };
        } else {
          s_13_St_12_Funk_2_0 = s_13_St_12_Funk_2;
          if (s_13_St_12_Funk_2_0) {
            s_13_St_12_Funk_3_0_1 = s_13_St_12_Funk_3;
          } else {
            s_13_St_12_Funk_3_0_0 = s_13_St_12_Funk_3;
          };
        };
      } else {
        if (v_383_1) {
          v_383_2_1 = v_383_2;
          if (v_383_2_1) {
            v_383_3_1_1 = v_383_3;
          } else {
            v_383_3_1_0 = v_383_3;
          };
        } else {
          v_383_2_0 = v_383_2;
          if (v_383_2_0) {
            v_383_3_0_1 = v_383_3;
          } else {
            v_383_3_0_0 = v_383_3;
          };
        };
        if (v_385_1) {
          v_385_2_1 = v_385_2;
          if (v_385_2_1) {
            v_385_3_1_1 = v_385_3;
          } else {
            v_385_3_1_0 = v_385_3;
          };
        } else {
          v_385_2_0 = v_385_2;
          if (v_385_2_0) {
            v_385_3_0_1 = v_385_3;
          } else {
            v_385_3_0_0 = v_385_3;
          };
        };
        if (v_387_1) {
          v_387_2_1 = v_387_2;
          if (v_387_2_1) {
            v_387_3_1_1 = v_387_3;
          } else {
            v_387_3_1_0 = v_387_3;
          };
        } else {
          v_387_2_0 = v_387_2;
          if (v_387_2_0) {
            v_387_3_0_1 = v_387_3;
          } else {
            v_387_3_0_0 = v_387_3;
          };
        };
        if (v_389_1) {
          v_389_2_1 = v_389_2;
          if (v_389_2_1) {
            v_389_3_1_1 = v_389_3;
          } else {
            v_389_3_1_0 = v_389_3;
          };
        } else {
          v_389_2_0 = v_389_2;
          if (v_389_2_0) {
            v_389_3_0_1 = v_389_3;
          } else {
            v_389_3_0_0 = v_389_3;
          };
        };
        if (v_391_1) {
          v_391_2_1 = v_391_2;
          if (v_391_2_1) {
            v_391_3_1_1 = v_391_3;
          } else {
            v_391_3_1_0 = v_391_3;
          };
        } else {
          v_391_2_0 = v_391_2;
          if (v_391_2_0) {
            v_391_3_0_1 = v_391_3;
          } else {
            v_391_3_0_0 = v_391_3;
          };
        };
        if (v_393_1) {
          v_393_2_1 = v_393_2;
          if (v_393_2_1) {
            v_393_3_1_1 = v_393_3;
          } else {
            v_393_3_1_0 = v_393_3;
          };
        } else {
          v_393_2_0 = v_393_2;
          if (v_393_2_0) {
            v_393_3_0_1 = v_393_3;
          } else {
            v_393_3_0_0 = v_393_3;
          };
        };
        if (s_13_St_12_Indie_1) {
          s_13_St_12_Indie_2_1 = s_13_St_12_Indie_2;
          if (s_13_St_12_Indie_2_1) {
            s_13_St_12_Indie_3_1_1 = s_13_St_12_Indie_3;
          } else {
            s_13_St_12_Indie_3_1_0 = s_13_St_12_Indie_3;
          };
        } else {
          s_13_St_12_Indie_2_0 = s_13_St_12_Indie_2;
          if (s_13_St_12_Indie_2_0) {
            s_13_St_12_Indie_3_0_1 = s_13_St_12_Indie_3;
          } else {
            s_13_St_12_Indie_3_0_0 = s_13_St_12_Indie_3;
          };
        };
      };
    };
    s_13_1 = v_1082;
    s_13_2 = v_1083;
    s_13_3 = v_1084;
    r_8 = v_1090;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        v_458 = (tipo_1==7);
        if (v_458) {
          v_460 = true;
          v_459_1 = false;
          v_459_2 = false;
          v_459_3 = false;
        } else {
          v_460 = self->pnr_8;
          v_459_1 = false;
          v_459_2 = true;
          v_459_3 = true;
        };
        v_457 = (tipo_1==6);
        if (v_457) {
          v_462 = true;
          v_461_1 = false;
          v_461_2 = false;
          v_461_3 = true;
        } else {
          v_462 = v_460;
          v_461_1 = v_459_1;
          v_461_2 = v_459_2;
          v_461_3 = v_459_3;
        };
        v_456 = (tipo_1==5);
        if (v_456) {
          v_464 = true;
          v_463_1 = false;
          v_463_2 = true;
          v_463_3 = false;
        } else {
          v_464 = v_462;
          v_463_1 = v_461_1;
          v_463_2 = v_461_2;
          v_463_3 = v_461_3;
        };
        v_455 = (tipo_1==4);
        if (v_455) {
          v_466 = true;
          v_465_1 = true;
          v_465_2 = false;
          v_465_3 = false;
        } else {
          v_466 = v_464;
          v_465_1 = v_463_1;
          v_465_2 = v_463_2;
          v_465_3 = v_463_3;
        };
        v_454 = (tipo_1==3);
        if (v_454) {
          v_468 = true;
          v_467_1 = true;
          v_467_2 = false;
          v_467_3 = true;
        } else {
          v_468 = v_466;
          v_467_1 = v_465_1;
          v_467_2 = v_465_2;
          v_467_3 = v_465_3;
        };
        v_453 = (tipo_1==2);
        if (v_453) {
          v_470 = true;
          v_469_1 = true;
          v_469_2 = true;
          v_469_3 = false;
        } else {
          v_470 = v_468;
          v_469_1 = v_467_1;
          v_469_2 = v_467_2;
          v_469_3 = v_467_3;
        };
        v_452 = (tipo_1==1);
        if (v_452) {
          r_8_St_12_Off = true;
          s_13_St_12_Off_1 = true;
          s_13_St_12_Off_2 = true;
          s_13_St_12_Off_3 = true;
        } else {
          r_8_St_12_Off = v_470;
          s_13_St_12_Off_1 = v_469_1;
          s_13_St_12_Off_2 = v_469_2;
          s_13_St_12_Off_3 = v_469_3;
        };
        v_1091 = r_8_St_12_Off;
        v_1076 = s_13_St_12_Off_1;
        v_1077 = s_13_St_12_Off_2;
        v_1078 = s_13_St_12_Off_3;
        if (v_459_1) {
          v_459_2_1 = v_459_2;
          if (v_459_2_1) {
            v_459_3_1_1 = v_459_3;
          } else {
            v_459_3_1_0 = v_459_3;
          };
        } else {
          v_459_2_0 = v_459_2;
          if (v_459_2_0) {
            v_459_3_0_1 = v_459_3;
          } else {
            v_459_3_0_0 = v_459_3;
          };
        };
        if (v_461_1) {
          v_461_2_1 = v_461_2;
          if (v_461_2_1) {
            v_461_3_1_1 = v_461_3;
          } else {
            v_461_3_1_0 = v_461_3;
          };
        } else {
          v_461_2_0 = v_461_2;
          if (v_461_2_0) {
            v_461_3_0_1 = v_461_3;
          } else {
            v_461_3_0_0 = v_461_3;
          };
        };
        if (v_463_1) {
          v_463_2_1 = v_463_2;
          if (v_463_2_1) {
            v_463_3_1_1 = v_463_3;
          } else {
            v_463_3_1_0 = v_463_3;
          };
        } else {
          v_463_2_0 = v_463_2;
          if (v_463_2_0) {
            v_463_3_0_1 = v_463_3;
          } else {
            v_463_3_0_0 = v_463_3;
          };
        };
        if (v_465_1) {
          v_465_2_1 = v_465_2;
          if (v_465_2_1) {
            v_465_3_1_1 = v_465_3;
          } else {
            v_465_3_1_0 = v_465_3;
          };
        } else {
          v_465_2_0 = v_465_2;
          if (v_465_2_0) {
            v_465_3_0_1 = v_465_3;
          } else {
            v_465_3_0_0 = v_465_3;
          };
        };
        if (v_467_1) {
          v_467_2_1 = v_467_2;
          if (v_467_2_1) {
            v_467_3_1_1 = v_467_3;
          } else {
            v_467_3_1_0 = v_467_3;
          };
        } else {
          v_467_2_0 = v_467_2;
          if (v_467_2_0) {
            v_467_3_0_1 = v_467_3;
          } else {
            v_467_3_0_0 = v_467_3;
          };
        };
        if (v_469_1) {
          v_469_2_1 = v_469_2;
          if (v_469_2_1) {
            v_469_3_1_1 = v_469_3;
          } else {
            v_469_3_1_0 = v_469_3;
          };
        } else {
          v_469_2_0 = v_469_2;
          if (v_469_2_0) {
            v_469_3_0_1 = v_469_3;
          } else {
            v_469_3_0_0 = v_469_3;
          };
        };
        if (s_13_St_12_Off_1) {
          s_13_St_12_Off_2_1 = s_13_St_12_Off_2;
          if (s_13_St_12_Off_2_1) {
            s_13_St_12_Off_3_1_1 = s_13_St_12_Off_3;
          } else {
            s_13_St_12_Off_3_1_0 = s_13_St_12_Off_3;
          };
        } else {
          s_13_St_12_Off_2_0 = s_13_St_12_Off_2;
          if (s_13_St_12_Off_2_0) {
            s_13_St_12_Off_3_0_1 = s_13_St_12_Off_3;
          } else {
            s_13_St_12_Off_3_0_0 = s_13_St_12_Off_3;
          };
        };
      } else {
        v_363 = (tipo_1==7);
        if (v_363) {
          v_365 = true;
          v_364_1 = false;
          v_364_2 = false;
          v_364_3 = false;
        } else {
          v_365 = self->pnr_8;
          v_364_1 = false;
          v_364_2 = true;
          v_364_3 = false;
        };
        v_362 = (tipo_1==6);
        if (v_362) {
          v_367 = true;
          v_366_1 = false;
          v_366_2 = false;
          v_366_3 = true;
        } else {
          v_367 = v_365;
          v_366_1 = v_364_1;
          v_366_2 = v_364_2;
          v_366_3 = v_364_3;
        };
        v_361 = (tipo_1==4);
        if (v_361) {
          v_369 = true;
          v_368_1 = true;
          v_368_2 = false;
          v_368_3 = false;
        } else {
          v_369 = v_367;
          v_368_1 = v_366_1;
          v_368_2 = v_366_2;
          v_368_3 = v_366_3;
        };
        v_360 = (tipo_1==3);
        if (v_360) {
          v_371 = true;
          v_370_1 = true;
          v_370_2 = false;
          v_370_3 = true;
        } else {
          v_371 = v_369;
          v_370_1 = v_368_1;
          v_370_2 = v_368_2;
          v_370_3 = v_368_3;
        };
        v_359 = (tipo_1==2);
        if (v_359) {
          v_373 = true;
          v_372_1 = true;
          v_372_2 = true;
          v_372_3 = false;
        } else {
          v_373 = v_371;
          v_372_1 = v_370_1;
          v_372_2 = v_370_2;
          v_372_3 = v_370_3;
        };
        v_358 = (tipo_1==1);
        if (v_358) {
          v_375 = true;
          v_374_1 = true;
          v_374_2 = true;
          v_374_3 = true;
        } else {
          v_375 = v_373;
          v_374_1 = v_372_1;
          v_374_2 = v_372_2;
          v_374_3 = v_372_3;
        };
        v_357 = (tipo_1==0);
        if (v_357) {
          r_8_St_12_POP = true;
        } else {
          r_8_St_12_POP = v_375;
        };
        v_1091 = r_8_St_12_POP;
        if (v_357) {
          s_13_St_12_POP_1 = false;
        } else {
          s_13_St_12_POP_1 = v_374_1;
        };
        v_1076 = s_13_St_12_POP_1;
        if (v_357) {
          s_13_St_12_POP_2 = true;
        } else {
          s_13_St_12_POP_2 = v_374_2;
        };
        v_1077 = s_13_St_12_POP_2;
        if (v_357) {
          s_13_St_12_POP_3 = true;
        } else {
          s_13_St_12_POP_3 = v_374_3;
        };
        v_1078 = s_13_St_12_POP_3;
        if (v_364_1) {
          v_364_2_1 = v_364_2;
          if (v_364_2_1) {
            v_364_3_1_1 = v_364_3;
          } else {
            v_364_3_1_0 = v_364_3;
          };
        } else {
          v_364_2_0 = v_364_2;
          if (v_364_2_0) {
            v_364_3_0_1 = v_364_3;
          } else {
            v_364_3_0_0 = v_364_3;
          };
        };
        if (v_366_1) {
          v_366_2_1 = v_366_2;
          if (v_366_2_1) {
            v_366_3_1_1 = v_366_3;
          } else {
            v_366_3_1_0 = v_366_3;
          };
        } else {
          v_366_2_0 = v_366_2;
          if (v_366_2_0) {
            v_366_3_0_1 = v_366_3;
          } else {
            v_366_3_0_0 = v_366_3;
          };
        };
        if (v_368_1) {
          v_368_2_1 = v_368_2;
          if (v_368_2_1) {
            v_368_3_1_1 = v_368_3;
          } else {
            v_368_3_1_0 = v_368_3;
          };
        } else {
          v_368_2_0 = v_368_2;
          if (v_368_2_0) {
            v_368_3_0_1 = v_368_3;
          } else {
            v_368_3_0_0 = v_368_3;
          };
        };
        if (v_370_1) {
          v_370_2_1 = v_370_2;
          if (v_370_2_1) {
            v_370_3_1_1 = v_370_3;
          } else {
            v_370_3_1_0 = v_370_3;
          };
        } else {
          v_370_2_0 = v_370_2;
          if (v_370_2_0) {
            v_370_3_0_1 = v_370_3;
          } else {
            v_370_3_0_0 = v_370_3;
          };
        };
        if (v_372_1) {
          v_372_2_1 = v_372_2;
          if (v_372_2_1) {
            v_372_3_1_1 = v_372_3;
          } else {
            v_372_3_1_0 = v_372_3;
          };
        } else {
          v_372_2_0 = v_372_2;
          if (v_372_2_0) {
            v_372_3_0_1 = v_372_3;
          } else {
            v_372_3_0_0 = v_372_3;
          };
        };
        if (v_374_1) {
          v_374_2_1 = v_374_2;
          if (v_374_2_1) {
            v_374_3_1_1 = v_374_3;
          } else {
            v_374_3_1_0 = v_374_3;
          };
        } else {
          v_374_2_0 = v_374_2;
          if (v_374_2_0) {
            v_374_3_0_1 = v_374_3;
          } else {
            v_374_3_0_0 = v_374_3;
          };
        };
        if (s_13_St_12_POP_1) {
          s_13_St_12_POP_2_1 = s_13_St_12_POP_2;
          if (s_13_St_12_POP_2_1) {
            s_13_St_12_POP_3_1_1 = s_13_St_12_POP_3;
          } else {
            s_13_St_12_POP_3_1_0 = s_13_St_12_POP_3;
          };
        } else {
          s_13_St_12_POP_2_0 = s_13_St_12_POP_2;
          if (s_13_St_12_POP_2_0) {
            s_13_St_12_POP_3_0_1 = s_13_St_12_POP_3;
          } else {
            s_13_St_12_POP_3_0_0 = s_13_St_12_POP_3;
          };
        };
      };
      v_1085 = v_1076;
      v_1086 = v_1077;
      v_1087 = v_1078;
      v_1093 = v_1091;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_344 = (tipo_1==7);
        if (v_344) {
          v_346 = true;
          v_345_1 = false;
          v_345_2 = false;
          v_345_3 = false;
        } else {
          v_346 = self->pnr_8;
          v_345_1 = false;
          v_345_2 = false;
          v_345_3 = true;
        };
        v_343 = (tipo_1==5);
        if (v_343) {
          v_348 = true;
          v_347_1 = false;
          v_347_2 = true;
          v_347_3 = false;
        } else {
          v_348 = v_346;
          v_347_1 = v_345_1;
          v_347_2 = v_345_2;
          v_347_3 = v_345_3;
        };
        v_342 = (tipo_1==4);
        if (v_342) {
          v_350 = true;
          v_349_1 = true;
          v_349_2 = false;
          v_349_3 = false;
        } else {
          v_350 = v_348;
          v_349_1 = v_347_1;
          v_349_2 = v_347_2;
          v_349_3 = v_347_3;
        };
        v_341 = (tipo_1==3);
        if (v_341) {
          v_352 = true;
          v_351_1 = true;
          v_351_2 = false;
          v_351_3 = true;
        } else {
          v_352 = v_350;
          v_351_1 = v_349_1;
          v_351_2 = v_349_2;
          v_351_3 = v_349_3;
        };
        v_340 = (tipo_1==2);
        if (v_340) {
          v_354 = true;
          v_353_1 = true;
          v_353_2 = true;
          v_353_3 = false;
        } else {
          v_354 = v_352;
          v_353_1 = v_351_1;
          v_353_2 = v_351_2;
          v_353_3 = v_351_3;
        };
        v_339 = (tipo_1==1);
        if (v_339) {
          v_356 = true;
          v_355_1 = true;
          v_355_2 = true;
          v_355_3 = true;
        } else {
          v_356 = v_354;
          v_355_1 = v_353_1;
          v_355_2 = v_353_2;
          v_355_3 = v_353_3;
        };
        v_338 = (tipo_1==0);
        if (v_338) {
          r_8_St_12_Regue = true;
          s_13_St_12_Regue_1 = false;
          s_13_St_12_Regue_2 = true;
          s_13_St_12_Regue_3 = true;
        } else {
          r_8_St_12_Regue = v_356;
          s_13_St_12_Regue_1 = v_355_1;
          s_13_St_12_Regue_2 = v_355_2;
          s_13_St_12_Regue_3 = v_355_3;
        };
        v_1092 = r_8_St_12_Regue;
        v_1079 = s_13_St_12_Regue_1;
        v_1080 = s_13_St_12_Regue_2;
        v_1081 = s_13_St_12_Regue_3;
      } else {
        v_325 = (tipo_1==6);
        if (v_325) {
          v_327 = true;
          v_326_1 = false;
          v_326_2 = false;
          v_326_3 = true;
        } else {
          v_327 = self->pnr_8;
          v_326_1 = false;
          v_326_2 = false;
          v_326_3 = false;
        };
        v_324 = (tipo_1==5);
        if (v_324) {
          v_329 = true;
          v_328_1 = false;
          v_328_2 = true;
          v_328_3 = false;
        } else {
          v_329 = v_327;
          v_328_1 = v_326_1;
          v_328_2 = v_326_2;
          v_328_3 = v_326_3;
        };
        v_323 = (tipo_1==4);
        if (v_323) {
          v_331 = true;
          v_330_1 = true;
          v_330_2 = false;
          v_330_3 = false;
        } else {
          v_331 = v_329;
          v_330_1 = v_328_1;
          v_330_2 = v_328_2;
          v_330_3 = v_328_3;
        };
        v_322 = (tipo_1==3);
        if (v_322) {
          v_333 = true;
          v_332_1 = true;
          v_332_2 = false;
          v_332_3 = true;
        } else {
          v_333 = v_331;
          v_332_1 = v_330_1;
          v_332_2 = v_330_2;
          v_332_3 = v_330_3;
        };
        v_321 = (tipo_1==2);
        if (v_321) {
          v_335 = true;
          v_334_1 = true;
          v_334_2 = true;
          v_334_3 = false;
        } else {
          v_335 = v_333;
          v_334_1 = v_332_1;
          v_334_2 = v_332_2;
          v_334_3 = v_332_3;
        };
        v_320 = (tipo_1==1);
        if (v_320) {
          v_337 = true;
          v_336_1 = true;
          v_336_2 = true;
          v_336_3 = true;
        } else {
          v_337 = v_335;
          v_336_1 = v_334_1;
          v_336_2 = v_334_2;
          v_336_3 = v_334_3;
        };
        v_319 = (tipo_1==0);
        if (v_319) {
          r_8_St_12_Rock = true;
        } else {
          r_8_St_12_Rock = v_337;
        };
        v_1092 = r_8_St_12_Rock;
        if (v_319) {
          s_13_St_12_Rock_1 = false;
        } else {
          s_13_St_12_Rock_1 = v_336_1;
        };
        v_1079 = s_13_St_12_Rock_1;
        if (v_319) {
          s_13_St_12_Rock_2 = true;
        } else {
          s_13_St_12_Rock_2 = v_336_2;
        };
        v_1080 = s_13_St_12_Rock_2;
        if (v_319) {
          s_13_St_12_Rock_3 = true;
        } else {
          s_13_St_12_Rock_3 = v_336_3;
        };
        v_1081 = s_13_St_12_Rock_3;
      };
      v_1085 = v_1079;
      v_1086 = v_1080;
      v_1087 = v_1081;
      v_1093 = v_1092;
    };
    s_13_1 = v_1085;
    s_13_2 = v_1086;
    s_13_3 = v_1087;
    r_8 = v_1093;
  };
  ck_5_1 = s_13_1;
  ck_5_2 = s_13_2;
  ck_5_3 = s_13_3;
  Main_controller__main_controller_step(upa, downa, upm, downm, upg, downg,
                                        upv, downv, v_319, v_320, v_321,
                                        v_322, v_323, v_324, v_325, v_338,
                                        v_339, v_340, v_341, v_342, v_343,
                                        v_344, v_357, v_358, v_359, v_360,
                                        v_361, v_362, v_363, v_452, v_453,
                                        v_454, v_455, v_456, v_457, v_458,
                                        v_376, v_377, v_378, v_379, v_380,
                                        v_381, v_382, v_395, v_396, v_397,
                                        v_398, v_399, v_400, v_401, v_414,
                                        v_415, v_416, v_417, v_418, v_419,
                                        v_420, v_433, v_434, v_435, v_436,
                                        v_437, v_438, v_439, v_738, v_739,
                                        self->v_1069, self->v_1068,
                                        self->v_1067, self->pnr_8,
                                        self->ck_6_1, self->pnr_7,
                                        self->ck_8_1, self->pnr_6,
                                        self->ck_10_1, self->pnr_5,
                                        self->v_1016, self->v_1015,
                                        self->v_1014, self->pnr_4,
                                        self->v_968, self->v_967,
                                        self->v_966, self->pnr_3,
                                        self->v_920, self->v_919,
                                        self->v_918, self->pnr_2,
                                        self->v_872, self->v_871,
                                        self->v_870, self->pnr_1,
                                        self->ck_20_1, self->pnr, true, true,
                                        true, true, true, true, true, true,
                                        true, true, true, true, true, true,
                                        true, true, true, true, true, true,
                                        true, true, true, true, true, true,
                                        true,
                                        &Main_controller__main_controller_out_st);
  cvol = Main_controller__main_controller_out_st.main_cvol;
  vol5 = Main_controller__main_controller_out_st.main_vol5;
  vol4 = Main_controller__main_controller_out_st.main_vol4;
  vol3 = Main_controller__main_controller_out_st.main_vol3;
  vol2 = Main_controller__main_controller_out_st.main_vol2;
  vol1 = Main_controller__main_controller_out_st.main_vol1;
  cg = Main_controller__main_controller_out_st.main_cg;
  cg5 = Main_controller__main_controller_out_st.main_cg5;
  cg4 = Main_controller__main_controller_out_st.main_cg4;
  cg3 = Main_controller__main_controller_out_st.main_cg3;
  cg2 = Main_controller__main_controller_out_st.main_cg2;
  cg1 = Main_controller__main_controller_out_st.main_cg1;
  cm = Main_controller__main_controller_out_st.main_cm;
  cm5 = Main_controller__main_controller_out_st.main_cm5;
  cm4 = Main_controller__main_controller_out_st.main_cm4;
  cm3 = Main_controller__main_controller_out_st.main_cm3;
  cm2 = Main_controller__main_controller_out_st.main_cm2;
  cm1 = Main_controller__main_controller_out_st.main_cm1;
  ca = Main_controller__main_controller_out_st.main_ca;
  ca5 = Main_controller__main_controller_out_st.main_ca5;
  ca4 = Main_controller__main_controller_out_st.main_ca4;
  ca3 = Main_controller__main_controller_out_st.main_ca3;
  ca2 = Main_controller__main_controller_out_st.main_ca2;
  ca1 = Main_controller__main_controller_out_st.main_ca1;
  c3 = Main_controller__main_controller_out_st.main_c3;
  c2 = Main_controller__main_controller_out_st.main_c2;
  c1 = Main_controller__main_controller_out_st.main_c1;
  cvl_3 = vol1;
  clo_3 = vol2;
  cmi_3 = vol3;
  chi_3 = vol4;
  cvh_3 = vol5;
  c_6 = cvol;
  cvl_2 = cg1;
  clo_2 = cg2;
  cmi_2 = cg3;
  chi_2 = cg4;
  cvh_2 = cg5;
  c_5 = cg;
  cvl_1 = cm1;
  clo_1 = cm2;
  cmi_1 = cm3;
  chi_1 = cm4;
  cvh_1 = cm5;
  c_4 = cm;
  cvl = ca1;
  clo = ca2;
  cmi = ca3;
  chi = ca4;
  cvh = ca5;
  c_3 = ca;
  c_2 = c3;
  c_1 = c2;
  c = c1;
  if (ck_18_1) {
    if (ck_18_2_1) {
      if (ck_18_3_1_1) {
        v_690 = (up_3&&c_6);
        v_689 = !(cvh_3);
        v_691 = (v_689||v_690);
        if (v_691) {
          v_693 = true;
          v_692_1 = false;
          v_692_2 = false;
          v_692_3 = true;
        } else {
          v_693 = self->pnr_1;
          v_692_1 = true;
          v_692_2 = true;
          v_692_3 = true;
        };
        v_687 = (down_3&&c_6);
        v_686 = !(cmi_3);
        v_688 = (v_686||v_687);
        if (v_688) {
          v_695 = true;
          v_694_1 = true;
          v_694_2 = false;
          v_694_3 = false;
        } else {
          v_695 = v_693;
          v_694_1 = v_692_1;
          v_694_2 = v_692_2;
          v_694_3 = v_692_3;
        };
        v_685 = !(clo_3);
        if (v_685) {
          v_697 = true;
          v_696_1 = true;
          v_696_2 = true;
          v_696_3 = false;
        } else {
          v_697 = v_695;
          v_696_1 = v_694_1;
          v_696_2 = v_694_2;
          v_696_3 = v_694_3;
        };
        v_684 = !(cvl_3);
        if (v_684) {
          r_1_St_5_High = true;
        } else {
          r_1_St_5_High = v_697;
        };
        v_888 = r_1_St_5_High;
        if (v_684) {
          s_6_St_5_High_1 = false;
        } else {
          s_6_St_5_High_1 = v_696_1;
        };
        v_873 = s_6_St_5_High_1;
        if (v_684) {
          s_6_St_5_High_2 = false;
        } else {
          s_6_St_5_High_2 = v_696_2;
        };
        v_874 = s_6_St_5_High_2;
        if (v_684) {
          s_6_St_5_High_3 = false;
        } else {
          s_6_St_5_High_3 = v_696_3;
        };
        v_875 = s_6_St_5_High_3;
      } else {
        v_719 = !(cvh_3);
        if (v_719) {
          v_721 = true;
          v_720_1 = false;
          v_720_2 = false;
          v_720_3 = true;
        } else {
          v_721 = self->pnr_1;
          v_720_1 = true;
          v_720_2 = true;
          v_720_3 = false;
        };
        v_718 = !(chi_3);
        if (v_718) {
          v_723 = true;
          v_722_1 = true;
          v_722_2 = true;
          v_722_3 = true;
        } else {
          v_723 = v_721;
          v_722_1 = v_720_1;
          v_722_2 = v_720_2;
          v_722_3 = v_720_3;
        };
        v_716 = (up_3&&c_6);
        v_715 = !(cmi_3);
        v_717 = (v_715||v_716);
        if (v_717) {
          v_725 = true;
          v_724_1 = true;
          v_724_2 = false;
          v_724_3 = false;
        } else {
          v_725 = v_723;
          v_724_1 = v_722_1;
          v_724_2 = v_722_2;
          v_724_3 = v_722_3;
        };
        v_713 = (down_3&&c_6);
        v_712 = !(cvl_3);
        v_714 = (v_712||v_713);
        if (v_714) {
          r_1_St_5_Low = true;
          s_6_St_5_Low_1 = false;
          s_6_St_5_Low_2 = false;
          s_6_St_5_Low_3 = false;
        } else {
          r_1_St_5_Low = v_725;
          s_6_St_5_Low_1 = v_724_1;
          s_6_St_5_Low_2 = v_724_2;
          s_6_St_5_Low_3 = v_724_3;
        };
        v_888 = r_1_St_5_Low;
        v_873 = s_6_St_5_Low_1;
        v_874 = s_6_St_5_Low_2;
        v_875 = s_6_St_5_Low_3;
        if (v_720_1) {
          v_720_2_1 = v_720_2;
          if (v_720_2_1) {
            v_720_3_1_1 = v_720_3;
          } else {
            v_720_3_1_0 = v_720_3;
          };
        } else {
          v_720_2_0 = v_720_2;
          if (v_720_2_0) {
            v_720_3_0_1 = v_720_3;
          } else {
            v_720_3_0_0 = v_720_3;
          };
        };
        if (v_722_1) {
          v_722_2_1 = v_722_2;
          if (v_722_2_1) {
            v_722_3_1_1 = v_722_3;
          } else {
            v_722_3_1_0 = v_722_3;
          };
        } else {
          v_722_2_0 = v_722_2;
          if (v_722_2_0) {
            v_722_3_0_1 = v_722_3;
          } else {
            v_722_3_0_0 = v_722_3;
          };
        };
        if (v_724_1) {
          v_724_2_1 = v_724_2;
          if (v_724_2_1) {
            v_724_3_1_1 = v_724_3;
          } else {
            v_724_3_1_0 = v_724_3;
          };
        } else {
          v_724_2_0 = v_724_2;
          if (v_724_2_0) {
            v_724_3_0_1 = v_724_3;
          } else {
            v_724_3_0_0 = v_724_3;
          };
        };
      };
      v_882 = v_873;
      v_883 = v_874;
      v_884 = v_875;
      v_890 = v_888;
      if (ck_18_3_1_1) {
        if (v_692_1) {
          v_692_2_1 = v_692_2;
          if (v_692_2_1) {
            v_692_3_1_1 = v_692_3;
          } else {
            v_692_3_1_0 = v_692_3;
          };
        } else {
          v_692_2_0 = v_692_2;
          if (v_692_2_0) {
            v_692_3_0_1 = v_692_3;
          } else {
            v_692_3_0_0 = v_692_3;
          };
        };
        if (v_694_1) {
          v_694_2_1 = v_694_2;
          if (v_694_2_1) {
            v_694_3_1_1 = v_694_3;
          } else {
            v_694_3_1_0 = v_694_3;
          };
        } else {
          v_694_2_0 = v_694_2;
          if (v_694_2_0) {
            v_694_3_0_1 = v_694_3;
          } else {
            v_694_3_0_0 = v_694_3;
          };
        };
        if (v_696_1) {
          v_696_2_1 = v_696_2;
          if (v_696_2_1) {
            v_696_3_1_1 = v_696_3;
          } else {
            v_696_3_1_0 = v_696_3;
          };
        } else {
          v_696_2_0 = v_696_2;
          if (v_696_2_0) {
            v_696_3_0_1 = v_696_3;
          } else {
            v_696_3_0_0 = v_696_3;
          };
        };
        if (s_6_St_5_High_1) {
          s_6_St_5_High_2_1 = s_6_St_5_High_2;
          if (s_6_St_5_High_2_1) {
            s_6_St_5_High_3_1_1 = s_6_St_5_High_3;
          } else {
            s_6_St_5_High_3_1_0 = s_6_St_5_High_3;
          };
        } else {
          s_6_St_5_High_2_0 = s_6_St_5_High_2;
          if (s_6_St_5_High_2_0) {
            s_6_St_5_High_3_0_1 = s_6_St_5_High_3;
          } else {
            s_6_St_5_High_3_0_0 = s_6_St_5_High_3;
          };
        };
      } else {
        if (s_6_St_5_Low_1) {
          s_6_St_5_Low_2_1 = s_6_St_5_Low_2;
          if (s_6_St_5_Low_2_1) {
            s_6_St_5_Low_3_1_1 = s_6_St_5_Low_3;
          } else {
            s_6_St_5_Low_3_1_0 = s_6_St_5_Low_3;
          };
        } else {
          s_6_St_5_Low_2_0 = s_6_St_5_Low_2;
          if (s_6_St_5_Low_2_0) {
            s_6_St_5_Low_3_0_1 = s_6_St_5_Low_3;
          } else {
            s_6_St_5_Low_3_0_0 = s_6_St_5_Low_3;
          };
        };
      };
    } else {
      if (ck_18_3_1_0) {
        v_889 = true;
        v_876 = true;
        v_877 = true;
        v_878 = true;
      } else {
        v_705 = !(cvh_3);
        if (v_705) {
          v_707 = true;
          v_706_1 = false;
          v_706_2 = false;
          v_706_3 = true;
        } else {
          v_707 = self->pnr_1;
          v_706_1 = true;
          v_706_2 = false;
          v_706_3 = false;
        };
        v_703 = (up_3&&c_6);
        v_702 = !(chi_3);
        v_704 = (v_702||v_703);
        if (v_704) {
          v_709 = true;
          v_708_1 = true;
          v_708_2 = true;
          v_708_3 = true;
        } else {
          v_709 = v_707;
          v_708_1 = v_706_1;
          v_708_2 = v_706_2;
          v_708_3 = v_706_3;
        };
        v_700 = (down_3&&c_6);
        v_699 = !(clo_3);
        v_701 = (v_699||v_700);
        if (v_701) {
          v_711 = true;
          v_710_1 = true;
          v_710_2 = true;
          v_710_3 = false;
        } else {
          v_711 = v_709;
          v_710_1 = v_708_1;
          v_710_2 = v_708_2;
          v_710_3 = v_708_3;
        };
        v_698 = !(cvl_3);
        if (v_698) {
          r_1_St_5_Mid = true;
        } else {
          r_1_St_5_Mid = v_711;
        };
        v_889 = r_1_St_5_Mid;
        if (v_698) {
          s_6_St_5_Mid_1 = false;
        } else {
          s_6_St_5_Mid_1 = v_710_1;
        };
        v_876 = s_6_St_5_Mid_1;
        if (v_698) {
          s_6_St_5_Mid_2 = false;
        } else {
          s_6_St_5_Mid_2 = v_710_2;
        };
        v_877 = s_6_St_5_Mid_2;
        if (v_698) {
          s_6_St_5_Mid_3 = false;
        } else {
          s_6_St_5_Mid_3 = v_710_3;
        };
        v_878 = s_6_St_5_Mid_3;
        if (v_706_1) {
          v_706_2_1 = v_706_2;
          if (v_706_2_1) {
            v_706_3_1_1 = v_706_3;
          } else {
            v_706_3_1_0 = v_706_3;
          };
        } else {
          v_706_2_0 = v_706_2;
          if (v_706_2_0) {
            v_706_3_0_1 = v_706_3;
          } else {
            v_706_3_0_0 = v_706_3;
          };
        };
        if (v_708_1) {
          v_708_2_1 = v_708_2;
          if (v_708_2_1) {
            v_708_3_1_1 = v_708_3;
          } else {
            v_708_3_1_0 = v_708_3;
          };
        } else {
          v_708_2_0 = v_708_2;
          if (v_708_2_0) {
            v_708_3_0_1 = v_708_3;
          } else {
            v_708_3_0_0 = v_708_3;
          };
        };
        if (v_710_1) {
          v_710_2_1 = v_710_2;
          if (v_710_2_1) {
            v_710_3_1_1 = v_710_3;
          } else {
            v_710_3_1_0 = v_710_3;
          };
        } else {
          v_710_2_0 = v_710_2;
          if (v_710_2_0) {
            v_710_3_0_1 = v_710_3;
          } else {
            v_710_3_0_0 = v_710_3;
          };
        };
        if (s_6_St_5_Mid_1) {
          s_6_St_5_Mid_2_1 = s_6_St_5_Mid_2;
          if (s_6_St_5_Mid_2_1) {
            s_6_St_5_Mid_3_1_1 = s_6_St_5_Mid_3;
          } else {
            s_6_St_5_Mid_3_1_0 = s_6_St_5_Mid_3;
          };
        } else {
          s_6_St_5_Mid_2_0 = s_6_St_5_Mid_2;
          if (s_6_St_5_Mid_2_0) {
            s_6_St_5_Mid_3_0_1 = s_6_St_5_Mid_3;
          } else {
            s_6_St_5_Mid_3_0_0 = s_6_St_5_Mid_3;
          };
        };
      };
      v_882 = v_876;
      v_883 = v_877;
      v_884 = v_878;
      v_890 = v_889;
    };
    s_6_1 = v_882;
    s_6_2 = v_883;
    s_6_3 = v_884;
    r_1 = v_890;
  } else {
    if (ck_18_2_0) {
      v_885 = true;
      v_886 = true;
      v_887 = true;
      v_892 = true;
    } else {
      if (ck_18_3_0_0) {
        v_676 = (down_3&&c_6);
        v_675 = !(chi_3);
        v_677 = (v_675||v_676);
        if (v_677) {
          v_679 = true;
          v_678_1 = true;
          v_678_2 = true;
          v_678_3 = true;
        } else {
          v_679 = self->pnr_1;
          v_678_1 = false;
          v_678_2 = false;
          v_678_3 = true;
        };
        v_674 = !(cmi_3);
        if (v_674) {
          v_681 = true;
          v_680_1 = true;
          v_680_2 = false;
          v_680_3 = false;
        } else {
          v_681 = v_679;
          v_680_1 = v_678_1;
          v_680_2 = v_678_2;
          v_680_3 = v_678_3;
        };
        v_673 = !(clo_3);
        if (v_673) {
          v_683 = true;
          v_682_1 = true;
          v_682_2 = true;
          v_682_3 = false;
        } else {
          v_683 = v_681;
          v_682_1 = v_680_1;
          v_682_2 = v_680_2;
          v_682_3 = v_680_3;
        };
        v_672 = !(cvl_3);
        if (v_672) {
          r_1_St_5_Veryhigh = true;
        } else {
          r_1_St_5_Veryhigh = v_683;
        };
        v_891 = r_1_St_5_Veryhigh;
        if (v_672) {
          s_6_St_5_Veryhigh_1 = false;
        } else {
          s_6_St_5_Veryhigh_1 = v_682_1;
        };
        v_879 = s_6_St_5_Veryhigh_1;
        if (v_672) {
          s_6_St_5_Veryhigh_2 = false;
        } else {
          s_6_St_5_Veryhigh_2 = v_682_2;
        };
        v_880 = s_6_St_5_Veryhigh_2;
        if (v_672) {
          s_6_St_5_Veryhigh_3 = false;
        } else {
          s_6_St_5_Veryhigh_3 = v_682_3;
        };
        v_881 = s_6_St_5_Veryhigh_3;
        if (v_678_1) {
          v_678_2_1 = v_678_2;
          if (v_678_2_1) {
            v_678_3_1_1 = v_678_3;
          } else {
            v_678_3_1_0 = v_678_3;
          };
        } else {
          v_678_2_0 = v_678_2;
          if (v_678_2_0) {
            v_678_3_0_1 = v_678_3;
          } else {
            v_678_3_0_0 = v_678_3;
          };
        };
        if (v_680_1) {
          v_680_2_1 = v_680_2;
          if (v_680_2_1) {
            v_680_3_1_1 = v_680_3;
          } else {
            v_680_3_1_0 = v_680_3;
          };
        } else {
          v_680_2_0 = v_680_2;
          if (v_680_2_0) {
            v_680_3_0_1 = v_680_3;
          } else {
            v_680_3_0_0 = v_680_3;
          };
        };
        if (v_682_1) {
          v_682_2_1 = v_682_2;
          if (v_682_2_1) {
            v_682_3_1_1 = v_682_3;
          } else {
            v_682_3_1_0 = v_682_3;
          };
        } else {
          v_682_2_0 = v_682_2;
          if (v_682_2_0) {
            v_682_3_0_1 = v_682_3;
          } else {
            v_682_3_0_0 = v_682_3;
          };
        };
      } else {
        v_731 = !(cvh_3);
        if (v_731) {
          v_733 = true;
          v_732_1 = false;
          v_732_2 = false;
          v_732_3 = true;
        } else {
          v_733 = self->pnr_1;
          v_732_1 = false;
          v_732_2 = false;
          v_732_3 = false;
        };
        v_730 = !(chi_3);
        if (v_730) {
          v_735 = true;
          v_734_1 = true;
          v_734_2 = true;
          v_734_3 = true;
        } else {
          v_735 = v_733;
          v_734_1 = v_732_1;
          v_734_2 = v_732_2;
          v_734_3 = v_732_3;
        };
        v_729 = !(cmi_3);
        if (v_729) {
          v_737 = true;
          v_736_1 = true;
          v_736_2 = false;
          v_736_3 = false;
        } else {
          v_737 = v_735;
          v_736_1 = v_734_1;
          v_736_2 = v_734_2;
          v_736_3 = v_734_3;
        };
        v_727 = (up_3&&c_6);
        v_726 = !(clo_3);
        v_728 = (v_726||v_727);
        if (v_728) {
          r_1_St_5_Verylow = true;
          s_6_St_5_Verylow_1 = true;
          s_6_St_5_Verylow_2 = true;
          s_6_St_5_Verylow_3 = false;
        } else {
          r_1_St_5_Verylow = v_737;
          s_6_St_5_Verylow_1 = v_736_1;
          s_6_St_5_Verylow_2 = v_736_2;
          s_6_St_5_Verylow_3 = v_736_3;
        };
        v_891 = r_1_St_5_Verylow;
        v_879 = s_6_St_5_Verylow_1;
        v_880 = s_6_St_5_Verylow_2;
        v_881 = s_6_St_5_Verylow_3;
        if (v_732_1) {
          v_732_2_1 = v_732_2;
          if (v_732_2_1) {
            v_732_3_1_1 = v_732_3;
          } else {
            v_732_3_1_0 = v_732_3;
          };
        } else {
          v_732_2_0 = v_732_2;
          if (v_732_2_0) {
            v_732_3_0_1 = v_732_3;
          } else {
            v_732_3_0_0 = v_732_3;
          };
        };
        if (v_734_1) {
          v_734_2_1 = v_734_2;
          if (v_734_2_1) {
            v_734_3_1_1 = v_734_3;
          } else {
            v_734_3_1_0 = v_734_3;
          };
        } else {
          v_734_2_0 = v_734_2;
          if (v_734_2_0) {
            v_734_3_0_1 = v_734_3;
          } else {
            v_734_3_0_0 = v_734_3;
          };
        };
        if (v_736_1) {
          v_736_2_1 = v_736_2;
          if (v_736_2_1) {
            v_736_3_1_1 = v_736_3;
          } else {
            v_736_3_1_0 = v_736_3;
          };
        } else {
          v_736_2_0 = v_736_2;
          if (v_736_2_0) {
            v_736_3_0_1 = v_736_3;
          } else {
            v_736_3_0_0 = v_736_3;
          };
        };
      };
      v_885 = v_879;
      v_886 = v_880;
      v_887 = v_881;
      v_892 = v_891;
    };
    s_6_1 = v_885;
    s_6_2 = v_886;
    s_6_3 = v_887;
    r_1 = v_892;
  };
  ck_19_1 = s_6_1;
  ck_19_2 = s_6_2;
  ck_19_3 = s_6_3;
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      ck_19_3_1_1 = ck_19_3;
      if (ck_19_3_1_1) {
        s_3_St_5_High = 4;
        v_845 = s_3_St_5_High;
        nr_1_St_5_High = false;
        v_865 = nr_1_St_5_High;
        ns_1_St_5_High_1 = true;
        v_850 = ns_1_St_5_High_1;
        ns_1_St_5_High_2 = true;
        v_851 = ns_1_St_5_High_2;
        ns_1_St_5_High_3 = true;
        v_852 = ns_1_St_5_High_3;
      } else {
        s_3_St_5_Low = 2;
        nr_1_St_5_Low = false;
        ns_1_St_5_Low_1 = true;
        ns_1_St_5_Low_2 = true;
        ns_1_St_5_Low_3 = false;
        v_845 = s_3_St_5_Low;
        v_865 = nr_1_St_5_Low;
        v_850 = ns_1_St_5_Low_1;
        v_851 = ns_1_St_5_Low_2;
        v_852 = ns_1_St_5_Low_3;
      };
      v_847 = v_845;
      v_859 = v_850;
      v_860 = v_851;
      v_861 = v_852;
      v_867 = v_865;
      if (ck_19_3_1_1) {
        if (ns_1_St_5_High_1) {
          ns_1_St_5_High_2_1 = ns_1_St_5_High_2;
          if (ns_1_St_5_High_2_1) {
            ns_1_St_5_High_3_1_1 = ns_1_St_5_High_3;
          } else {
            ns_1_St_5_High_3_1_0 = ns_1_St_5_High_3;
          };
        } else {
          ns_1_St_5_High_2_0 = ns_1_St_5_High_2;
          if (ns_1_St_5_High_2_0) {
            ns_1_St_5_High_3_0_1 = ns_1_St_5_High_3;
          } else {
            ns_1_St_5_High_3_0_0 = ns_1_St_5_High_3;
          };
        };
      } else {
        if (ns_1_St_5_Low_1) {
          ns_1_St_5_Low_2_1 = ns_1_St_5_Low_2;
          if (ns_1_St_5_Low_2_1) {
            ns_1_St_5_Low_3_1_1 = ns_1_St_5_Low_3;
          } else {
            ns_1_St_5_Low_3_1_0 = ns_1_St_5_Low_3;
          };
        } else {
          ns_1_St_5_Low_2_0 = ns_1_St_5_Low_2;
          if (ns_1_St_5_Low_2_0) {
            ns_1_St_5_Low_3_0_1 = ns_1_St_5_Low_3;
          } else {
            ns_1_St_5_Low_3_0_0 = ns_1_St_5_Low_3;
          };
        };
      };
    } else {
      ck_19_3_1_0 = ck_19_3;
      if (ck_19_3_1_0) {
        v_846 = 0;
        v_866 = true;
        v_853 = true;
        v_854 = true;
        v_855 = true;
      } else {
        s_3_St_5_Mid = 3;
        v_846 = s_3_St_5_Mid;
        nr_1_St_5_Mid = false;
        v_866 = nr_1_St_5_Mid;
        ns_1_St_5_Mid_1 = true;
        v_853 = ns_1_St_5_Mid_1;
        ns_1_St_5_Mid_2 = false;
        v_854 = ns_1_St_5_Mid_2;
        ns_1_St_5_Mid_3 = false;
        v_855 = ns_1_St_5_Mid_3;
        if (ns_1_St_5_Mid_1) {
          ns_1_St_5_Mid_2_1 = ns_1_St_5_Mid_2;
          if (ns_1_St_5_Mid_2_1) {
            ns_1_St_5_Mid_3_1_1 = ns_1_St_5_Mid_3;
          } else {
            ns_1_St_5_Mid_3_1_0 = ns_1_St_5_Mid_3;
          };
        } else {
          ns_1_St_5_Mid_2_0 = ns_1_St_5_Mid_2;
          if (ns_1_St_5_Mid_2_0) {
            ns_1_St_5_Mid_3_0_1 = ns_1_St_5_Mid_3;
          } else {
            ns_1_St_5_Mid_3_0_0 = ns_1_St_5_Mid_3;
          };
        };
      };
      v_847 = v_846;
      v_859 = v_853;
      v_860 = v_854;
      v_861 = v_855;
      v_867 = v_866;
    };
    s_3 = v_847;
    ns_1_1 = v_859;
    ns_1_2 = v_860;
    ns_1_3 = v_861;
    nr_1 = v_867;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      ck_19_3_0_1 = ck_19_3;
      v_849 = 0;
      v_862 = true;
      v_863 = true;
      v_864 = true;
      v_869 = true;
    } else {
      ck_19_3_0_0 = ck_19_3;
      if (ck_19_3_0_0) {
        s_3_St_5_Veryhigh = 5;
        v_848 = s_3_St_5_Veryhigh;
        nr_1_St_5_Veryhigh = false;
        v_868 = nr_1_St_5_Veryhigh;
        ns_1_St_5_Veryhigh_1 = false;
        v_856 = ns_1_St_5_Veryhigh_1;
        ns_1_St_5_Veryhigh_2 = false;
        v_857 = ns_1_St_5_Veryhigh_2;
        ns_1_St_5_Veryhigh_3 = true;
        v_858 = ns_1_St_5_Veryhigh_3;
      } else {
        s_3_St_5_Verylow = 1;
        nr_1_St_5_Verylow = false;
        ns_1_St_5_Verylow_1 = false;
        ns_1_St_5_Verylow_2 = false;
        ns_1_St_5_Verylow_3 = false;
        v_848 = s_3_St_5_Verylow;
        v_868 = nr_1_St_5_Verylow;
        v_856 = ns_1_St_5_Verylow_1;
        v_857 = ns_1_St_5_Verylow_2;
        v_858 = ns_1_St_5_Verylow_3;
      };
      v_849 = v_848;
      v_862 = v_856;
      v_863 = v_857;
      v_864 = v_858;
      v_869 = v_868;
    };
    s_3 = v_849;
    ns_1_1 = v_862;
    ns_1_2 = v_863;
    ns_1_3 = v_864;
    nr_1 = v_869;
  };
  _out->volume = s_3;
  v_218 = (_out->volume<=2);
  ruleVol = (v||v_218);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
    if (ns_1_2_1) {
      ns_1_3_1_1 = ns_1_3;
    } else {
      ns_1_3_1_0 = ns_1_3;
    };
  } else {
    ns_1_2_0 = ns_1_2;
    if (ns_1_2_0) {
      ns_1_3_0_1 = ns_1_3;
    } else {
      ns_1_3_0_0 = ns_1_3;
    };
  };
  if (!(ck_19_1)) {
    if (!(ck_19_2_0)) {
      if (ck_19_3_0_0) {
        if (ns_1_St_5_Veryhigh_1) {
          ns_1_St_5_Veryhigh_2_1 = ns_1_St_5_Veryhigh_2;
          if (ns_1_St_5_Veryhigh_2_1) {
            ns_1_St_5_Veryhigh_3_1_1 = ns_1_St_5_Veryhigh_3;
          } else {
            ns_1_St_5_Veryhigh_3_1_0 = ns_1_St_5_Veryhigh_3;
          };
        } else {
          ns_1_St_5_Veryhigh_2_0 = ns_1_St_5_Veryhigh_2;
          if (ns_1_St_5_Veryhigh_2_0) {
            ns_1_St_5_Veryhigh_3_0_1 = ns_1_St_5_Veryhigh_3;
          } else {
            ns_1_St_5_Veryhigh_3_0_0 = ns_1_St_5_Veryhigh_3;
          };
        };
      } else {
        if (ns_1_St_5_Verylow_1) {
          ns_1_St_5_Verylow_2_1 = ns_1_St_5_Verylow_2;
          if (ns_1_St_5_Verylow_2_1) {
            ns_1_St_5_Verylow_3_1_1 = ns_1_St_5_Verylow_3;
          } else {
            ns_1_St_5_Verylow_3_1_0 = ns_1_St_5_Verylow_3;
          };
        } else {
          ns_1_St_5_Verylow_2_0 = ns_1_St_5_Verylow_2;
          if (ns_1_St_5_Verylow_2_0) {
            ns_1_St_5_Verylow_3_0_1 = ns_1_St_5_Verylow_3;
          } else {
            ns_1_St_5_Verylow_3_0_0 = ns_1_St_5_Verylow_3;
          };
        };
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
    if (s_6_2_1) {
      s_6_3_1_1 = s_6_3;
    } else {
      s_6_3_1_0 = s_6_3;
    };
  } else {
    s_6_2_0 = s_6_2;
    if (s_6_2_0) {
      s_6_3_0_1 = s_6_3;
    } else {
      s_6_3_0_0 = s_6_3;
    };
  };
  if (!(ck_18_1)) {
    if (!(ck_18_2_0)) {
      if (ck_18_3_0_0) {
        if (s_6_St_5_Veryhigh_1) {
          s_6_St_5_Veryhigh_2_1 = s_6_St_5_Veryhigh_2;
          if (s_6_St_5_Veryhigh_2_1) {
            s_6_St_5_Veryhigh_3_1_1 = s_6_St_5_Veryhigh_3;
          } else {
            s_6_St_5_Veryhigh_3_1_0 = s_6_St_5_Veryhigh_3;
          };
        } else {
          s_6_St_5_Veryhigh_2_0 = s_6_St_5_Veryhigh_2;
          if (s_6_St_5_Veryhigh_2_0) {
            s_6_St_5_Veryhigh_3_0_1 = s_6_St_5_Veryhigh_3;
          } else {
            s_6_St_5_Veryhigh_3_0_0 = s_6_St_5_Veryhigh_3;
          };
        };
      } else {
        if (s_6_St_5_Verylow_1) {
          s_6_St_5_Verylow_2_1 = s_6_St_5_Verylow_2;
          if (s_6_St_5_Verylow_2_1) {
            s_6_St_5_Verylow_3_1_1 = s_6_St_5_Verylow_3;
          } else {
            s_6_St_5_Verylow_3_1_0 = s_6_St_5_Verylow_3;
          };
        } else {
          s_6_St_5_Verylow_2_0 = s_6_St_5_Verylow_2;
          if (s_6_St_5_Verylow_2_0) {
            s_6_St_5_Verylow_3_0_1 = s_6_St_5_Verylow_3;
          } else {
            s_6_St_5_Verylow_3_0_0 = s_6_St_5_Verylow_3;
          };
        };
      };
    };
  };
  if (ck_16_1) {
    if (ck_16_2_1) {
      if (ck_16_3_1_1) {
        v_624 = (up_2&&c_5);
        v_623 = !(cvh_2);
        v_625 = (v_623||v_624);
        if (v_625) {
          v_627 = true;
          v_626_1 = false;
          v_626_2 = false;
          v_626_3 = true;
        } else {
          v_627 = self->pnr_2;
          v_626_1 = true;
          v_626_2 = true;
          v_626_3 = true;
        };
        v_621 = (down_2&&c_5);
        v_620 = !(cmi_2);
        v_622 = (v_620||v_621);
        if (v_622) {
          v_629 = true;
          v_628_1 = true;
          v_628_2 = false;
          v_628_3 = false;
        } else {
          v_629 = v_627;
          v_628_1 = v_626_1;
          v_628_2 = v_626_2;
          v_628_3 = v_626_3;
        };
        v_619 = !(clo_2);
        if (v_619) {
          v_631 = true;
          v_630_1 = true;
          v_630_2 = true;
          v_630_3 = false;
        } else {
          v_631 = v_629;
          v_630_1 = v_628_1;
          v_630_2 = v_628_2;
          v_630_3 = v_628_3;
        };
        v_618 = !(cvl_2);
        if (v_618) {
          r_2_St_6_High = true;
        } else {
          r_2_St_6_High = v_631;
        };
        v_936 = r_2_St_6_High;
        if (v_618) {
          s_7_St_6_High_1 = false;
        } else {
          s_7_St_6_High_1 = v_630_1;
        };
        v_921 = s_7_St_6_High_1;
        if (v_618) {
          s_7_St_6_High_2 = false;
        } else {
          s_7_St_6_High_2 = v_630_2;
        };
        v_922 = s_7_St_6_High_2;
        if (v_618) {
          s_7_St_6_High_3 = false;
        } else {
          s_7_St_6_High_3 = v_630_3;
        };
        v_923 = s_7_St_6_High_3;
      } else {
        v_653 = !(cvh_2);
        if (v_653) {
          v_655 = true;
          v_654_1 = false;
          v_654_2 = false;
          v_654_3 = true;
        } else {
          v_655 = self->pnr_2;
          v_654_1 = true;
          v_654_2 = true;
          v_654_3 = false;
        };
        v_652 = !(chi_2);
        if (v_652) {
          v_657 = true;
          v_656_1 = true;
          v_656_2 = true;
          v_656_3 = true;
        } else {
          v_657 = v_655;
          v_656_1 = v_654_1;
          v_656_2 = v_654_2;
          v_656_3 = v_654_3;
        };
        v_650 = (up_2&&c_5);
        v_649 = !(cmi_2);
        v_651 = (v_649||v_650);
        if (v_651) {
          v_659 = true;
          v_658_1 = true;
          v_658_2 = false;
          v_658_3 = false;
        } else {
          v_659 = v_657;
          v_658_1 = v_656_1;
          v_658_2 = v_656_2;
          v_658_3 = v_656_3;
        };
        v_647 = (down_2&&c_5);
        v_646 = !(cvl_2);
        v_648 = (v_646||v_647);
        if (v_648) {
          r_2_St_6_Low = true;
          s_7_St_6_Low_1 = false;
          s_7_St_6_Low_2 = false;
          s_7_St_6_Low_3 = false;
        } else {
          r_2_St_6_Low = v_659;
          s_7_St_6_Low_1 = v_658_1;
          s_7_St_6_Low_2 = v_658_2;
          s_7_St_6_Low_3 = v_658_3;
        };
        v_936 = r_2_St_6_Low;
        v_921 = s_7_St_6_Low_1;
        v_922 = s_7_St_6_Low_2;
        v_923 = s_7_St_6_Low_3;
        if (v_654_1) {
          v_654_2_1 = v_654_2;
          if (v_654_2_1) {
            v_654_3_1_1 = v_654_3;
          } else {
            v_654_3_1_0 = v_654_3;
          };
        } else {
          v_654_2_0 = v_654_2;
          if (v_654_2_0) {
            v_654_3_0_1 = v_654_3;
          } else {
            v_654_3_0_0 = v_654_3;
          };
        };
        if (v_656_1) {
          v_656_2_1 = v_656_2;
          if (v_656_2_1) {
            v_656_3_1_1 = v_656_3;
          } else {
            v_656_3_1_0 = v_656_3;
          };
        } else {
          v_656_2_0 = v_656_2;
          if (v_656_2_0) {
            v_656_3_0_1 = v_656_3;
          } else {
            v_656_3_0_0 = v_656_3;
          };
        };
        if (v_658_1) {
          v_658_2_1 = v_658_2;
          if (v_658_2_1) {
            v_658_3_1_1 = v_658_3;
          } else {
            v_658_3_1_0 = v_658_3;
          };
        } else {
          v_658_2_0 = v_658_2;
          if (v_658_2_0) {
            v_658_3_0_1 = v_658_3;
          } else {
            v_658_3_0_0 = v_658_3;
          };
        };
      };
      v_930 = v_921;
      v_931 = v_922;
      v_932 = v_923;
      v_938 = v_936;
      if (ck_16_3_1_1) {
        if (v_626_1) {
          v_626_2_1 = v_626_2;
          if (v_626_2_1) {
            v_626_3_1_1 = v_626_3;
          } else {
            v_626_3_1_0 = v_626_3;
          };
        } else {
          v_626_2_0 = v_626_2;
          if (v_626_2_0) {
            v_626_3_0_1 = v_626_3;
          } else {
            v_626_3_0_0 = v_626_3;
          };
        };
        if (v_628_1) {
          v_628_2_1 = v_628_2;
          if (v_628_2_1) {
            v_628_3_1_1 = v_628_3;
          } else {
            v_628_3_1_0 = v_628_3;
          };
        } else {
          v_628_2_0 = v_628_2;
          if (v_628_2_0) {
            v_628_3_0_1 = v_628_3;
          } else {
            v_628_3_0_0 = v_628_3;
          };
        };
        if (v_630_1) {
          v_630_2_1 = v_630_2;
          if (v_630_2_1) {
            v_630_3_1_1 = v_630_3;
          } else {
            v_630_3_1_0 = v_630_3;
          };
        } else {
          v_630_2_0 = v_630_2;
          if (v_630_2_0) {
            v_630_3_0_1 = v_630_3;
          } else {
            v_630_3_0_0 = v_630_3;
          };
        };
        if (s_7_St_6_High_1) {
          s_7_St_6_High_2_1 = s_7_St_6_High_2;
          if (s_7_St_6_High_2_1) {
            s_7_St_6_High_3_1_1 = s_7_St_6_High_3;
          } else {
            s_7_St_6_High_3_1_0 = s_7_St_6_High_3;
          };
        } else {
          s_7_St_6_High_2_0 = s_7_St_6_High_2;
          if (s_7_St_6_High_2_0) {
            s_7_St_6_High_3_0_1 = s_7_St_6_High_3;
          } else {
            s_7_St_6_High_3_0_0 = s_7_St_6_High_3;
          };
        };
      } else {
        if (s_7_St_6_Low_1) {
          s_7_St_6_Low_2_1 = s_7_St_6_Low_2;
          if (s_7_St_6_Low_2_1) {
            s_7_St_6_Low_3_1_1 = s_7_St_6_Low_3;
          } else {
            s_7_St_6_Low_3_1_0 = s_7_St_6_Low_3;
          };
        } else {
          s_7_St_6_Low_2_0 = s_7_St_6_Low_2;
          if (s_7_St_6_Low_2_0) {
            s_7_St_6_Low_3_0_1 = s_7_St_6_Low_3;
          } else {
            s_7_St_6_Low_3_0_0 = s_7_St_6_Low_3;
          };
        };
      };
    } else {
      if (ck_16_3_1_0) {
        v_937 = true;
        v_924 = true;
        v_925 = true;
        v_926 = true;
      } else {
        v_639 = !(cvh_2);
        if (v_639) {
          v_641 = true;
          v_640_1 = false;
          v_640_2 = false;
          v_640_3 = true;
        } else {
          v_641 = self->pnr_2;
          v_640_1 = true;
          v_640_2 = false;
          v_640_3 = false;
        };
        v_637 = (up_2&&c_5);
        v_636 = !(chi_2);
        v_638 = (v_636||v_637);
        if (v_638) {
          v_643 = true;
          v_642_1 = true;
          v_642_2 = true;
          v_642_3 = true;
        } else {
          v_643 = v_641;
          v_642_1 = v_640_1;
          v_642_2 = v_640_2;
          v_642_3 = v_640_3;
        };
        v_634 = (down_2&&c_5);
        v_633 = !(clo_2);
        v_635 = (v_633||v_634);
        if (v_635) {
          v_645 = true;
          v_644_1 = true;
          v_644_2 = true;
          v_644_3 = false;
        } else {
          v_645 = v_643;
          v_644_1 = v_642_1;
          v_644_2 = v_642_2;
          v_644_3 = v_642_3;
        };
        v_632 = !(cvl_2);
        if (v_632) {
          r_2_St_6_Mid = true;
        } else {
          r_2_St_6_Mid = v_645;
        };
        v_937 = r_2_St_6_Mid;
        if (v_632) {
          s_7_St_6_Mid_1 = false;
        } else {
          s_7_St_6_Mid_1 = v_644_1;
        };
        v_924 = s_7_St_6_Mid_1;
        if (v_632) {
          s_7_St_6_Mid_2 = false;
        } else {
          s_7_St_6_Mid_2 = v_644_2;
        };
        v_925 = s_7_St_6_Mid_2;
        if (v_632) {
          s_7_St_6_Mid_3 = false;
        } else {
          s_7_St_6_Mid_3 = v_644_3;
        };
        v_926 = s_7_St_6_Mid_3;
        if (v_640_1) {
          v_640_2_1 = v_640_2;
          if (v_640_2_1) {
            v_640_3_1_1 = v_640_3;
          } else {
            v_640_3_1_0 = v_640_3;
          };
        } else {
          v_640_2_0 = v_640_2;
          if (v_640_2_0) {
            v_640_3_0_1 = v_640_3;
          } else {
            v_640_3_0_0 = v_640_3;
          };
        };
        if (v_642_1) {
          v_642_2_1 = v_642_2;
          if (v_642_2_1) {
            v_642_3_1_1 = v_642_3;
          } else {
            v_642_3_1_0 = v_642_3;
          };
        } else {
          v_642_2_0 = v_642_2;
          if (v_642_2_0) {
            v_642_3_0_1 = v_642_3;
          } else {
            v_642_3_0_0 = v_642_3;
          };
        };
        if (v_644_1) {
          v_644_2_1 = v_644_2;
          if (v_644_2_1) {
            v_644_3_1_1 = v_644_3;
          } else {
            v_644_3_1_0 = v_644_3;
          };
        } else {
          v_644_2_0 = v_644_2;
          if (v_644_2_0) {
            v_644_3_0_1 = v_644_3;
          } else {
            v_644_3_0_0 = v_644_3;
          };
        };
        if (s_7_St_6_Mid_1) {
          s_7_St_6_Mid_2_1 = s_7_St_6_Mid_2;
          if (s_7_St_6_Mid_2_1) {
            s_7_St_6_Mid_3_1_1 = s_7_St_6_Mid_3;
          } else {
            s_7_St_6_Mid_3_1_0 = s_7_St_6_Mid_3;
          };
        } else {
          s_7_St_6_Mid_2_0 = s_7_St_6_Mid_2;
          if (s_7_St_6_Mid_2_0) {
            s_7_St_6_Mid_3_0_1 = s_7_St_6_Mid_3;
          } else {
            s_7_St_6_Mid_3_0_0 = s_7_St_6_Mid_3;
          };
        };
      };
      v_930 = v_924;
      v_931 = v_925;
      v_932 = v_926;
      v_938 = v_937;
    };
    s_7_1 = v_930;
    s_7_2 = v_931;
    s_7_3 = v_932;
    r_2 = v_938;
  } else {
    if (ck_16_2_0) {
      v_933 = true;
      v_934 = true;
      v_935 = true;
      v_940 = true;
    } else {
      if (ck_16_3_0_0) {
        v_610 = (down_2&&c_5);
        v_609 = !(chi_2);
        v_611 = (v_609||v_610);
        if (v_611) {
          v_613 = true;
          v_612_1 = true;
          v_612_2 = true;
          v_612_3 = true;
        } else {
          v_613 = self->pnr_2;
          v_612_1 = false;
          v_612_2 = false;
          v_612_3 = true;
        };
        v_608 = !(cmi_2);
        if (v_608) {
          v_615 = true;
          v_614_1 = true;
          v_614_2 = false;
          v_614_3 = false;
        } else {
          v_615 = v_613;
          v_614_1 = v_612_1;
          v_614_2 = v_612_2;
          v_614_3 = v_612_3;
        };
        v_607 = !(clo_2);
        if (v_607) {
          v_617 = true;
          v_616_1 = true;
          v_616_2 = true;
          v_616_3 = false;
        } else {
          v_617 = v_615;
          v_616_1 = v_614_1;
          v_616_2 = v_614_2;
          v_616_3 = v_614_3;
        };
        v_606 = !(cvl_2);
        if (v_606) {
          r_2_St_6_Veryhigh = true;
        } else {
          r_2_St_6_Veryhigh = v_617;
        };
        v_939 = r_2_St_6_Veryhigh;
        if (v_606) {
          s_7_St_6_Veryhigh_1 = false;
        } else {
          s_7_St_6_Veryhigh_1 = v_616_1;
        };
        v_927 = s_7_St_6_Veryhigh_1;
        if (v_606) {
          s_7_St_6_Veryhigh_2 = false;
        } else {
          s_7_St_6_Veryhigh_2 = v_616_2;
        };
        v_928 = s_7_St_6_Veryhigh_2;
        if (v_606) {
          s_7_St_6_Veryhigh_3 = false;
        } else {
          s_7_St_6_Veryhigh_3 = v_616_3;
        };
        v_929 = s_7_St_6_Veryhigh_3;
        if (v_612_1) {
          v_612_2_1 = v_612_2;
          if (v_612_2_1) {
            v_612_3_1_1 = v_612_3;
          } else {
            v_612_3_1_0 = v_612_3;
          };
        } else {
          v_612_2_0 = v_612_2;
          if (v_612_2_0) {
            v_612_3_0_1 = v_612_3;
          } else {
            v_612_3_0_0 = v_612_3;
          };
        };
        if (v_614_1) {
          v_614_2_1 = v_614_2;
          if (v_614_2_1) {
            v_614_3_1_1 = v_614_3;
          } else {
            v_614_3_1_0 = v_614_3;
          };
        } else {
          v_614_2_0 = v_614_2;
          if (v_614_2_0) {
            v_614_3_0_1 = v_614_3;
          } else {
            v_614_3_0_0 = v_614_3;
          };
        };
        if (v_616_1) {
          v_616_2_1 = v_616_2;
          if (v_616_2_1) {
            v_616_3_1_1 = v_616_3;
          } else {
            v_616_3_1_0 = v_616_3;
          };
        } else {
          v_616_2_0 = v_616_2;
          if (v_616_2_0) {
            v_616_3_0_1 = v_616_3;
          } else {
            v_616_3_0_0 = v_616_3;
          };
        };
      } else {
        v_665 = !(cvh_2);
        if (v_665) {
          v_667 = true;
          v_666_1 = false;
          v_666_2 = false;
          v_666_3 = true;
        } else {
          v_667 = self->pnr_2;
          v_666_1 = false;
          v_666_2 = false;
          v_666_3 = false;
        };
        v_664 = !(chi_2);
        if (v_664) {
          v_669 = true;
          v_668_1 = true;
          v_668_2 = true;
          v_668_3 = true;
        } else {
          v_669 = v_667;
          v_668_1 = v_666_1;
          v_668_2 = v_666_2;
          v_668_3 = v_666_3;
        };
        v_663 = !(cmi_2);
        if (v_663) {
          v_671 = true;
          v_670_1 = true;
          v_670_2 = false;
          v_670_3 = false;
        } else {
          v_671 = v_669;
          v_670_1 = v_668_1;
          v_670_2 = v_668_2;
          v_670_3 = v_668_3;
        };
        v_661 = (up_2&&c_5);
        v_660 = !(clo_2);
        v_662 = (v_660||v_661);
        if (v_662) {
          r_2_St_6_Verylow = true;
          s_7_St_6_Verylow_1 = true;
          s_7_St_6_Verylow_2 = true;
          s_7_St_6_Verylow_3 = false;
        } else {
          r_2_St_6_Verylow = v_671;
          s_7_St_6_Verylow_1 = v_670_1;
          s_7_St_6_Verylow_2 = v_670_2;
          s_7_St_6_Verylow_3 = v_670_3;
        };
        v_939 = r_2_St_6_Verylow;
        v_927 = s_7_St_6_Verylow_1;
        v_928 = s_7_St_6_Verylow_2;
        v_929 = s_7_St_6_Verylow_3;
        if (v_666_1) {
          v_666_2_1 = v_666_2;
          if (v_666_2_1) {
            v_666_3_1_1 = v_666_3;
          } else {
            v_666_3_1_0 = v_666_3;
          };
        } else {
          v_666_2_0 = v_666_2;
          if (v_666_2_0) {
            v_666_3_0_1 = v_666_3;
          } else {
            v_666_3_0_0 = v_666_3;
          };
        };
        if (v_668_1) {
          v_668_2_1 = v_668_2;
          if (v_668_2_1) {
            v_668_3_1_1 = v_668_3;
          } else {
            v_668_3_1_0 = v_668_3;
          };
        } else {
          v_668_2_0 = v_668_2;
          if (v_668_2_0) {
            v_668_3_0_1 = v_668_3;
          } else {
            v_668_3_0_0 = v_668_3;
          };
        };
        if (v_670_1) {
          v_670_2_1 = v_670_2;
          if (v_670_2_1) {
            v_670_3_1_1 = v_670_3;
          } else {
            v_670_3_1_0 = v_670_3;
          };
        } else {
          v_670_2_0 = v_670_2;
          if (v_670_2_0) {
            v_670_3_0_1 = v_670_3;
          } else {
            v_670_3_0_0 = v_670_3;
          };
        };
      };
      v_933 = v_927;
      v_934 = v_928;
      v_935 = v_929;
      v_940 = v_939;
    };
    s_7_1 = v_933;
    s_7_2 = v_934;
    s_7_3 = v_935;
    r_2 = v_940;
  };
  ck_17_1 = s_7_1;
  ck_17_2 = s_7_2;
  ck_17_3 = s_7_3;
  if (ck_17_1) {
    ck_17_2_1 = ck_17_2;
    if (ck_17_2_1) {
      ck_17_3_1_1 = ck_17_3;
      if (ck_17_3_1_1) {
        s_2_St_6_High = 4;
        v_893 = s_2_St_6_High;
        nr_2_St_6_High = false;
        v_913 = nr_2_St_6_High;
        ns_2_St_6_High_1 = true;
        v_898 = ns_2_St_6_High_1;
        ns_2_St_6_High_2 = true;
        v_899 = ns_2_St_6_High_2;
        ns_2_St_6_High_3 = true;
        v_900 = ns_2_St_6_High_3;
      } else {
        s_2_St_6_Low = 2;
        nr_2_St_6_Low = false;
        ns_2_St_6_Low_1 = true;
        ns_2_St_6_Low_2 = true;
        ns_2_St_6_Low_3 = false;
        v_893 = s_2_St_6_Low;
        v_913 = nr_2_St_6_Low;
        v_898 = ns_2_St_6_Low_1;
        v_899 = ns_2_St_6_Low_2;
        v_900 = ns_2_St_6_Low_3;
      };
      v_895 = v_893;
      v_907 = v_898;
      v_908 = v_899;
      v_909 = v_900;
      v_915 = v_913;
      if (ck_17_3_1_1) {
        if (ns_2_St_6_High_1) {
          ns_2_St_6_High_2_1 = ns_2_St_6_High_2;
          if (ns_2_St_6_High_2_1) {
            ns_2_St_6_High_3_1_1 = ns_2_St_6_High_3;
          } else {
            ns_2_St_6_High_3_1_0 = ns_2_St_6_High_3;
          };
        } else {
          ns_2_St_6_High_2_0 = ns_2_St_6_High_2;
          if (ns_2_St_6_High_2_0) {
            ns_2_St_6_High_3_0_1 = ns_2_St_6_High_3;
          } else {
            ns_2_St_6_High_3_0_0 = ns_2_St_6_High_3;
          };
        };
      } else {
        if (ns_2_St_6_Low_1) {
          ns_2_St_6_Low_2_1 = ns_2_St_6_Low_2;
          if (ns_2_St_6_Low_2_1) {
            ns_2_St_6_Low_3_1_1 = ns_2_St_6_Low_3;
          } else {
            ns_2_St_6_Low_3_1_0 = ns_2_St_6_Low_3;
          };
        } else {
          ns_2_St_6_Low_2_0 = ns_2_St_6_Low_2;
          if (ns_2_St_6_Low_2_0) {
            ns_2_St_6_Low_3_0_1 = ns_2_St_6_Low_3;
          } else {
            ns_2_St_6_Low_3_0_0 = ns_2_St_6_Low_3;
          };
        };
      };
    } else {
      ck_17_3_1_0 = ck_17_3;
      if (ck_17_3_1_0) {
        v_894 = 0;
        v_914 = true;
        v_901 = true;
        v_902 = true;
        v_903 = true;
      } else {
        s_2_St_6_Mid = 3;
        v_894 = s_2_St_6_Mid;
        nr_2_St_6_Mid = false;
        v_914 = nr_2_St_6_Mid;
        ns_2_St_6_Mid_1 = true;
        v_901 = ns_2_St_6_Mid_1;
        ns_2_St_6_Mid_2 = false;
        v_902 = ns_2_St_6_Mid_2;
        ns_2_St_6_Mid_3 = false;
        v_903 = ns_2_St_6_Mid_3;
        if (ns_2_St_6_Mid_1) {
          ns_2_St_6_Mid_2_1 = ns_2_St_6_Mid_2;
          if (ns_2_St_6_Mid_2_1) {
            ns_2_St_6_Mid_3_1_1 = ns_2_St_6_Mid_3;
          } else {
            ns_2_St_6_Mid_3_1_0 = ns_2_St_6_Mid_3;
          };
        } else {
          ns_2_St_6_Mid_2_0 = ns_2_St_6_Mid_2;
          if (ns_2_St_6_Mid_2_0) {
            ns_2_St_6_Mid_3_0_1 = ns_2_St_6_Mid_3;
          } else {
            ns_2_St_6_Mid_3_0_0 = ns_2_St_6_Mid_3;
          };
        };
      };
      v_895 = v_894;
      v_907 = v_901;
      v_908 = v_902;
      v_909 = v_903;
      v_915 = v_914;
    };
    s_2 = v_895;
    ns_2_1 = v_907;
    ns_2_2 = v_908;
    ns_2_3 = v_909;
    nr_2 = v_915;
  } else {
    ck_17_2_0 = ck_17_2;
    if (ck_17_2_0) {
      ck_17_3_0_1 = ck_17_3;
      v_897 = 0;
      v_910 = true;
      v_911 = true;
      v_912 = true;
      v_917 = true;
    } else {
      ck_17_3_0_0 = ck_17_3;
      if (ck_17_3_0_0) {
        s_2_St_6_Veryhigh = 5;
        v_896 = s_2_St_6_Veryhigh;
        nr_2_St_6_Veryhigh = false;
        v_916 = nr_2_St_6_Veryhigh;
        ns_2_St_6_Veryhigh_1 = false;
        v_904 = ns_2_St_6_Veryhigh_1;
        ns_2_St_6_Veryhigh_2 = false;
        v_905 = ns_2_St_6_Veryhigh_2;
        ns_2_St_6_Veryhigh_3 = true;
        v_906 = ns_2_St_6_Veryhigh_3;
      } else {
        s_2_St_6_Verylow = 1;
        nr_2_St_6_Verylow = false;
        ns_2_St_6_Verylow_1 = false;
        ns_2_St_6_Verylow_2 = false;
        ns_2_St_6_Verylow_3 = false;
        v_896 = s_2_St_6_Verylow;
        v_916 = nr_2_St_6_Verylow;
        v_904 = ns_2_St_6_Verylow_1;
        v_905 = ns_2_St_6_Verylow_2;
        v_906 = ns_2_St_6_Verylow_3;
      };
      v_897 = v_896;
      v_910 = v_904;
      v_911 = v_905;
      v_912 = v_906;
      v_917 = v_916;
    };
    s_2 = v_897;
    ns_2_1 = v_910;
    ns_2_2 = v_911;
    ns_2_3 = v_912;
    nr_2 = v_917;
  };
  _out->grave = s_2;
  v_226 = (_out->grave>=1);
  v_237 = (_out->grave==1);
  v_248 = (_out->grave<=3);
  v_259 = (_out->grave==1);
  v_271 = (_out->grave>=1);
  v_283 = (_out->grave==1);
  v_295 = (_out->grave==1);
  v_308 = (_out->grave==1);
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
    if (ns_2_2_1) {
      ns_2_3_1_1 = ns_2_3;
    } else {
      ns_2_3_1_0 = ns_2_3;
    };
  } else {
    ns_2_2_0 = ns_2_2;
    if (ns_2_2_0) {
      ns_2_3_0_1 = ns_2_3;
    } else {
      ns_2_3_0_0 = ns_2_3;
    };
  };
  if (!(ck_17_1)) {
    if (!(ck_17_2_0)) {
      if (ck_17_3_0_0) {
        if (ns_2_St_6_Veryhigh_1) {
          ns_2_St_6_Veryhigh_2_1 = ns_2_St_6_Veryhigh_2;
          if (ns_2_St_6_Veryhigh_2_1) {
            ns_2_St_6_Veryhigh_3_1_1 = ns_2_St_6_Veryhigh_3;
          } else {
            ns_2_St_6_Veryhigh_3_1_0 = ns_2_St_6_Veryhigh_3;
          };
        } else {
          ns_2_St_6_Veryhigh_2_0 = ns_2_St_6_Veryhigh_2;
          if (ns_2_St_6_Veryhigh_2_0) {
            ns_2_St_6_Veryhigh_3_0_1 = ns_2_St_6_Veryhigh_3;
          } else {
            ns_2_St_6_Veryhigh_3_0_0 = ns_2_St_6_Veryhigh_3;
          };
        };
      } else {
        if (ns_2_St_6_Verylow_1) {
          ns_2_St_6_Verylow_2_1 = ns_2_St_6_Verylow_2;
          if (ns_2_St_6_Verylow_2_1) {
            ns_2_St_6_Verylow_3_1_1 = ns_2_St_6_Verylow_3;
          } else {
            ns_2_St_6_Verylow_3_1_0 = ns_2_St_6_Verylow_3;
          };
        } else {
          ns_2_St_6_Verylow_2_0 = ns_2_St_6_Verylow_2;
          if (ns_2_St_6_Verylow_2_0) {
            ns_2_St_6_Verylow_3_0_1 = ns_2_St_6_Verylow_3;
          } else {
            ns_2_St_6_Verylow_3_0_0 = ns_2_St_6_Verylow_3;
          };
        };
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
    if (s_7_2_1) {
      s_7_3_1_1 = s_7_3;
    } else {
      s_7_3_1_0 = s_7_3;
    };
  } else {
    s_7_2_0 = s_7_2;
    if (s_7_2_0) {
      s_7_3_0_1 = s_7_3;
    } else {
      s_7_3_0_0 = s_7_3;
    };
  };
  if (!(ck_16_1)) {
    if (!(ck_16_2_0)) {
      if (ck_16_3_0_0) {
        if (s_7_St_6_Veryhigh_1) {
          s_7_St_6_Veryhigh_2_1 = s_7_St_6_Veryhigh_2;
          if (s_7_St_6_Veryhigh_2_1) {
            s_7_St_6_Veryhigh_3_1_1 = s_7_St_6_Veryhigh_3;
          } else {
            s_7_St_6_Veryhigh_3_1_0 = s_7_St_6_Veryhigh_3;
          };
        } else {
          s_7_St_6_Veryhigh_2_0 = s_7_St_6_Veryhigh_2;
          if (s_7_St_6_Veryhigh_2_0) {
            s_7_St_6_Veryhigh_3_0_1 = s_7_St_6_Veryhigh_3;
          } else {
            s_7_St_6_Veryhigh_3_0_0 = s_7_St_6_Veryhigh_3;
          };
        };
      } else {
        if (s_7_St_6_Verylow_1) {
          s_7_St_6_Verylow_2_1 = s_7_St_6_Verylow_2;
          if (s_7_St_6_Verylow_2_1) {
            s_7_St_6_Verylow_3_1_1 = s_7_St_6_Verylow_3;
          } else {
            s_7_St_6_Verylow_3_1_0 = s_7_St_6_Verylow_3;
          };
        } else {
          s_7_St_6_Verylow_2_0 = s_7_St_6_Verylow_2;
          if (s_7_St_6_Verylow_2_0) {
            s_7_St_6_Verylow_3_0_1 = s_7_St_6_Verylow_3;
          } else {
            s_7_St_6_Verylow_3_0_0 = s_7_St_6_Verylow_3;
          };
        };
      };
    };
  };
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (ck_14_3_1_1) {
        v_558 = (up_1&&c_4);
        v_557 = !(cvh_1);
        v_559 = (v_557||v_558);
        if (v_559) {
          v_561 = true;
          v_560_1 = false;
          v_560_2 = false;
          v_560_3 = true;
        } else {
          v_561 = self->pnr_3;
          v_560_1 = true;
          v_560_2 = true;
          v_560_3 = true;
        };
        v_555 = (down_1&&c_4);
        v_554 = !(cmi_1);
        v_556 = (v_554||v_555);
        if (v_556) {
          v_563 = true;
          v_562_1 = true;
          v_562_2 = false;
          v_562_3 = false;
        } else {
          v_563 = v_561;
          v_562_1 = v_560_1;
          v_562_2 = v_560_2;
          v_562_3 = v_560_3;
        };
        v_553 = !(clo_1);
        if (v_553) {
          v_565 = true;
          v_564_1 = true;
          v_564_2 = true;
          v_564_3 = false;
        } else {
          v_565 = v_563;
          v_564_1 = v_562_1;
          v_564_2 = v_562_2;
          v_564_3 = v_562_3;
        };
        v_552 = !(cvl_1);
        if (v_552) {
          r_3_St_7_High = true;
        } else {
          r_3_St_7_High = v_565;
        };
        v_984 = r_3_St_7_High;
        if (v_552) {
          s_8_St_7_High_1 = false;
        } else {
          s_8_St_7_High_1 = v_564_1;
        };
        v_969 = s_8_St_7_High_1;
        if (v_552) {
          s_8_St_7_High_2 = false;
        } else {
          s_8_St_7_High_2 = v_564_2;
        };
        v_970 = s_8_St_7_High_2;
        if (v_552) {
          s_8_St_7_High_3 = false;
        } else {
          s_8_St_7_High_3 = v_564_3;
        };
        v_971 = s_8_St_7_High_3;
      } else {
        v_587 = !(cvh_1);
        if (v_587) {
          v_589 = true;
          v_588_1 = false;
          v_588_2 = false;
          v_588_3 = true;
        } else {
          v_589 = self->pnr_3;
          v_588_1 = true;
          v_588_2 = true;
          v_588_3 = false;
        };
        v_586 = !(chi_1);
        if (v_586) {
          v_591 = true;
          v_590_1 = true;
          v_590_2 = true;
          v_590_3 = true;
        } else {
          v_591 = v_589;
          v_590_1 = v_588_1;
          v_590_2 = v_588_2;
          v_590_3 = v_588_3;
        };
        v_584 = (up_1&&c_4);
        v_583 = !(cmi_1);
        v_585 = (v_583||v_584);
        if (v_585) {
          v_593 = true;
          v_592_1 = true;
          v_592_2 = false;
          v_592_3 = false;
        } else {
          v_593 = v_591;
          v_592_1 = v_590_1;
          v_592_2 = v_590_2;
          v_592_3 = v_590_3;
        };
        v_581 = (down_1&&c_4);
        v_580 = !(cvl_1);
        v_582 = (v_580||v_581);
        if (v_582) {
          r_3_St_7_Low = true;
          s_8_St_7_Low_1 = false;
          s_8_St_7_Low_2 = false;
          s_8_St_7_Low_3 = false;
        } else {
          r_3_St_7_Low = v_593;
          s_8_St_7_Low_1 = v_592_1;
          s_8_St_7_Low_2 = v_592_2;
          s_8_St_7_Low_3 = v_592_3;
        };
        v_984 = r_3_St_7_Low;
        v_969 = s_8_St_7_Low_1;
        v_970 = s_8_St_7_Low_2;
        v_971 = s_8_St_7_Low_3;
        if (v_588_1) {
          v_588_2_1 = v_588_2;
          if (v_588_2_1) {
            v_588_3_1_1 = v_588_3;
          } else {
            v_588_3_1_0 = v_588_3;
          };
        } else {
          v_588_2_0 = v_588_2;
          if (v_588_2_0) {
            v_588_3_0_1 = v_588_3;
          } else {
            v_588_3_0_0 = v_588_3;
          };
        };
        if (v_590_1) {
          v_590_2_1 = v_590_2;
          if (v_590_2_1) {
            v_590_3_1_1 = v_590_3;
          } else {
            v_590_3_1_0 = v_590_3;
          };
        } else {
          v_590_2_0 = v_590_2;
          if (v_590_2_0) {
            v_590_3_0_1 = v_590_3;
          } else {
            v_590_3_0_0 = v_590_3;
          };
        };
        if (v_592_1) {
          v_592_2_1 = v_592_2;
          if (v_592_2_1) {
            v_592_3_1_1 = v_592_3;
          } else {
            v_592_3_1_0 = v_592_3;
          };
        } else {
          v_592_2_0 = v_592_2;
          if (v_592_2_0) {
            v_592_3_0_1 = v_592_3;
          } else {
            v_592_3_0_0 = v_592_3;
          };
        };
      };
      v_978 = v_969;
      v_979 = v_970;
      v_980 = v_971;
      v_986 = v_984;
      if (ck_14_3_1_1) {
        if (v_560_1) {
          v_560_2_1 = v_560_2;
          if (v_560_2_1) {
            v_560_3_1_1 = v_560_3;
          } else {
            v_560_3_1_0 = v_560_3;
          };
        } else {
          v_560_2_0 = v_560_2;
          if (v_560_2_0) {
            v_560_3_0_1 = v_560_3;
          } else {
            v_560_3_0_0 = v_560_3;
          };
        };
        if (v_562_1) {
          v_562_2_1 = v_562_2;
          if (v_562_2_1) {
            v_562_3_1_1 = v_562_3;
          } else {
            v_562_3_1_0 = v_562_3;
          };
        } else {
          v_562_2_0 = v_562_2;
          if (v_562_2_0) {
            v_562_3_0_1 = v_562_3;
          } else {
            v_562_3_0_0 = v_562_3;
          };
        };
        if (v_564_1) {
          v_564_2_1 = v_564_2;
          if (v_564_2_1) {
            v_564_3_1_1 = v_564_3;
          } else {
            v_564_3_1_0 = v_564_3;
          };
        } else {
          v_564_2_0 = v_564_2;
          if (v_564_2_0) {
            v_564_3_0_1 = v_564_3;
          } else {
            v_564_3_0_0 = v_564_3;
          };
        };
        if (s_8_St_7_High_1) {
          s_8_St_7_High_2_1 = s_8_St_7_High_2;
          if (s_8_St_7_High_2_1) {
            s_8_St_7_High_3_1_1 = s_8_St_7_High_3;
          } else {
            s_8_St_7_High_3_1_0 = s_8_St_7_High_3;
          };
        } else {
          s_8_St_7_High_2_0 = s_8_St_7_High_2;
          if (s_8_St_7_High_2_0) {
            s_8_St_7_High_3_0_1 = s_8_St_7_High_3;
          } else {
            s_8_St_7_High_3_0_0 = s_8_St_7_High_3;
          };
        };
      } else {
        if (s_8_St_7_Low_1) {
          s_8_St_7_Low_2_1 = s_8_St_7_Low_2;
          if (s_8_St_7_Low_2_1) {
            s_8_St_7_Low_3_1_1 = s_8_St_7_Low_3;
          } else {
            s_8_St_7_Low_3_1_0 = s_8_St_7_Low_3;
          };
        } else {
          s_8_St_7_Low_2_0 = s_8_St_7_Low_2;
          if (s_8_St_7_Low_2_0) {
            s_8_St_7_Low_3_0_1 = s_8_St_7_Low_3;
          } else {
            s_8_St_7_Low_3_0_0 = s_8_St_7_Low_3;
          };
        };
      };
    } else {
      if (ck_14_3_1_0) {
        v_985 = true;
        v_972 = true;
        v_973 = true;
        v_974 = true;
      } else {
        v_573 = !(cvh_1);
        if (v_573) {
          v_575 = true;
          v_574_1 = false;
          v_574_2 = false;
          v_574_3 = true;
        } else {
          v_575 = self->pnr_3;
          v_574_1 = true;
          v_574_2 = false;
          v_574_3 = false;
        };
        v_571 = (up_1&&c_4);
        v_570 = !(chi_1);
        v_572 = (v_570||v_571);
        if (v_572) {
          v_577 = true;
          v_576_1 = true;
          v_576_2 = true;
          v_576_3 = true;
        } else {
          v_577 = v_575;
          v_576_1 = v_574_1;
          v_576_2 = v_574_2;
          v_576_3 = v_574_3;
        };
        v_568 = (down_1&&c_4);
        v_567 = !(clo_1);
        v_569 = (v_567||v_568);
        if (v_569) {
          v_579 = true;
          v_578_1 = true;
          v_578_2 = true;
          v_578_3 = false;
        } else {
          v_579 = v_577;
          v_578_1 = v_576_1;
          v_578_2 = v_576_2;
          v_578_3 = v_576_3;
        };
        v_566 = !(cvl_1);
        if (v_566) {
          r_3_St_7_Mid = true;
        } else {
          r_3_St_7_Mid = v_579;
        };
        v_985 = r_3_St_7_Mid;
        if (v_566) {
          s_8_St_7_Mid_1 = false;
        } else {
          s_8_St_7_Mid_1 = v_578_1;
        };
        v_972 = s_8_St_7_Mid_1;
        if (v_566) {
          s_8_St_7_Mid_2 = false;
        } else {
          s_8_St_7_Mid_2 = v_578_2;
        };
        v_973 = s_8_St_7_Mid_2;
        if (v_566) {
          s_8_St_7_Mid_3 = false;
        } else {
          s_8_St_7_Mid_3 = v_578_3;
        };
        v_974 = s_8_St_7_Mid_3;
        if (v_574_1) {
          v_574_2_1 = v_574_2;
          if (v_574_2_1) {
            v_574_3_1_1 = v_574_3;
          } else {
            v_574_3_1_0 = v_574_3;
          };
        } else {
          v_574_2_0 = v_574_2;
          if (v_574_2_0) {
            v_574_3_0_1 = v_574_3;
          } else {
            v_574_3_0_0 = v_574_3;
          };
        };
        if (v_576_1) {
          v_576_2_1 = v_576_2;
          if (v_576_2_1) {
            v_576_3_1_1 = v_576_3;
          } else {
            v_576_3_1_0 = v_576_3;
          };
        } else {
          v_576_2_0 = v_576_2;
          if (v_576_2_0) {
            v_576_3_0_1 = v_576_3;
          } else {
            v_576_3_0_0 = v_576_3;
          };
        };
        if (v_578_1) {
          v_578_2_1 = v_578_2;
          if (v_578_2_1) {
            v_578_3_1_1 = v_578_3;
          } else {
            v_578_3_1_0 = v_578_3;
          };
        } else {
          v_578_2_0 = v_578_2;
          if (v_578_2_0) {
            v_578_3_0_1 = v_578_3;
          } else {
            v_578_3_0_0 = v_578_3;
          };
        };
        if (s_8_St_7_Mid_1) {
          s_8_St_7_Mid_2_1 = s_8_St_7_Mid_2;
          if (s_8_St_7_Mid_2_1) {
            s_8_St_7_Mid_3_1_1 = s_8_St_7_Mid_3;
          } else {
            s_8_St_7_Mid_3_1_0 = s_8_St_7_Mid_3;
          };
        } else {
          s_8_St_7_Mid_2_0 = s_8_St_7_Mid_2;
          if (s_8_St_7_Mid_2_0) {
            s_8_St_7_Mid_3_0_1 = s_8_St_7_Mid_3;
          } else {
            s_8_St_7_Mid_3_0_0 = s_8_St_7_Mid_3;
          };
        };
      };
      v_978 = v_972;
      v_979 = v_973;
      v_980 = v_974;
      v_986 = v_985;
    };
    s_8_1 = v_978;
    s_8_2 = v_979;
    s_8_3 = v_980;
    r_3 = v_986;
  } else {
    if (ck_14_2_0) {
      v_981 = true;
      v_982 = true;
      v_983 = true;
      v_988 = true;
    } else {
      if (ck_14_3_0_0) {
        v_544 = (down_1&&c_4);
        v_543 = !(chi_1);
        v_545 = (v_543||v_544);
        if (v_545) {
          v_547 = true;
          v_546_1 = true;
          v_546_2 = true;
          v_546_3 = true;
        } else {
          v_547 = self->pnr_3;
          v_546_1 = false;
          v_546_2 = false;
          v_546_3 = true;
        };
        v_542 = !(cmi_1);
        if (v_542) {
          v_549 = true;
          v_548_1 = true;
          v_548_2 = false;
          v_548_3 = false;
        } else {
          v_549 = v_547;
          v_548_1 = v_546_1;
          v_548_2 = v_546_2;
          v_548_3 = v_546_3;
        };
        v_541 = !(clo_1);
        if (v_541) {
          v_551 = true;
          v_550_1 = true;
          v_550_2 = true;
          v_550_3 = false;
        } else {
          v_551 = v_549;
          v_550_1 = v_548_1;
          v_550_2 = v_548_2;
          v_550_3 = v_548_3;
        };
        v_540 = !(cvl_1);
        if (v_540) {
          r_3_St_7_Veryhigh = true;
        } else {
          r_3_St_7_Veryhigh = v_551;
        };
        v_987 = r_3_St_7_Veryhigh;
        if (v_540) {
          s_8_St_7_Veryhigh_1 = false;
        } else {
          s_8_St_7_Veryhigh_1 = v_550_1;
        };
        v_975 = s_8_St_7_Veryhigh_1;
        if (v_540) {
          s_8_St_7_Veryhigh_2 = false;
        } else {
          s_8_St_7_Veryhigh_2 = v_550_2;
        };
        v_976 = s_8_St_7_Veryhigh_2;
        if (v_540) {
          s_8_St_7_Veryhigh_3 = false;
        } else {
          s_8_St_7_Veryhigh_3 = v_550_3;
        };
        v_977 = s_8_St_7_Veryhigh_3;
        if (v_546_1) {
          v_546_2_1 = v_546_2;
          if (v_546_2_1) {
            v_546_3_1_1 = v_546_3;
          } else {
            v_546_3_1_0 = v_546_3;
          };
        } else {
          v_546_2_0 = v_546_2;
          if (v_546_2_0) {
            v_546_3_0_1 = v_546_3;
          } else {
            v_546_3_0_0 = v_546_3;
          };
        };
        if (v_548_1) {
          v_548_2_1 = v_548_2;
          if (v_548_2_1) {
            v_548_3_1_1 = v_548_3;
          } else {
            v_548_3_1_0 = v_548_3;
          };
        } else {
          v_548_2_0 = v_548_2;
          if (v_548_2_0) {
            v_548_3_0_1 = v_548_3;
          } else {
            v_548_3_0_0 = v_548_3;
          };
        };
        if (v_550_1) {
          v_550_2_1 = v_550_2;
          if (v_550_2_1) {
            v_550_3_1_1 = v_550_3;
          } else {
            v_550_3_1_0 = v_550_3;
          };
        } else {
          v_550_2_0 = v_550_2;
          if (v_550_2_0) {
            v_550_3_0_1 = v_550_3;
          } else {
            v_550_3_0_0 = v_550_3;
          };
        };
      } else {
        v_599 = !(cvh_1);
        if (v_599) {
          v_601 = true;
          v_600_1 = false;
          v_600_2 = false;
          v_600_3 = true;
        } else {
          v_601 = self->pnr_3;
          v_600_1 = false;
          v_600_2 = false;
          v_600_3 = false;
        };
        v_598 = !(chi_1);
        if (v_598) {
          v_603 = true;
          v_602_1 = true;
          v_602_2 = true;
          v_602_3 = true;
        } else {
          v_603 = v_601;
          v_602_1 = v_600_1;
          v_602_2 = v_600_2;
          v_602_3 = v_600_3;
        };
        v_597 = !(cmi_1);
        if (v_597) {
          v_605 = true;
          v_604_1 = true;
          v_604_2 = false;
          v_604_3 = false;
        } else {
          v_605 = v_603;
          v_604_1 = v_602_1;
          v_604_2 = v_602_2;
          v_604_3 = v_602_3;
        };
        v_595 = (up_1&&c_4);
        v_594 = !(clo_1);
        v_596 = (v_594||v_595);
        if (v_596) {
          r_3_St_7_Verylow = true;
          s_8_St_7_Verylow_1 = true;
          s_8_St_7_Verylow_2 = true;
          s_8_St_7_Verylow_3 = false;
        } else {
          r_3_St_7_Verylow = v_605;
          s_8_St_7_Verylow_1 = v_604_1;
          s_8_St_7_Verylow_2 = v_604_2;
          s_8_St_7_Verylow_3 = v_604_3;
        };
        v_987 = r_3_St_7_Verylow;
        v_975 = s_8_St_7_Verylow_1;
        v_976 = s_8_St_7_Verylow_2;
        v_977 = s_8_St_7_Verylow_3;
        if (v_600_1) {
          v_600_2_1 = v_600_2;
          if (v_600_2_1) {
            v_600_3_1_1 = v_600_3;
          } else {
            v_600_3_1_0 = v_600_3;
          };
        } else {
          v_600_2_0 = v_600_2;
          if (v_600_2_0) {
            v_600_3_0_1 = v_600_3;
          } else {
            v_600_3_0_0 = v_600_3;
          };
        };
        if (v_602_1) {
          v_602_2_1 = v_602_2;
          if (v_602_2_1) {
            v_602_3_1_1 = v_602_3;
          } else {
            v_602_3_1_0 = v_602_3;
          };
        } else {
          v_602_2_0 = v_602_2;
          if (v_602_2_0) {
            v_602_3_0_1 = v_602_3;
          } else {
            v_602_3_0_0 = v_602_3;
          };
        };
        if (v_604_1) {
          v_604_2_1 = v_604_2;
          if (v_604_2_1) {
            v_604_3_1_1 = v_604_3;
          } else {
            v_604_3_1_0 = v_604_3;
          };
        } else {
          v_604_2_0 = v_604_2;
          if (v_604_2_0) {
            v_604_3_0_1 = v_604_3;
          } else {
            v_604_3_0_0 = v_604_3;
          };
        };
      };
      v_981 = v_975;
      v_982 = v_976;
      v_983 = v_977;
      v_988 = v_987;
    };
    s_8_1 = v_981;
    s_8_2 = v_982;
    s_8_3 = v_983;
    r_3 = v_988;
  };
  ck_15_1 = s_8_1;
  ck_15_2 = s_8_2;
  ck_15_3 = s_8_3;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      ck_15_3_1_1 = ck_15_3;
      if (ck_15_3_1_1) {
        s_1_St_7_High = 4;
        v_941 = s_1_St_7_High;
        nr_3_St_7_High = false;
        v_961 = nr_3_St_7_High;
        ns_3_St_7_High_1 = true;
        v_946 = ns_3_St_7_High_1;
        ns_3_St_7_High_2 = true;
        v_947 = ns_3_St_7_High_2;
        ns_3_St_7_High_3 = true;
        v_948 = ns_3_St_7_High_3;
      } else {
        s_1_St_7_Low = 2;
        nr_3_St_7_Low = false;
        ns_3_St_7_Low_1 = true;
        ns_3_St_7_Low_2 = true;
        ns_3_St_7_Low_3 = false;
        v_941 = s_1_St_7_Low;
        v_961 = nr_3_St_7_Low;
        v_946 = ns_3_St_7_Low_1;
        v_947 = ns_3_St_7_Low_2;
        v_948 = ns_3_St_7_Low_3;
      };
      v_943 = v_941;
      v_955 = v_946;
      v_956 = v_947;
      v_957 = v_948;
      v_963 = v_961;
      if (ck_15_3_1_1) {
        if (ns_3_St_7_High_1) {
          ns_3_St_7_High_2_1 = ns_3_St_7_High_2;
          if (ns_3_St_7_High_2_1) {
            ns_3_St_7_High_3_1_1 = ns_3_St_7_High_3;
          } else {
            ns_3_St_7_High_3_1_0 = ns_3_St_7_High_3;
          };
        } else {
          ns_3_St_7_High_2_0 = ns_3_St_7_High_2;
          if (ns_3_St_7_High_2_0) {
            ns_3_St_7_High_3_0_1 = ns_3_St_7_High_3;
          } else {
            ns_3_St_7_High_3_0_0 = ns_3_St_7_High_3;
          };
        };
      } else {
        if (ns_3_St_7_Low_1) {
          ns_3_St_7_Low_2_1 = ns_3_St_7_Low_2;
          if (ns_3_St_7_Low_2_1) {
            ns_3_St_7_Low_3_1_1 = ns_3_St_7_Low_3;
          } else {
            ns_3_St_7_Low_3_1_0 = ns_3_St_7_Low_3;
          };
        } else {
          ns_3_St_7_Low_2_0 = ns_3_St_7_Low_2;
          if (ns_3_St_7_Low_2_0) {
            ns_3_St_7_Low_3_0_1 = ns_3_St_7_Low_3;
          } else {
            ns_3_St_7_Low_3_0_0 = ns_3_St_7_Low_3;
          };
        };
      };
    } else {
      ck_15_3_1_0 = ck_15_3;
      if (ck_15_3_1_0) {
        v_942 = 0;
        v_962 = true;
        v_949 = true;
        v_950 = true;
        v_951 = true;
      } else {
        s_1_St_7_Mid = 3;
        v_942 = s_1_St_7_Mid;
        nr_3_St_7_Mid = false;
        v_962 = nr_3_St_7_Mid;
        ns_3_St_7_Mid_1 = true;
        v_949 = ns_3_St_7_Mid_1;
        ns_3_St_7_Mid_2 = false;
        v_950 = ns_3_St_7_Mid_2;
        ns_3_St_7_Mid_3 = false;
        v_951 = ns_3_St_7_Mid_3;
        if (ns_3_St_7_Mid_1) {
          ns_3_St_7_Mid_2_1 = ns_3_St_7_Mid_2;
          if (ns_3_St_7_Mid_2_1) {
            ns_3_St_7_Mid_3_1_1 = ns_3_St_7_Mid_3;
          } else {
            ns_3_St_7_Mid_3_1_0 = ns_3_St_7_Mid_3;
          };
        } else {
          ns_3_St_7_Mid_2_0 = ns_3_St_7_Mid_2;
          if (ns_3_St_7_Mid_2_0) {
            ns_3_St_7_Mid_3_0_1 = ns_3_St_7_Mid_3;
          } else {
            ns_3_St_7_Mid_3_0_0 = ns_3_St_7_Mid_3;
          };
        };
      };
      v_943 = v_942;
      v_955 = v_949;
      v_956 = v_950;
      v_957 = v_951;
      v_963 = v_962;
    };
    s_1 = v_943;
    ns_3_1 = v_955;
    ns_3_2 = v_956;
    ns_3_3 = v_957;
    nr_3 = v_963;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      ck_15_3_0_1 = ck_15_3;
      v_945 = 0;
      v_958 = true;
      v_959 = true;
      v_960 = true;
      v_965 = true;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        s_1_St_7_Veryhigh = 5;
        v_944 = s_1_St_7_Veryhigh;
        nr_3_St_7_Veryhigh = false;
        v_964 = nr_3_St_7_Veryhigh;
        ns_3_St_7_Veryhigh_1 = false;
        v_952 = ns_3_St_7_Veryhigh_1;
        ns_3_St_7_Veryhigh_2 = false;
        v_953 = ns_3_St_7_Veryhigh_2;
        ns_3_St_7_Veryhigh_3 = true;
        v_954 = ns_3_St_7_Veryhigh_3;
      } else {
        s_1_St_7_Verylow = 1;
        nr_3_St_7_Verylow = false;
        ns_3_St_7_Verylow_1 = false;
        ns_3_St_7_Verylow_2 = false;
        ns_3_St_7_Verylow_3 = false;
        v_944 = s_1_St_7_Verylow;
        v_964 = nr_3_St_7_Verylow;
        v_952 = ns_3_St_7_Verylow_1;
        v_953 = ns_3_St_7_Verylow_2;
        v_954 = ns_3_St_7_Verylow_3;
      };
      v_945 = v_944;
      v_958 = v_952;
      v_959 = v_953;
      v_960 = v_954;
      v_965 = v_964;
    };
    s_1 = v_945;
    ns_3_1 = v_958;
    ns_3_2 = v_959;
    ns_3_3 = v_960;
    nr_3 = v_965;
  };
  _out->medio = s_1;
  v_224 = (_out->medio>=1);
  v_235 = (_out->medio>=1);
  v_246 = (_out->medio==5);
  v_257 = (_out->medio<=4);
  v_269 = (_out->medio==5);
  v_281 = (_out->medio>=1);
  v_293 = (_out->medio==1);
  v_306 = (_out->medio==1);
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
    if (ns_3_2_1) {
      ns_3_3_1_1 = ns_3_3;
    } else {
      ns_3_3_1_0 = ns_3_3;
    };
  } else {
    ns_3_2_0 = ns_3_2;
    if (ns_3_2_0) {
      ns_3_3_0_1 = ns_3_3;
    } else {
      ns_3_3_0_0 = ns_3_3;
    };
  };
  if (!(ck_15_1)) {
    if (!(ck_15_2_0)) {
      if (ck_15_3_0_0) {
        if (ns_3_St_7_Veryhigh_1) {
          ns_3_St_7_Veryhigh_2_1 = ns_3_St_7_Veryhigh_2;
          if (ns_3_St_7_Veryhigh_2_1) {
            ns_3_St_7_Veryhigh_3_1_1 = ns_3_St_7_Veryhigh_3;
          } else {
            ns_3_St_7_Veryhigh_3_1_0 = ns_3_St_7_Veryhigh_3;
          };
        } else {
          ns_3_St_7_Veryhigh_2_0 = ns_3_St_7_Veryhigh_2;
          if (ns_3_St_7_Veryhigh_2_0) {
            ns_3_St_7_Veryhigh_3_0_1 = ns_3_St_7_Veryhigh_3;
          } else {
            ns_3_St_7_Veryhigh_3_0_0 = ns_3_St_7_Veryhigh_3;
          };
        };
      } else {
        if (ns_3_St_7_Verylow_1) {
          ns_3_St_7_Verylow_2_1 = ns_3_St_7_Verylow_2;
          if (ns_3_St_7_Verylow_2_1) {
            ns_3_St_7_Verylow_3_1_1 = ns_3_St_7_Verylow_3;
          } else {
            ns_3_St_7_Verylow_3_1_0 = ns_3_St_7_Verylow_3;
          };
        } else {
          ns_3_St_7_Verylow_2_0 = ns_3_St_7_Verylow_2;
          if (ns_3_St_7_Verylow_2_0) {
            ns_3_St_7_Verylow_3_0_1 = ns_3_St_7_Verylow_3;
          } else {
            ns_3_St_7_Verylow_3_0_0 = ns_3_St_7_Verylow_3;
          };
        };
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
    if (s_8_2_1) {
      s_8_3_1_1 = s_8_3;
    } else {
      s_8_3_1_0 = s_8_3;
    };
  } else {
    s_8_2_0 = s_8_2;
    if (s_8_2_0) {
      s_8_3_0_1 = s_8_3;
    } else {
      s_8_3_0_0 = s_8_3;
    };
  };
  if (!(ck_14_1)) {
    if (!(ck_14_2_0)) {
      if (ck_14_3_0_0) {
        if (s_8_St_7_Veryhigh_1) {
          s_8_St_7_Veryhigh_2_1 = s_8_St_7_Veryhigh_2;
          if (s_8_St_7_Veryhigh_2_1) {
            s_8_St_7_Veryhigh_3_1_1 = s_8_St_7_Veryhigh_3;
          } else {
            s_8_St_7_Veryhigh_3_1_0 = s_8_St_7_Veryhigh_3;
          };
        } else {
          s_8_St_7_Veryhigh_2_0 = s_8_St_7_Veryhigh_2;
          if (s_8_St_7_Veryhigh_2_0) {
            s_8_St_7_Veryhigh_3_0_1 = s_8_St_7_Veryhigh_3;
          } else {
            s_8_St_7_Veryhigh_3_0_0 = s_8_St_7_Veryhigh_3;
          };
        };
      } else {
        if (s_8_St_7_Verylow_1) {
          s_8_St_7_Verylow_2_1 = s_8_St_7_Verylow_2;
          if (s_8_St_7_Verylow_2_1) {
            s_8_St_7_Verylow_3_1_1 = s_8_St_7_Verylow_3;
          } else {
            s_8_St_7_Verylow_3_1_0 = s_8_St_7_Verylow_3;
          };
        } else {
          s_8_St_7_Verylow_2_0 = s_8_St_7_Verylow_2;
          if (s_8_St_7_Verylow_2_0) {
            s_8_St_7_Verylow_3_0_1 = s_8_St_7_Verylow_3;
          } else {
            s_8_St_7_Verylow_3_0_0 = s_8_St_7_Verylow_3;
          };
        };
      };
    };
  };
  if (ck_12_1) {
    if (ck_12_2_1) {
      if (ck_12_3_1_1) {
        v_492 = (up&&c_3);
        v_491 = !(cvh);
        v_493 = (v_491||v_492);
        if (v_493) {
          v_495 = true;
          v_494_1 = false;
          v_494_2 = false;
          v_494_3 = true;
        } else {
          v_495 = self->pnr_4;
          v_494_1 = true;
          v_494_2 = true;
          v_494_3 = true;
        };
        v_489 = (down&&c_3);
        v_488 = !(cmi);
        v_490 = (v_488||v_489);
        if (v_490) {
          v_497 = true;
          v_496_1 = true;
          v_496_2 = false;
          v_496_3 = false;
        } else {
          v_497 = v_495;
          v_496_1 = v_494_1;
          v_496_2 = v_494_2;
          v_496_3 = v_494_3;
        };
        v_487 = !(clo);
        if (v_487) {
          v_499 = true;
          v_498_1 = true;
          v_498_2 = true;
          v_498_3 = false;
        } else {
          v_499 = v_497;
          v_498_1 = v_496_1;
          v_498_2 = v_496_2;
          v_498_3 = v_496_3;
        };
        v_486 = !(cvl);
        if (v_486) {
          r_4_St_8_High = true;
        } else {
          r_4_St_8_High = v_499;
        };
        v_1032 = r_4_St_8_High;
        if (v_486) {
          s_9_St_8_High_1 = false;
        } else {
          s_9_St_8_High_1 = v_498_1;
        };
        v_1017 = s_9_St_8_High_1;
        if (v_486) {
          s_9_St_8_High_2 = false;
        } else {
          s_9_St_8_High_2 = v_498_2;
        };
        v_1018 = s_9_St_8_High_2;
        if (v_486) {
          s_9_St_8_High_3 = false;
        } else {
          s_9_St_8_High_3 = v_498_3;
        };
        v_1019 = s_9_St_8_High_3;
      } else {
        v_521 = !(cvh);
        if (v_521) {
          v_523 = true;
          v_522_1 = false;
          v_522_2 = false;
          v_522_3 = true;
        } else {
          v_523 = self->pnr_4;
          v_522_1 = true;
          v_522_2 = true;
          v_522_3 = false;
        };
        v_520 = !(chi);
        if (v_520) {
          v_525 = true;
          v_524_1 = true;
          v_524_2 = true;
          v_524_3 = true;
        } else {
          v_525 = v_523;
          v_524_1 = v_522_1;
          v_524_2 = v_522_2;
          v_524_3 = v_522_3;
        };
        v_518 = (up&&c_3);
        v_517 = !(cmi);
        v_519 = (v_517||v_518);
        if (v_519) {
          v_527 = true;
          v_526_1 = true;
          v_526_2 = false;
          v_526_3 = false;
        } else {
          v_527 = v_525;
          v_526_1 = v_524_1;
          v_526_2 = v_524_2;
          v_526_3 = v_524_3;
        };
        v_515 = (down&&c_3);
        v_514 = !(cvl);
        v_516 = (v_514||v_515);
        if (v_516) {
          r_4_St_8_Low = true;
          s_9_St_8_Low_1 = false;
          s_9_St_8_Low_2 = false;
          s_9_St_8_Low_3 = false;
        } else {
          r_4_St_8_Low = v_527;
          s_9_St_8_Low_1 = v_526_1;
          s_9_St_8_Low_2 = v_526_2;
          s_9_St_8_Low_3 = v_526_3;
        };
        v_1032 = r_4_St_8_Low;
        v_1017 = s_9_St_8_Low_1;
        v_1018 = s_9_St_8_Low_2;
        v_1019 = s_9_St_8_Low_3;
        if (v_522_1) {
          v_522_2_1 = v_522_2;
          if (v_522_2_1) {
            v_522_3_1_1 = v_522_3;
          } else {
            v_522_3_1_0 = v_522_3;
          };
        } else {
          v_522_2_0 = v_522_2;
          if (v_522_2_0) {
            v_522_3_0_1 = v_522_3;
          } else {
            v_522_3_0_0 = v_522_3;
          };
        };
        if (v_524_1) {
          v_524_2_1 = v_524_2;
          if (v_524_2_1) {
            v_524_3_1_1 = v_524_3;
          } else {
            v_524_3_1_0 = v_524_3;
          };
        } else {
          v_524_2_0 = v_524_2;
          if (v_524_2_0) {
            v_524_3_0_1 = v_524_3;
          } else {
            v_524_3_0_0 = v_524_3;
          };
        };
        if (v_526_1) {
          v_526_2_1 = v_526_2;
          if (v_526_2_1) {
            v_526_3_1_1 = v_526_3;
          } else {
            v_526_3_1_0 = v_526_3;
          };
        } else {
          v_526_2_0 = v_526_2;
          if (v_526_2_0) {
            v_526_3_0_1 = v_526_3;
          } else {
            v_526_3_0_0 = v_526_3;
          };
        };
      };
      v_1026 = v_1017;
      v_1027 = v_1018;
      v_1028 = v_1019;
      v_1034 = v_1032;
      if (ck_12_3_1_1) {
        if (v_494_1) {
          v_494_2_1 = v_494_2;
          if (v_494_2_1) {
            v_494_3_1_1 = v_494_3;
          } else {
            v_494_3_1_0 = v_494_3;
          };
        } else {
          v_494_2_0 = v_494_2;
          if (v_494_2_0) {
            v_494_3_0_1 = v_494_3;
          } else {
            v_494_3_0_0 = v_494_3;
          };
        };
        if (v_496_1) {
          v_496_2_1 = v_496_2;
          if (v_496_2_1) {
            v_496_3_1_1 = v_496_3;
          } else {
            v_496_3_1_0 = v_496_3;
          };
        } else {
          v_496_2_0 = v_496_2;
          if (v_496_2_0) {
            v_496_3_0_1 = v_496_3;
          } else {
            v_496_3_0_0 = v_496_3;
          };
        };
        if (v_498_1) {
          v_498_2_1 = v_498_2;
          if (v_498_2_1) {
            v_498_3_1_1 = v_498_3;
          } else {
            v_498_3_1_0 = v_498_3;
          };
        } else {
          v_498_2_0 = v_498_2;
          if (v_498_2_0) {
            v_498_3_0_1 = v_498_3;
          } else {
            v_498_3_0_0 = v_498_3;
          };
        };
        if (s_9_St_8_High_1) {
          s_9_St_8_High_2_1 = s_9_St_8_High_2;
          if (s_9_St_8_High_2_1) {
            s_9_St_8_High_3_1_1 = s_9_St_8_High_3;
          } else {
            s_9_St_8_High_3_1_0 = s_9_St_8_High_3;
          };
        } else {
          s_9_St_8_High_2_0 = s_9_St_8_High_2;
          if (s_9_St_8_High_2_0) {
            s_9_St_8_High_3_0_1 = s_9_St_8_High_3;
          } else {
            s_9_St_8_High_3_0_0 = s_9_St_8_High_3;
          };
        };
      } else {
        if (s_9_St_8_Low_1) {
          s_9_St_8_Low_2_1 = s_9_St_8_Low_2;
          if (s_9_St_8_Low_2_1) {
            s_9_St_8_Low_3_1_1 = s_9_St_8_Low_3;
          } else {
            s_9_St_8_Low_3_1_0 = s_9_St_8_Low_3;
          };
        } else {
          s_9_St_8_Low_2_0 = s_9_St_8_Low_2;
          if (s_9_St_8_Low_2_0) {
            s_9_St_8_Low_3_0_1 = s_9_St_8_Low_3;
          } else {
            s_9_St_8_Low_3_0_0 = s_9_St_8_Low_3;
          };
        };
      };
    } else {
      if (ck_12_3_1_0) {
        v_1033 = true;
        v_1020 = true;
        v_1021 = true;
        v_1022 = true;
      } else {
        v_507 = !(cvh);
        if (v_507) {
          v_509 = true;
          v_508_1 = false;
          v_508_2 = false;
          v_508_3 = true;
        } else {
          v_509 = self->pnr_4;
          v_508_1 = true;
          v_508_2 = false;
          v_508_3 = false;
        };
        v_505 = (up&&c_3);
        v_504 = !(chi);
        v_506 = (v_504||v_505);
        if (v_506) {
          v_511 = true;
          v_510_1 = true;
          v_510_2 = true;
          v_510_3 = true;
        } else {
          v_511 = v_509;
          v_510_1 = v_508_1;
          v_510_2 = v_508_2;
          v_510_3 = v_508_3;
        };
        v_502 = (down&&c_3);
        v_501 = !(clo);
        v_503 = (v_501||v_502);
        if (v_503) {
          v_513 = true;
          v_512_1 = true;
          v_512_2 = true;
          v_512_3 = false;
        } else {
          v_513 = v_511;
          v_512_1 = v_510_1;
          v_512_2 = v_510_2;
          v_512_3 = v_510_3;
        };
        v_500 = !(cvl);
        if (v_500) {
          r_4_St_8_Mid = true;
        } else {
          r_4_St_8_Mid = v_513;
        };
        v_1033 = r_4_St_8_Mid;
        if (v_500) {
          s_9_St_8_Mid_1 = false;
        } else {
          s_9_St_8_Mid_1 = v_512_1;
        };
        v_1020 = s_9_St_8_Mid_1;
        if (v_500) {
          s_9_St_8_Mid_2 = false;
        } else {
          s_9_St_8_Mid_2 = v_512_2;
        };
        v_1021 = s_9_St_8_Mid_2;
        if (v_500) {
          s_9_St_8_Mid_3 = false;
        } else {
          s_9_St_8_Mid_3 = v_512_3;
        };
        v_1022 = s_9_St_8_Mid_3;
        if (v_508_1) {
          v_508_2_1 = v_508_2;
          if (v_508_2_1) {
            v_508_3_1_1 = v_508_3;
          } else {
            v_508_3_1_0 = v_508_3;
          };
        } else {
          v_508_2_0 = v_508_2;
          if (v_508_2_0) {
            v_508_3_0_1 = v_508_3;
          } else {
            v_508_3_0_0 = v_508_3;
          };
        };
        if (v_510_1) {
          v_510_2_1 = v_510_2;
          if (v_510_2_1) {
            v_510_3_1_1 = v_510_3;
          } else {
            v_510_3_1_0 = v_510_3;
          };
        } else {
          v_510_2_0 = v_510_2;
          if (v_510_2_0) {
            v_510_3_0_1 = v_510_3;
          } else {
            v_510_3_0_0 = v_510_3;
          };
        };
        if (v_512_1) {
          v_512_2_1 = v_512_2;
          if (v_512_2_1) {
            v_512_3_1_1 = v_512_3;
          } else {
            v_512_3_1_0 = v_512_3;
          };
        } else {
          v_512_2_0 = v_512_2;
          if (v_512_2_0) {
            v_512_3_0_1 = v_512_3;
          } else {
            v_512_3_0_0 = v_512_3;
          };
        };
        if (s_9_St_8_Mid_1) {
          s_9_St_8_Mid_2_1 = s_9_St_8_Mid_2;
          if (s_9_St_8_Mid_2_1) {
            s_9_St_8_Mid_3_1_1 = s_9_St_8_Mid_3;
          } else {
            s_9_St_8_Mid_3_1_0 = s_9_St_8_Mid_3;
          };
        } else {
          s_9_St_8_Mid_2_0 = s_9_St_8_Mid_2;
          if (s_9_St_8_Mid_2_0) {
            s_9_St_8_Mid_3_0_1 = s_9_St_8_Mid_3;
          } else {
            s_9_St_8_Mid_3_0_0 = s_9_St_8_Mid_3;
          };
        };
      };
      v_1026 = v_1020;
      v_1027 = v_1021;
      v_1028 = v_1022;
      v_1034 = v_1033;
    };
    s_9_1 = v_1026;
    s_9_2 = v_1027;
    s_9_3 = v_1028;
    r_4 = v_1034;
  } else {
    if (ck_12_2_0) {
      v_1029 = true;
      v_1030 = true;
      v_1031 = true;
      v_1036 = true;
    } else {
      if (ck_12_3_0_0) {
        v_478 = (down&&c_3);
        v_477 = !(chi);
        v_479 = (v_477||v_478);
        if (v_479) {
          v_481 = true;
          v_480_1 = true;
          v_480_2 = true;
          v_480_3 = true;
        } else {
          v_481 = self->pnr_4;
          v_480_1 = false;
          v_480_2 = false;
          v_480_3 = true;
        };
        v_476 = !(cmi);
        if (v_476) {
          v_483 = true;
          v_482_1 = true;
          v_482_2 = false;
          v_482_3 = false;
        } else {
          v_483 = v_481;
          v_482_1 = v_480_1;
          v_482_2 = v_480_2;
          v_482_3 = v_480_3;
        };
        v_475 = !(clo);
        if (v_475) {
          v_485 = true;
          v_484_1 = true;
          v_484_2 = true;
          v_484_3 = false;
        } else {
          v_485 = v_483;
          v_484_1 = v_482_1;
          v_484_2 = v_482_2;
          v_484_3 = v_482_3;
        };
        v_474 = !(cvl);
        if (v_474) {
          r_4_St_8_Veryhigh = true;
        } else {
          r_4_St_8_Veryhigh = v_485;
        };
        v_1035 = r_4_St_8_Veryhigh;
        if (v_474) {
          s_9_St_8_Veryhigh_1 = false;
        } else {
          s_9_St_8_Veryhigh_1 = v_484_1;
        };
        v_1023 = s_9_St_8_Veryhigh_1;
        if (v_474) {
          s_9_St_8_Veryhigh_2 = false;
        } else {
          s_9_St_8_Veryhigh_2 = v_484_2;
        };
        v_1024 = s_9_St_8_Veryhigh_2;
        if (v_474) {
          s_9_St_8_Veryhigh_3 = false;
        } else {
          s_9_St_8_Veryhigh_3 = v_484_3;
        };
        v_1025 = s_9_St_8_Veryhigh_3;
        if (v_480_1) {
          v_480_2_1 = v_480_2;
          if (v_480_2_1) {
            v_480_3_1_1 = v_480_3;
          } else {
            v_480_3_1_0 = v_480_3;
          };
        } else {
          v_480_2_0 = v_480_2;
          if (v_480_2_0) {
            v_480_3_0_1 = v_480_3;
          } else {
            v_480_3_0_0 = v_480_3;
          };
        };
        if (v_482_1) {
          v_482_2_1 = v_482_2;
          if (v_482_2_1) {
            v_482_3_1_1 = v_482_3;
          } else {
            v_482_3_1_0 = v_482_3;
          };
        } else {
          v_482_2_0 = v_482_2;
          if (v_482_2_0) {
            v_482_3_0_1 = v_482_3;
          } else {
            v_482_3_0_0 = v_482_3;
          };
        };
        if (v_484_1) {
          v_484_2_1 = v_484_2;
          if (v_484_2_1) {
            v_484_3_1_1 = v_484_3;
          } else {
            v_484_3_1_0 = v_484_3;
          };
        } else {
          v_484_2_0 = v_484_2;
          if (v_484_2_0) {
            v_484_3_0_1 = v_484_3;
          } else {
            v_484_3_0_0 = v_484_3;
          };
        };
      } else {
        v_533 = !(cvh);
        if (v_533) {
          v_535 = true;
          v_534_1 = false;
          v_534_2 = false;
          v_534_3 = true;
        } else {
          v_535 = self->pnr_4;
          v_534_1 = false;
          v_534_2 = false;
          v_534_3 = false;
        };
        v_532 = !(chi);
        if (v_532) {
          v_537 = true;
          v_536_1 = true;
          v_536_2 = true;
          v_536_3 = true;
        } else {
          v_537 = v_535;
          v_536_1 = v_534_1;
          v_536_2 = v_534_2;
          v_536_3 = v_534_3;
        };
        v_531 = !(cmi);
        if (v_531) {
          v_539 = true;
          v_538_1 = true;
          v_538_2 = false;
          v_538_3 = false;
        } else {
          v_539 = v_537;
          v_538_1 = v_536_1;
          v_538_2 = v_536_2;
          v_538_3 = v_536_3;
        };
        v_529 = (up&&c_3);
        v_528 = !(clo);
        v_530 = (v_528||v_529);
        if (v_530) {
          r_4_St_8_Verylow = true;
          s_9_St_8_Verylow_1 = true;
          s_9_St_8_Verylow_2 = true;
          s_9_St_8_Verylow_3 = false;
        } else {
          r_4_St_8_Verylow = v_539;
          s_9_St_8_Verylow_1 = v_538_1;
          s_9_St_8_Verylow_2 = v_538_2;
          s_9_St_8_Verylow_3 = v_538_3;
        };
        v_1035 = r_4_St_8_Verylow;
        v_1023 = s_9_St_8_Verylow_1;
        v_1024 = s_9_St_8_Verylow_2;
        v_1025 = s_9_St_8_Verylow_3;
        if (v_534_1) {
          v_534_2_1 = v_534_2;
          if (v_534_2_1) {
            v_534_3_1_1 = v_534_3;
          } else {
            v_534_3_1_0 = v_534_3;
          };
        } else {
          v_534_2_0 = v_534_2;
          if (v_534_2_0) {
            v_534_3_0_1 = v_534_3;
          } else {
            v_534_3_0_0 = v_534_3;
          };
        };
        if (v_536_1) {
          v_536_2_1 = v_536_2;
          if (v_536_2_1) {
            v_536_3_1_1 = v_536_3;
          } else {
            v_536_3_1_0 = v_536_3;
          };
        } else {
          v_536_2_0 = v_536_2;
          if (v_536_2_0) {
            v_536_3_0_1 = v_536_3;
          } else {
            v_536_3_0_0 = v_536_3;
          };
        };
        if (v_538_1) {
          v_538_2_1 = v_538_2;
          if (v_538_2_1) {
            v_538_3_1_1 = v_538_3;
          } else {
            v_538_3_1_0 = v_538_3;
          };
        } else {
          v_538_2_0 = v_538_2;
          if (v_538_2_0) {
            v_538_3_0_1 = v_538_3;
          } else {
            v_538_3_0_0 = v_538_3;
          };
        };
      };
      v_1029 = v_1023;
      v_1030 = v_1024;
      v_1031 = v_1025;
      v_1036 = v_1035;
    };
    s_9_1 = v_1029;
    s_9_2 = v_1030;
    s_9_3 = v_1031;
    r_4 = v_1036;
  };
  ck_13_1 = s_9_1;
  ck_13_2 = s_9_2;
  ck_13_3 = s_9_3;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        s_St_8_High = 4;
        v_989 = s_St_8_High;
        nr_4_St_8_High = false;
        v_1009 = nr_4_St_8_High;
        ns_4_St_8_High_1 = true;
        v_994 = ns_4_St_8_High_1;
        ns_4_St_8_High_2 = true;
        v_995 = ns_4_St_8_High_2;
        ns_4_St_8_High_3 = true;
        v_996 = ns_4_St_8_High_3;
      } else {
        s_St_8_Low = 2;
        nr_4_St_8_Low = false;
        ns_4_St_8_Low_1 = true;
        ns_4_St_8_Low_2 = true;
        ns_4_St_8_Low_3 = false;
        v_989 = s_St_8_Low;
        v_1009 = nr_4_St_8_Low;
        v_994 = ns_4_St_8_Low_1;
        v_995 = ns_4_St_8_Low_2;
        v_996 = ns_4_St_8_Low_3;
      };
      v_991 = v_989;
      v_1003 = v_994;
      v_1004 = v_995;
      v_1005 = v_996;
      v_1011 = v_1009;
      if (ck_13_3_1_1) {
        if (ns_4_St_8_High_1) {
          ns_4_St_8_High_2_1 = ns_4_St_8_High_2;
          if (ns_4_St_8_High_2_1) {
            ns_4_St_8_High_3_1_1 = ns_4_St_8_High_3;
          } else {
            ns_4_St_8_High_3_1_0 = ns_4_St_8_High_3;
          };
        } else {
          ns_4_St_8_High_2_0 = ns_4_St_8_High_2;
          if (ns_4_St_8_High_2_0) {
            ns_4_St_8_High_3_0_1 = ns_4_St_8_High_3;
          } else {
            ns_4_St_8_High_3_0_0 = ns_4_St_8_High_3;
          };
        };
      } else {
        if (ns_4_St_8_Low_1) {
          ns_4_St_8_Low_2_1 = ns_4_St_8_Low_2;
          if (ns_4_St_8_Low_2_1) {
            ns_4_St_8_Low_3_1_1 = ns_4_St_8_Low_3;
          } else {
            ns_4_St_8_Low_3_1_0 = ns_4_St_8_Low_3;
          };
        } else {
          ns_4_St_8_Low_2_0 = ns_4_St_8_Low_2;
          if (ns_4_St_8_Low_2_0) {
            ns_4_St_8_Low_3_0_1 = ns_4_St_8_Low_3;
          } else {
            ns_4_St_8_Low_3_0_0 = ns_4_St_8_Low_3;
          };
        };
      };
    } else {
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_990 = 0;
        v_1010 = true;
        v_997 = true;
        v_998 = true;
        v_999 = true;
      } else {
        s_St_8_Mid = 3;
        v_990 = s_St_8_Mid;
        nr_4_St_8_Mid = false;
        v_1010 = nr_4_St_8_Mid;
        ns_4_St_8_Mid_1 = true;
        v_997 = ns_4_St_8_Mid_1;
        ns_4_St_8_Mid_2 = false;
        v_998 = ns_4_St_8_Mid_2;
        ns_4_St_8_Mid_3 = false;
        v_999 = ns_4_St_8_Mid_3;
        if (ns_4_St_8_Mid_1) {
          ns_4_St_8_Mid_2_1 = ns_4_St_8_Mid_2;
          if (ns_4_St_8_Mid_2_1) {
            ns_4_St_8_Mid_3_1_1 = ns_4_St_8_Mid_3;
          } else {
            ns_4_St_8_Mid_3_1_0 = ns_4_St_8_Mid_3;
          };
        } else {
          ns_4_St_8_Mid_2_0 = ns_4_St_8_Mid_2;
          if (ns_4_St_8_Mid_2_0) {
            ns_4_St_8_Mid_3_0_1 = ns_4_St_8_Mid_3;
          } else {
            ns_4_St_8_Mid_3_0_0 = ns_4_St_8_Mid_3;
          };
        };
      };
      v_991 = v_990;
      v_1003 = v_997;
      v_1004 = v_998;
      v_1005 = v_999;
      v_1011 = v_1010;
    };
    s = v_991;
    ns_4_1 = v_1003;
    ns_4_2 = v_1004;
    ns_4_3 = v_1005;
    nr_4 = v_1011;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      v_993 = 0;
      v_1006 = true;
      v_1007 = true;
      v_1008 = true;
      v_1013 = true;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        s_St_8_Veryhigh = 5;
        v_992 = s_St_8_Veryhigh;
        nr_4_St_8_Veryhigh = false;
        v_1012 = nr_4_St_8_Veryhigh;
        ns_4_St_8_Veryhigh_1 = false;
        v_1000 = ns_4_St_8_Veryhigh_1;
        ns_4_St_8_Veryhigh_2 = false;
        v_1001 = ns_4_St_8_Veryhigh_2;
        ns_4_St_8_Veryhigh_3 = true;
        v_1002 = ns_4_St_8_Veryhigh_3;
      } else {
        s_St_8_Verylow = 1;
        nr_4_St_8_Verylow = false;
        ns_4_St_8_Verylow_1 = false;
        ns_4_St_8_Verylow_2 = false;
        ns_4_St_8_Verylow_3 = false;
        v_992 = s_St_8_Verylow;
        v_1012 = nr_4_St_8_Verylow;
        v_1000 = ns_4_St_8_Verylow_1;
        v_1001 = ns_4_St_8_Verylow_2;
        v_1002 = ns_4_St_8_Verylow_3;
      };
      v_993 = v_992;
      v_1006 = v_1000;
      v_1007 = v_1001;
      v_1008 = v_1002;
      v_1013 = v_1012;
    };
    s = v_993;
    ns_4_1 = v_1006;
    ns_4_2 = v_1007;
    ns_4_3 = v_1008;
    nr_4 = v_1013;
  };
  _out->agudo = s;
  v_223 = (_out->agudo>=1);
  v_225 = (v_223&&v_224);
  v_227 = (v_225&&v_226);
  v_234 = (_out->agudo>=2);
  v_236 = (v_234&&v_235);
  v_238 = (v_236&&v_237);
  v_245 = (_out->agudo==1);
  v_247 = (v_245&&v_246);
  v_249 = (v_247&&v_248);
  v_256 = (_out->agudo==1);
  v_258 = (v_256&&v_257);
  v_260 = (v_258&&v_259);
  v_268 = (_out->agudo==1);
  v_270 = (v_268&&v_269);
  v_272 = (v_270&&v_271);
  v_280 = (_out->agudo==1);
  v_282 = (v_280&&v_281);
  v_284 = (v_282&&v_283);
  v_292 = (_out->agudo>=1);
  v_294 = (v_292&&v_293);
  v_296 = (v_294&&v_295);
  v_305 = (_out->agudo==1);
  v_307 = (v_305&&v_306);
  v_309 = (v_307&&v_308);
  if (ns_4_1) {
    ns_4_2_1 = ns_4_2;
    if (ns_4_2_1) {
      ns_4_3_1_1 = ns_4_3;
    } else {
      ns_4_3_1_0 = ns_4_3;
    };
  } else {
    ns_4_2_0 = ns_4_2;
    if (ns_4_2_0) {
      ns_4_3_0_1 = ns_4_3;
    } else {
      ns_4_3_0_0 = ns_4_3;
    };
  };
  if (!(ck_13_1)) {
    if (!(ck_13_2_0)) {
      if (ck_13_3_0_0) {
        if (ns_4_St_8_Veryhigh_1) {
          ns_4_St_8_Veryhigh_2_1 = ns_4_St_8_Veryhigh_2;
          if (ns_4_St_8_Veryhigh_2_1) {
            ns_4_St_8_Veryhigh_3_1_1 = ns_4_St_8_Veryhigh_3;
          } else {
            ns_4_St_8_Veryhigh_3_1_0 = ns_4_St_8_Veryhigh_3;
          };
        } else {
          ns_4_St_8_Veryhigh_2_0 = ns_4_St_8_Veryhigh_2;
          if (ns_4_St_8_Veryhigh_2_0) {
            ns_4_St_8_Veryhigh_3_0_1 = ns_4_St_8_Veryhigh_3;
          } else {
            ns_4_St_8_Veryhigh_3_0_0 = ns_4_St_8_Veryhigh_3;
          };
        };
      } else {
        if (ns_4_St_8_Verylow_1) {
          ns_4_St_8_Verylow_2_1 = ns_4_St_8_Verylow_2;
          if (ns_4_St_8_Verylow_2_1) {
            ns_4_St_8_Verylow_3_1_1 = ns_4_St_8_Verylow_3;
          } else {
            ns_4_St_8_Verylow_3_1_0 = ns_4_St_8_Verylow_3;
          };
        } else {
          ns_4_St_8_Verylow_2_0 = ns_4_St_8_Verylow_2;
          if (ns_4_St_8_Verylow_2_0) {
            ns_4_St_8_Verylow_3_0_1 = ns_4_St_8_Verylow_3;
          } else {
            ns_4_St_8_Verylow_3_0_0 = ns_4_St_8_Verylow_3;
          };
        };
      };
    };
  };
  if (s_9_1) {
    s_9_2_1 = s_9_2;
    if (s_9_2_1) {
      s_9_3_1_1 = s_9_3;
    } else {
      s_9_3_1_0 = s_9_3;
    };
  } else {
    s_9_2_0 = s_9_2;
    if (s_9_2_0) {
      s_9_3_0_1 = s_9_3;
    } else {
      s_9_3_0_0 = s_9_3;
    };
  };
  if (!(ck_12_1)) {
    if (!(ck_12_2_0)) {
      if (ck_12_3_0_0) {
        if (s_9_St_8_Veryhigh_1) {
          s_9_St_8_Veryhigh_2_1 = s_9_St_8_Veryhigh_2;
          if (s_9_St_8_Veryhigh_2_1) {
            s_9_St_8_Veryhigh_3_1_1 = s_9_St_8_Veryhigh_3;
          } else {
            s_9_St_8_Veryhigh_3_1_0 = s_9_St_8_Veryhigh_3;
          };
        } else {
          s_9_St_8_Veryhigh_2_0 = s_9_St_8_Veryhigh_2;
          if (s_9_St_8_Veryhigh_2_0) {
            s_9_St_8_Veryhigh_3_0_1 = s_9_St_8_Veryhigh_3;
          } else {
            s_9_St_8_Veryhigh_3_0_0 = s_9_St_8_Veryhigh_3;
          };
        };
      } else {
        if (s_9_St_8_Verylow_1) {
          s_9_St_8_Verylow_2_1 = s_9_St_8_Verylow_2;
          if (s_9_St_8_Verylow_2_1) {
            s_9_St_8_Verylow_3_1_1 = s_9_St_8_Verylow_3;
          } else {
            s_9_St_8_Verylow_3_1_0 = s_9_St_8_Verylow_3;
          };
        } else {
          s_9_St_8_Verylow_2_0 = s_9_St_8_Verylow_2;
          if (s_9_St_8_Verylow_2_0) {
            s_9_St_8_Verylow_3_0_1 = s_9_St_8_Verylow_3;
          } else {
            s_9_St_8_Verylow_3_0_0 = s_9_St_8_Verylow_3;
          };
        };
      };
    };
  };
  if (self->ck_10_1) {
    if (c_2) {
      r_5_St_9_ON = true;
    } else {
      r_5_St_9_ON = self->pnr_5;
    };
    r_5 = r_5_St_9_ON;
    if (c_2) {
      s_10_St_9_ON_1 = false;
    } else {
      s_10_St_9_ON_1 = true;
    };
    s_10_1 = s_10_St_9_ON_1;
  } else {
    v_473 = !(c_2);
    if (v_473) {
      r_5_St_9_Off = true;
      s_10_St_9_Off_1 = true;
    } else {
      r_5_St_9_Off = self->pnr_5;
      s_10_St_9_Off_1 = false;
    };
    r_5 = r_5_St_9_Off;
    s_10_1 = s_10_St_9_Off_1;
  };
  ck_11_1 = s_10_1;
  if (ck_11_1) {
    ligado_2_St_9_ON = true;
    ligado_2 = ligado_2_St_9_ON;
    nr_5_St_9_ON = false;
    nr_5 = nr_5_St_9_ON;
    ns_5_St_9_ON_1 = true;
    ns_5_1 = ns_5_St_9_ON_1;
  } else {
    ligado_2_St_9_Off = false;
    nr_5_St_9_Off = false;
    ns_5_St_9_Off_1 = false;
    ligado_2 = ligado_2_St_9_Off;
    nr_5 = nr_5_St_9_Off;
    ns_5_1 = ns_5_St_9_Off_1;
  };
  _out->cx3 = ligado_2;
  v_232 = !(_out->cx3);
  v_278 = !(_out->cx3);
  v_290 = !(_out->cx3);
  v_303 = !(_out->cx3);
  if (self->ck_8_1) {
    if (c_1) {
      r_6_St_10_ON = true;
    } else {
      r_6_St_10_ON = self->pnr_6;
    };
    r_6 = r_6_St_10_ON;
    if (c_1) {
      s_11_St_10_ON_1 = false;
    } else {
      s_11_St_10_ON_1 = true;
    };
    s_11_1 = s_11_St_10_ON_1;
  } else {
    v_472 = !(c_1);
    if (v_472) {
      r_6_St_10_Off = true;
      s_11_St_10_Off_1 = true;
    } else {
      r_6_St_10_Off = self->pnr_6;
      s_11_St_10_Off_1 = false;
    };
    r_6 = r_6_St_10_Off;
    s_11_1 = s_11_St_10_Off_1;
  };
  ck_9_1 = s_11_1;
  if (ck_9_1) {
    ligado_1_St_10_ON = true;
    ligado_1 = ligado_1_St_10_ON;
    nr_6_St_10_ON = false;
    nr_6 = nr_6_St_10_ON;
    ns_6_St_10_ON_1 = true;
    ns_6_1 = ns_6_St_10_ON_1;
  } else {
    ligado_1_St_10_Off = false;
    nr_6_St_10_Off = false;
    ns_6_St_10_Off_1 = false;
    ligado_1 = ligado_1_St_10_Off;
    nr_6 = nr_6_St_10_Off;
    ns_6_1 = ns_6_St_10_Off_1;
  };
  _out->cx2 = ligado_1;
  v_242 = !(_out->cx2);
  v_265 = !(_out->cx2);
  v_288 = !(_out->cx2);
  v_301 = !(_out->cx2);
  if (self->ck_6_1) {
    if (c) {
      r_7_St_11_ON = true;
    } else {
      r_7_St_11_ON = self->pnr_7;
    };
    r_7 = r_7_St_11_ON;
    if (c) {
      s_12_St_11_ON_1 = false;
    } else {
      s_12_St_11_ON_1 = true;
    };
    s_12_1 = s_12_St_11_ON_1;
  } else {
    v_471 = !(c);
    if (v_471) {
      r_7_St_11_Off = true;
      s_12_St_11_Off_1 = true;
    } else {
      r_7_St_11_Off = self->pnr_7;
      s_12_St_11_Off_1 = false;
    };
    r_7 = r_7_St_11_Off;
    s_12_1 = s_12_St_11_Off_1;
  };
  ck_7_1 = s_12_1;
  if (ck_7_1) {
    ligado_St_11_ON = true;
    ligado = ligado_St_11_ON;
    nr_7_St_11_ON = false;
    nr_7 = nr_7_St_11_ON;
    ns_7_St_11_ON_1 = true;
    ns_7_1 = ns_7_St_11_ON_1;
  } else {
    ligado_St_11_Off = false;
    nr_7_St_11_Off = false;
    ns_7_St_11_Off_1 = false;
    ligado = ligado_St_11_Off;
    nr_7 = nr_7_St_11_Off;
    ns_7_1 = ns_7_St_11_Off_1;
  };
  _out->cx1 = ligado;
  v_221 = (_out->cx1&&_out->cx2);
  v_222 = (v_221&&_out->cx3);
  v_228 = (v_222&&v_227);
  v_231 = (_out->cx1&&_out->cx2);
  v_233 = (v_231&&v_232);
  v_239 = (v_233&&v_238);
  v_243 = (_out->cx1&&v_242);
  v_244 = (v_243&&_out->cx3);
  v_250 = (v_244&&v_249);
  v_253 = !(_out->cx1);
  v_254 = (v_253&&_out->cx2);
  v_255 = (v_254&&_out->cx3);
  v_261 = (v_255&&v_260);
  v_264 = !(_out->cx1);
  v_266 = (v_264&&v_265);
  v_267 = (v_266&&_out->cx3);
  v_273 = (v_267&&v_272);
  v_276 = !(_out->cx1);
  v_277 = (v_276&&_out->cx2);
  v_279 = (v_277&&v_278);
  v_285 = (v_279&&v_284);
  v_289 = (_out->cx1&&v_288);
  v_291 = (v_289&&v_290);
  v_297 = (v_291&&v_296);
  v_300 = !(_out->cx1);
  v_302 = (v_300&&v_301);
  v_304 = (v_302&&v_303);
  v_310 = (v_304&&v_309);
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        res_1_St_12_Classic = 1;
        nr_8_St_12_Classic = false;
        ns_8_St_12_Classic_1 = true;
        ns_8_St_12_Classic_2 = true;
        ns_8_St_12_Classic_3 = true;
        v_1037 = res_1_St_12_Classic;
        v_1061 = nr_8_St_12_Classic;
        v_1043 = ns_8_St_12_Classic_1;
        v_1044 = ns_8_St_12_Classic_2;
        v_1045 = ns_8_St_12_Classic_3;
        if (ns_8_St_12_Classic_1) {
          ns_8_St_12_Classic_2_1 = ns_8_St_12_Classic_2;
          if (ns_8_St_12_Classic_2_1) {
            ns_8_St_12_Classic_3_1_1 = ns_8_St_12_Classic_3;
          } else {
            ns_8_St_12_Classic_3_1_0 = ns_8_St_12_Classic_3;
          };
        } else {
          ns_8_St_12_Classic_2_0 = ns_8_St_12_Classic_2;
          if (ns_8_St_12_Classic_2_0) {
            ns_8_St_12_Classic_3_0_1 = ns_8_St_12_Classic_3;
          } else {
            ns_8_St_12_Classic_3_0_0 = ns_8_St_12_Classic_3;
          };
        };
      } else {
        res_1_St_12_Electronic = 2;
        v_1037 = res_1_St_12_Electronic;
        nr_8_St_12_Electronic = false;
        v_1061 = nr_8_St_12_Electronic;
        ns_8_St_12_Electronic_1 = true;
        v_1043 = ns_8_St_12_Electronic_1;
        ns_8_St_12_Electronic_2 = true;
        v_1044 = ns_8_St_12_Electronic_2;
        ns_8_St_12_Electronic_3 = false;
        v_1045 = ns_8_St_12_Electronic_3;
        if (ns_8_St_12_Electronic_1) {
          ns_8_St_12_Electronic_2_1 = ns_8_St_12_Electronic_2;
          if (ns_8_St_12_Electronic_2_1) {
            ns_8_St_12_Electronic_3_1_1 = ns_8_St_12_Electronic_3;
          } else {
            ns_8_St_12_Electronic_3_1_0 = ns_8_St_12_Electronic_3;
          };
        } else {
          ns_8_St_12_Electronic_2_0 = ns_8_St_12_Electronic_2;
          if (ns_8_St_12_Electronic_2_0) {
            ns_8_St_12_Electronic_3_0_1 = ns_8_St_12_Electronic_3;
          } else {
            ns_8_St_12_Electronic_3_0_0 = ns_8_St_12_Electronic_3;
          };
        };
      };
      v_1039 = v_1037;
      v_1055 = v_1043;
      v_1056 = v_1044;
      v_1057 = v_1045;
      v_1063 = v_1061;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        res_1_St_12_Funk = 3;
        nr_8_St_12_Funk = false;
        ns_8_St_12_Funk_1 = true;
        ns_8_St_12_Funk_2 = false;
        ns_8_St_12_Funk_3 = true;
        v_1038 = res_1_St_12_Funk;
        v_1062 = nr_8_St_12_Funk;
        v_1046 = ns_8_St_12_Funk_1;
        v_1047 = ns_8_St_12_Funk_2;
        v_1048 = ns_8_St_12_Funk_3;
      } else {
        res_1_St_12_Indie = 4;
        v_1038 = res_1_St_12_Indie;
        nr_8_St_12_Indie = false;
        v_1062 = nr_8_St_12_Indie;
        ns_8_St_12_Indie_1 = true;
        v_1046 = ns_8_St_12_Indie_1;
        ns_8_St_12_Indie_2 = false;
        v_1047 = ns_8_St_12_Indie_2;
        ns_8_St_12_Indie_3 = false;
        v_1048 = ns_8_St_12_Indie_3;
      };
      v_1039 = v_1038;
      v_1055 = v_1046;
      v_1056 = v_1047;
      v_1057 = v_1048;
      v_1063 = v_1062;
      if (ck_5_3_1_0) {
        if (ns_8_St_12_Funk_1) {
          ns_8_St_12_Funk_2_1 = ns_8_St_12_Funk_2;
          if (ns_8_St_12_Funk_2_1) {
            ns_8_St_12_Funk_3_1_1 = ns_8_St_12_Funk_3;
          } else {
            ns_8_St_12_Funk_3_1_0 = ns_8_St_12_Funk_3;
          };
        } else {
          ns_8_St_12_Funk_2_0 = ns_8_St_12_Funk_2;
          if (ns_8_St_12_Funk_2_0) {
            ns_8_St_12_Funk_3_0_1 = ns_8_St_12_Funk_3;
          } else {
            ns_8_St_12_Funk_3_0_0 = ns_8_St_12_Funk_3;
          };
        };
      } else {
        if (ns_8_St_12_Indie_1) {
          ns_8_St_12_Indie_2_1 = ns_8_St_12_Indie_2;
          if (ns_8_St_12_Indie_2_1) {
            ns_8_St_12_Indie_3_1_1 = ns_8_St_12_Indie_3;
          } else {
            ns_8_St_12_Indie_3_1_0 = ns_8_St_12_Indie_3;
          };
        } else {
          ns_8_St_12_Indie_2_0 = ns_8_St_12_Indie_2;
          if (ns_8_St_12_Indie_2_0) {
            ns_8_St_12_Indie_3_0_1 = ns_8_St_12_Indie_3;
          } else {
            ns_8_St_12_Indie_3_0_0 = ns_8_St_12_Indie_3;
          };
        };
      };
    };
    res_1 = v_1039;
    ns_8_1 = v_1055;
    ns_8_2 = v_1056;
    ns_8_3 = v_1057;
    nr_8 = v_1063;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      if (ck_5_3_0_1) {
        res_1_St_12_Off = 0;
        nr_8_St_12_Off = false;
        ns_8_St_12_Off_1 = false;
        ns_8_St_12_Off_2 = true;
        ns_8_St_12_Off_3 = true;
        v_1040 = res_1_St_12_Off;
        v_1064 = nr_8_St_12_Off;
        v_1049 = ns_8_St_12_Off_1;
        v_1050 = ns_8_St_12_Off_2;
        v_1051 = ns_8_St_12_Off_3;
        if (ns_8_St_12_Off_1) {
          ns_8_St_12_Off_2_1 = ns_8_St_12_Off_2;
          if (ns_8_St_12_Off_2_1) {
            ns_8_St_12_Off_3_1_1 = ns_8_St_12_Off_3;
          } else {
            ns_8_St_12_Off_3_1_0 = ns_8_St_12_Off_3;
          };
        } else {
          ns_8_St_12_Off_2_0 = ns_8_St_12_Off_2;
          if (ns_8_St_12_Off_2_0) {
            ns_8_St_12_Off_3_0_1 = ns_8_St_12_Off_3;
          } else {
            ns_8_St_12_Off_3_0_0 = ns_8_St_12_Off_3;
          };
        };
      } else {
        res_1_St_12_POP = 5;
        v_1040 = res_1_St_12_POP;
        nr_8_St_12_POP = false;
        v_1064 = nr_8_St_12_POP;
        ns_8_St_12_POP_1 = false;
        v_1049 = ns_8_St_12_POP_1;
        ns_8_St_12_POP_2 = true;
        v_1050 = ns_8_St_12_POP_2;
        ns_8_St_12_POP_3 = false;
        v_1051 = ns_8_St_12_POP_3;
        if (ns_8_St_12_POP_1) {
          ns_8_St_12_POP_2_1 = ns_8_St_12_POP_2;
          if (ns_8_St_12_POP_2_1) {
            ns_8_St_12_POP_3_1_1 = ns_8_St_12_POP_3;
          } else {
            ns_8_St_12_POP_3_1_0 = ns_8_St_12_POP_3;
          };
        } else {
          ns_8_St_12_POP_2_0 = ns_8_St_12_POP_2;
          if (ns_8_St_12_POP_2_0) {
            ns_8_St_12_POP_3_0_1 = ns_8_St_12_POP_3;
          } else {
            ns_8_St_12_POP_3_0_0 = ns_8_St_12_POP_3;
          };
        };
      };
      v_1042 = v_1040;
      v_1058 = v_1049;
      v_1059 = v_1050;
      v_1060 = v_1051;
      v_1066 = v_1064;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        res_1_St_12_Regue = 6;
        nr_8_St_12_Regue = false;
        ns_8_St_12_Regue_1 = false;
        ns_8_St_12_Regue_2 = false;
        ns_8_St_12_Regue_3 = true;
        v_1041 = res_1_St_12_Regue;
        v_1065 = nr_8_St_12_Regue;
        v_1052 = ns_8_St_12_Regue_1;
        v_1053 = ns_8_St_12_Regue_2;
        v_1054 = ns_8_St_12_Regue_3;
      } else {
        res_1_St_12_Rock = 7;
        v_1041 = res_1_St_12_Rock;
        nr_8_St_12_Rock = false;
        v_1065 = nr_8_St_12_Rock;
        ns_8_St_12_Rock_1 = false;
        v_1052 = ns_8_St_12_Rock_1;
        ns_8_St_12_Rock_2 = false;
        v_1053 = ns_8_St_12_Rock_2;
        ns_8_St_12_Rock_3 = false;
        v_1054 = ns_8_St_12_Rock_3;
      };
      v_1042 = v_1041;
      v_1058 = v_1052;
      v_1059 = v_1053;
      v_1060 = v_1054;
      v_1066 = v_1065;
    };
    res_1 = v_1042;
    ns_8_1 = v_1058;
    ns_8_2 = v_1059;
    ns_8_3 = v_1060;
    nr_8 = v_1066;
  };
  _out->res = res_1;
  v_219 = (_out->res==7);
  v_220 = !(v_219);
  ruleRock = (v_220||v_228);
  v_229 = (_out->res==6);
  v_230 = !(v_229);
  ruleRegue = (v_230||v_239);
  v_240 = (_out->res==5);
  v_241 = !(v_240);
  rulePOP = (v_241||v_250);
  v_251 = (_out->res==4);
  v_252 = !(v_251);
  ruleIndie = (v_252||v_261);
  v_262 = (_out->res==3);
  v_263 = !(v_262);
  ruleFunk = (v_263||v_273);
  v_274 = (_out->res==2);
  v_275 = !(v_274);
  ruleElectron = (v_275||v_285);
  v_286 = (_out->res==1);
  v_287 = !(v_286);
  ruleClassic = (v_287||v_297);
  v_298 = (_out->res==0);
  v_299 = !(v_298);
  ruleOff = (v_299||v_310);
  v_311 = (ruleOff&&ruleClassic);
  v_312 = (v_311&&ruleElectron);
  v_313 = (v_312&&ruleFunk);
  v_314 = (v_313&&ruleIndie);
  v_315 = (v_314&&rulePOP);
  v_316 = (v_315&&ruleRegue);
  v_317 = (v_316&&ruleRock);
  v_318 = (v_317&&ruleVol);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
    if (ns_8_2_1) {
      ns_8_3_1_1 = ns_8_3;
    } else {
      ns_8_3_1_0 = ns_8_3;
    };
  } else {
    ns_8_2_0 = ns_8_2;
    if (ns_8_2_0) {
      ns_8_3_0_1 = ns_8_3;
    } else {
      ns_8_3_0_0 = ns_8_3;
    };
  };
  if (!(ck_5_1)) {
    if (!(ck_5_2_0)) {
      if (ck_5_3_0_0) {
        if (ns_8_St_12_Regue_1) {
          ns_8_St_12_Regue_2_1 = ns_8_St_12_Regue_2;
          if (ns_8_St_12_Regue_2_1) {
            ns_8_St_12_Regue_3_1_1 = ns_8_St_12_Regue_3;
          } else {
            ns_8_St_12_Regue_3_1_0 = ns_8_St_12_Regue_3;
          };
        } else {
          ns_8_St_12_Regue_2_0 = ns_8_St_12_Regue_2;
          if (ns_8_St_12_Regue_2_0) {
            ns_8_St_12_Regue_3_0_1 = ns_8_St_12_Regue_3;
          } else {
            ns_8_St_12_Regue_3_0_0 = ns_8_St_12_Regue_3;
          };
        };
      } else {
        if (ns_8_St_12_Rock_1) {
          ns_8_St_12_Rock_2_1 = ns_8_St_12_Rock_2;
          if (ns_8_St_12_Rock_2_1) {
            ns_8_St_12_Rock_3_1_1 = ns_8_St_12_Rock_3;
          } else {
            ns_8_St_12_Rock_3_1_0 = ns_8_St_12_Rock_3;
          };
        } else {
          ns_8_St_12_Rock_2_0 = ns_8_St_12_Rock_2;
          if (ns_8_St_12_Rock_2_0) {
            ns_8_St_12_Rock_3_0_1 = ns_8_St_12_Rock_3;
          } else {
            ns_8_St_12_Rock_3_0_0 = ns_8_St_12_Rock_3;
          };
        };
      };
    };
  };
  if (s_13_1) {
    s_13_2_1 = s_13_2;
    if (s_13_2_1) {
      s_13_3_1_1 = s_13_3;
    } else {
      s_13_3_1_0 = s_13_3;
    };
  } else {
    s_13_2_0 = s_13_2;
    if (s_13_2_0) {
      s_13_3_0_1 = s_13_3;
    } else {
      s_13_3_0_0 = s_13_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (v_345_1) {
          v_345_2_1 = v_345_2;
          if (v_345_2_1) {
            v_345_3_1_1 = v_345_3;
          } else {
            v_345_3_1_0 = v_345_3;
          };
        } else {
          v_345_2_0 = v_345_2;
          if (v_345_2_0) {
            v_345_3_0_1 = v_345_3;
          } else {
            v_345_3_0_0 = v_345_3;
          };
        };
        if (v_347_1) {
          v_347_2_1 = v_347_2;
          if (v_347_2_1) {
            v_347_3_1_1 = v_347_3;
          } else {
            v_347_3_1_0 = v_347_3;
          };
        } else {
          v_347_2_0 = v_347_2;
          if (v_347_2_0) {
            v_347_3_0_1 = v_347_3;
          } else {
            v_347_3_0_0 = v_347_3;
          };
        };
        if (v_349_1) {
          v_349_2_1 = v_349_2;
          if (v_349_2_1) {
            v_349_3_1_1 = v_349_3;
          } else {
            v_349_3_1_0 = v_349_3;
          };
        } else {
          v_349_2_0 = v_349_2;
          if (v_349_2_0) {
            v_349_3_0_1 = v_349_3;
          } else {
            v_349_3_0_0 = v_349_3;
          };
        };
        if (v_351_1) {
          v_351_2_1 = v_351_2;
          if (v_351_2_1) {
            v_351_3_1_1 = v_351_3;
          } else {
            v_351_3_1_0 = v_351_3;
          };
        } else {
          v_351_2_0 = v_351_2;
          if (v_351_2_0) {
            v_351_3_0_1 = v_351_3;
          } else {
            v_351_3_0_0 = v_351_3;
          };
        };
        if (v_353_1) {
          v_353_2_1 = v_353_2;
          if (v_353_2_1) {
            v_353_3_1_1 = v_353_3;
          } else {
            v_353_3_1_0 = v_353_3;
          };
        } else {
          v_353_2_0 = v_353_2;
          if (v_353_2_0) {
            v_353_3_0_1 = v_353_3;
          } else {
            v_353_3_0_0 = v_353_3;
          };
        };
        if (v_355_1) {
          v_355_2_1 = v_355_2;
          if (v_355_2_1) {
            v_355_3_1_1 = v_355_3;
          } else {
            v_355_3_1_0 = v_355_3;
          };
        } else {
          v_355_2_0 = v_355_2;
          if (v_355_2_0) {
            v_355_3_0_1 = v_355_3;
          } else {
            v_355_3_0_0 = v_355_3;
          };
        };
        if (s_13_St_12_Regue_1) {
          s_13_St_12_Regue_2_1 = s_13_St_12_Regue_2;
          if (s_13_St_12_Regue_2_1) {
            s_13_St_12_Regue_3_1_1 = s_13_St_12_Regue_3;
          } else {
            s_13_St_12_Regue_3_1_0 = s_13_St_12_Regue_3;
          };
        } else {
          s_13_St_12_Regue_2_0 = s_13_St_12_Regue_2;
          if (s_13_St_12_Regue_2_0) {
            s_13_St_12_Regue_3_0_1 = s_13_St_12_Regue_3;
          } else {
            s_13_St_12_Regue_3_0_0 = s_13_St_12_Regue_3;
          };
        };
      } else {
        if (v_326_1) {
          v_326_2_1 = v_326_2;
          if (v_326_2_1) {
            v_326_3_1_1 = v_326_3;
          } else {
            v_326_3_1_0 = v_326_3;
          };
        } else {
          v_326_2_0 = v_326_2;
          if (v_326_2_0) {
            v_326_3_0_1 = v_326_3;
          } else {
            v_326_3_0_0 = v_326_3;
          };
        };
        if (v_328_1) {
          v_328_2_1 = v_328_2;
          if (v_328_2_1) {
            v_328_3_1_1 = v_328_3;
          } else {
            v_328_3_1_0 = v_328_3;
          };
        } else {
          v_328_2_0 = v_328_2;
          if (v_328_2_0) {
            v_328_3_0_1 = v_328_3;
          } else {
            v_328_3_0_0 = v_328_3;
          };
        };
        if (v_330_1) {
          v_330_2_1 = v_330_2;
          if (v_330_2_1) {
            v_330_3_1_1 = v_330_3;
          } else {
            v_330_3_1_0 = v_330_3;
          };
        } else {
          v_330_2_0 = v_330_2;
          if (v_330_2_0) {
            v_330_3_0_1 = v_330_3;
          } else {
            v_330_3_0_0 = v_330_3;
          };
        };
        if (v_332_1) {
          v_332_2_1 = v_332_2;
          if (v_332_2_1) {
            v_332_3_1_1 = v_332_3;
          } else {
            v_332_3_1_0 = v_332_3;
          };
        } else {
          v_332_2_0 = v_332_2;
          if (v_332_2_0) {
            v_332_3_0_1 = v_332_3;
          } else {
            v_332_3_0_0 = v_332_3;
          };
        };
        if (v_334_1) {
          v_334_2_1 = v_334_2;
          if (v_334_2_1) {
            v_334_3_1_1 = v_334_3;
          } else {
            v_334_3_1_0 = v_334_3;
          };
        } else {
          v_334_2_0 = v_334_2;
          if (v_334_2_0) {
            v_334_3_0_1 = v_334_3;
          } else {
            v_334_3_0_0 = v_334_3;
          };
        };
        if (v_336_1) {
          v_336_2_1 = v_336_2;
          if (v_336_2_1) {
            v_336_3_1_1 = v_336_3;
          } else {
            v_336_3_1_0 = v_336_3;
          };
        } else {
          v_336_2_0 = v_336_2;
          if (v_336_2_0) {
            v_336_3_0_1 = v_336_3;
          } else {
            v_336_3_0_0 = v_336_3;
          };
        };
        if (s_13_St_12_Rock_1) {
          s_13_St_12_Rock_2_1 = s_13_St_12_Rock_2;
          if (s_13_St_12_Rock_2_1) {
            s_13_St_12_Rock_3_1_1 = s_13_St_12_Rock_3;
          } else {
            s_13_St_12_Rock_3_1_0 = s_13_St_12_Rock_3;
          };
        } else {
          s_13_St_12_Rock_2_0 = s_13_St_12_Rock_2;
          if (s_13_St_12_Rock_2_0) {
            s_13_St_12_Rock_3_0_1 = s_13_St_12_Rock_3;
          } else {
            s_13_St_12_Rock_3_0_0 = s_13_St_12_Rock_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->ck_20_1 = ns_1_4;
  self->pnr_1 = nr_1;
  self->v_870 = ns_1_1;
  self->v_871 = ns_1_2;
  self->v_872 = ns_1_3;
  self->pnr_2 = nr_2;
  self->v_918 = ns_2_1;
  self->v_919 = ns_2_2;
  self->v_920 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_966 = ns_3_1;
  self->v_967 = ns_3_2;
  self->v_968 = ns_3_3;
  self->pnr_4 = nr_4;
  self->v_1014 = ns_4_1;
  self->v_1015 = ns_4_2;
  self->v_1016 = ns_4_3;
  self->pnr_5 = nr_5;
  self->ck_10_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_8_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_6_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->v_1067 = ns_8_1;
  self->v_1068 = ns_8_2;
  self->v_1069 = ns_8_3;;
}

