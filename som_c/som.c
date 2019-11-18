/* --- Generated the 17/11/2019 at 21:34 --- */
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

void Som__hora_reset(Som__hora_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Som__hora_step(int permitido, int chora, Som__hora_out* _out,
                    Som__hora_mem* self) {
  
  int nr_St_1_Limitado;
  int ns_St_1_Limitado_1;
  int t_St_1_Limitado;
  int nr_St_1_Livre;
  int ns_St_1_Livre_1;
  int t_St_1_Livre;
  int ck_2_1;
  int v_1;
  int v;
  int r_St_1_Limitado;
  int s_St_1_Limitado_1;
  int r_St_1_Livre;
  int s_St_1_Livre_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = (permitido&&chora);
    if (v) {
      r_St_1_Limitado = true;
    } else {
      r_St_1_Limitado = self->pnr;
    };
    r = r_St_1_Limitado;
    if (v) {
      s_St_1_Limitado_1 = false;
    } else {
      s_St_1_Limitado_1 = true;
    };
    s_1 = s_St_1_Limitado_1;
  } else {
    v_1 = (permitido&&chora);
    if (v_1) {
      r_St_1_Livre = true;
      s_St_1_Livre_1 = true;
    } else {
      r_St_1_Livre = self->pnr;
      s_St_1_Livre_1 = false;
    };
    r = r_St_1_Livre;
    s_1 = s_St_1_Livre_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    t_St_1_Limitado = 2;
    _out->t = t_St_1_Limitado;
    nr_St_1_Limitado = false;
    nr = nr_St_1_Limitado;
    ns_St_1_Limitado_1 = true;
    ns_1 = ns_St_1_Limitado_1;
  } else {
    t_St_1_Livre = 1;
    nr_St_1_Livre = false;
    ns_St_1_Livre_1 = false;
    _out->t = t_St_1_Livre;
    nr = nr_St_1_Livre;
    ns_1 = ns_St_1_Livre_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Som__equalisador_reset(Som__equalisador_mem* self) {
  self->pnr = false;
  self->v_762 = false;
  self->v_763 = false;
  self->v_764 = false;
}

void Som__equalisador_step(int cvl, int clo, int cmi, int chi, int cvh,
                           int c, int up, int down,
                           Som__equalisador_out* _out,
                           Som__equalisador_mem* self) {
  
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
  int v_739;
  int v_738;
  int v_737;
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
  int v_767;
  int v_766;
  int v_765;
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
  ck_1 = self->v_762;
  ck_2 = self->v_763;
  ck_3_4 = self->v_764;
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
        v_780 = r_St_2_High;
        if (v_13) {
          s_4_St_2_High_1 = false;
        } else {
          s_4_St_2_High_1 = v_25_1;
        };
        v_765 = s_4_St_2_High_1;
        if (v_13) {
          s_4_St_2_High_2 = false;
        } else {
          s_4_St_2_High_2 = v_25_2;
        };
        v_766 = s_4_St_2_High_2;
        if (v_13) {
          s_4_St_2_High_3 = false;
        } else {
          s_4_St_2_High_3 = v_25_3;
        };
        v_767 = s_4_St_2_High_3;
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
        v_780 = r_St_2_Low;
        v_765 = s_4_St_2_Low_1;
        v_766 = s_4_St_2_Low_2;
        v_767 = s_4_St_2_Low_3;
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
      v_774 = v_765;
      v_775 = v_766;
      v_776 = v_767;
      v_782 = v_780;
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
        v_781 = true;
        v_768 = true;
        v_769 = true;
        v_770 = true;
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
        v_781 = r_St_2_Mid;
        if (v_27) {
          s_4_St_2_Mid_1 = false;
        } else {
          s_4_St_2_Mid_1 = v_39_1;
        };
        v_768 = s_4_St_2_Mid_1;
        if (v_27) {
          s_4_St_2_Mid_2 = false;
        } else {
          s_4_St_2_Mid_2 = v_39_2;
        };
        v_769 = s_4_St_2_Mid_2;
        if (v_27) {
          s_4_St_2_Mid_3 = false;
        } else {
          s_4_St_2_Mid_3 = v_39_3;
        };
        v_770 = s_4_St_2_Mid_3;
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
      v_774 = v_768;
      v_775 = v_769;
      v_776 = v_770;
      v_782 = v_781;
    };
    s_4_1 = v_774;
    s_4_2 = v_775;
    s_4_3 = v_776;
    r = v_782;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      v_777 = true;
      v_778 = true;
      v_779 = true;
      v_784 = true;
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
        v_783 = r_St_2_Veryhigh;
        if (v) {
          s_4_St_2_Veryhigh_1 = false;
        } else {
          s_4_St_2_Veryhigh_1 = v_11_1;
        };
        v_771 = s_4_St_2_Veryhigh_1;
        if (v) {
          s_4_St_2_Veryhigh_2 = false;
        } else {
          s_4_St_2_Veryhigh_2 = v_11_2;
        };
        v_772 = s_4_St_2_Veryhigh_2;
        if (v) {
          s_4_St_2_Veryhigh_3 = false;
        } else {
          s_4_St_2_Veryhigh_3 = v_11_3;
        };
        v_773 = s_4_St_2_Veryhigh_3;
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
        v_783 = r_St_2_Verylow;
        v_771 = s_4_St_2_Verylow_1;
        v_772 = s_4_St_2_Verylow_2;
        v_773 = s_4_St_2_Verylow_3;
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
      v_777 = v_771;
      v_778 = v_772;
      v_779 = v_773;
      v_784 = v_783;
    };
    s_4_1 = v_777;
    s_4_2 = v_778;
    s_4_3 = v_779;
    r = v_784;
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
        v_737 = s_St_2_High;
        nr_St_2_High = false;
        v_757 = nr_St_2_High;
        ns_St_2_High_1 = true;
        v_742 = ns_St_2_High_1;
        ns_St_2_High_2 = true;
        v_743 = ns_St_2_High_2;
        ns_St_2_High_3 = true;
        v_744 = ns_St_2_High_3;
      } else {
        s_St_2_Low = 2;
        nr_St_2_Low = false;
        ns_St_2_Low_1 = true;
        ns_St_2_Low_2 = true;
        ns_St_2_Low_3 = false;
        v_737 = s_St_2_Low;
        v_757 = nr_St_2_Low;
        v_742 = ns_St_2_Low_1;
        v_743 = ns_St_2_Low_2;
        v_744 = ns_St_2_Low_3;
      };
      v_739 = v_737;
      v_751 = v_742;
      v_752 = v_743;
      v_753 = v_744;
      v_759 = v_757;
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
        v_738 = 0;
        v_758 = true;
        v_745 = true;
        v_746 = true;
        v_747 = true;
      } else {
        s_St_2_Mid = 3;
        v_738 = s_St_2_Mid;
        nr_St_2_Mid = false;
        v_758 = nr_St_2_Mid;
        ns_St_2_Mid_1 = true;
        v_745 = ns_St_2_Mid_1;
        ns_St_2_Mid_2 = false;
        v_746 = ns_St_2_Mid_2;
        ns_St_2_Mid_3 = false;
        v_747 = ns_St_2_Mid_3;
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
      v_739 = v_738;
      v_751 = v_745;
      v_752 = v_746;
      v_753 = v_747;
      v_759 = v_758;
    };
    _out->s = v_739;
    ns_1 = v_751;
    ns_2 = v_752;
    ns_3 = v_753;
    nr = v_759;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      v_741 = 0;
      v_754 = true;
      v_755 = true;
      v_756 = true;
      v_761 = true;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        s_St_2_Veryhigh = 5;
        v_740 = s_St_2_Veryhigh;
        nr_St_2_Veryhigh = false;
        v_760 = nr_St_2_Veryhigh;
        ns_St_2_Veryhigh_1 = false;
        v_748 = ns_St_2_Veryhigh_1;
        ns_St_2_Veryhigh_2 = false;
        v_749 = ns_St_2_Veryhigh_2;
        ns_St_2_Veryhigh_3 = true;
        v_750 = ns_St_2_Veryhigh_3;
      } else {
        s_St_2_Verylow = 1;
        nr_St_2_Verylow = false;
        ns_St_2_Verylow_1 = false;
        ns_St_2_Verylow_2 = false;
        ns_St_2_Verylow_3 = false;
        v_740 = s_St_2_Verylow;
        v_760 = nr_St_2_Verylow;
        v_748 = ns_St_2_Verylow_1;
        v_749 = ns_St_2_Verylow_2;
        v_750 = ns_St_2_Verylow_3;
      };
      v_741 = v_740;
      v_754 = v_748;
      v_755 = v_749;
      v_756 = v_750;
      v_761 = v_760;
    };
    _out->s = v_741;
    ns_1 = v_754;
    ns_2 = v_755;
    ns_3 = v_756;
    nr = v_761;
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
  self->v_762 = ns_1;
  self->v_763 = ns_2;
  self->v_764 = ns_3;;
}

void Som__music_reset(Som__music_mem* self) {
  self->pnr = false;
  self->v_815 = false;
  self->v_816 = true;
  self->v_817 = true;
}

void Som__music_step(int tipo, Som__music_out* _out, Som__music_mem* self) {
  
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
  int v_787;
  int v_786;
  int v_785;
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
  int v_820;
  int v_819;
  int v_818;
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
  ck_1 = self->v_815;
  ck_2 = self->v_816;
  ck_3 = self->v_817;
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
        v_836 = r_St_3_Classic;
        v_818 = s_St_3_Classic_1;
        v_819 = s_St_3_Classic_2;
        v_820 = s_St_3_Classic_3;
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
        v_836 = r_St_3_Electronic;
        if (v_161) {
          s_St_3_Electronic_1 = false;
        } else {
          s_St_3_Electronic_1 = v_178_1;
        };
        v_818 = s_St_3_Electronic_1;
        if (v_161) {
          s_St_3_Electronic_2 = true;
        } else {
          s_St_3_Electronic_2 = v_178_2;
        };
        v_819 = s_St_3_Electronic_2;
        if (v_161) {
          s_St_3_Electronic_3 = true;
        } else {
          s_St_3_Electronic_3 = v_178_3;
        };
        v_820 = s_St_3_Electronic_3;
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
      v_830 = v_818;
      v_831 = v_819;
      v_832 = v_820;
      v_838 = v_836;
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
        v_837 = r_St_3_Funk;
        v_821 = s_St_3_Funk_1;
        v_822 = s_St_3_Funk_2;
        v_823 = s_St_3_Funk_3;
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
        v_837 = r_St_3_Indie;
        if (v_123) {
          s_St_3_Indie_1 = false;
        } else {
          s_St_3_Indie_1 = v_140_1;
        };
        v_821 = s_St_3_Indie_1;
        if (v_123) {
          s_St_3_Indie_2 = true;
        } else {
          s_St_3_Indie_2 = v_140_2;
        };
        v_822 = s_St_3_Indie_2;
        if (v_123) {
          s_St_3_Indie_3 = true;
        } else {
          s_St_3_Indie_3 = v_140_3;
        };
        v_823 = s_St_3_Indie_3;
      };
      v_830 = v_821;
      v_831 = v_822;
      v_832 = v_823;
      v_838 = v_837;
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
    s_1 = v_830;
    s_2 = v_831;
    s_3 = v_832;
    r = v_838;
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
        v_839 = r_St_3_Off;
        v_824 = s_St_3_Off_1;
        v_825 = s_St_3_Off_2;
        v_826 = s_St_3_Off_3;
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
        v_839 = r_St_3_POP;
        if (v_104) {
          s_St_3_POP_1 = false;
        } else {
          s_St_3_POP_1 = v_121_1;
        };
        v_824 = s_St_3_POP_1;
        if (v_104) {
          s_St_3_POP_2 = true;
        } else {
          s_St_3_POP_2 = v_121_2;
        };
        v_825 = s_St_3_POP_2;
        if (v_104) {
          s_St_3_POP_3 = true;
        } else {
          s_St_3_POP_3 = v_121_3;
        };
        v_826 = s_St_3_POP_3;
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
      v_833 = v_824;
      v_834 = v_825;
      v_835 = v_826;
      v_841 = v_839;
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
        v_840 = r_St_3_Regue;
        v_827 = s_St_3_Regue_1;
        v_828 = s_St_3_Regue_2;
        v_829 = s_St_3_Regue_3;
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
        v_840 = r_St_3_Rock;
        if (v) {
          s_St_3_Rock_1 = false;
        } else {
          s_St_3_Rock_1 = v_83_1;
        };
        v_827 = s_St_3_Rock_1;
        if (v) {
          s_St_3_Rock_2 = true;
        } else {
          s_St_3_Rock_2 = v_83_2;
        };
        v_828 = s_St_3_Rock_2;
        if (v) {
          s_St_3_Rock_3 = true;
        } else {
          s_St_3_Rock_3 = v_83_3;
        };
        v_829 = s_St_3_Rock_3;
      };
      v_833 = v_827;
      v_834 = v_828;
      v_835 = v_829;
      v_841 = v_840;
    };
    s_1 = v_833;
    s_2 = v_834;
    s_3 = v_835;
    r = v_841;
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
        v_785 = res_St_3_Classic;
        v_809 = nr_St_3_Classic;
        v_791 = ns_St_3_Classic_1;
        v_792 = ns_St_3_Classic_2;
        v_793 = ns_St_3_Classic_3;
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
        v_785 = res_St_3_Electronic;
        nr_St_3_Electronic = false;
        v_809 = nr_St_3_Electronic;
        ns_St_3_Electronic_1 = true;
        v_791 = ns_St_3_Electronic_1;
        ns_St_3_Electronic_2 = true;
        v_792 = ns_St_3_Electronic_2;
        ns_St_3_Electronic_3 = false;
        v_793 = ns_St_3_Electronic_3;
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
      v_787 = v_785;
      v_803 = v_791;
      v_804 = v_792;
      v_805 = v_793;
      v_811 = v_809;
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        res_St_3_Funk = 3;
        nr_St_3_Funk = false;
        ns_St_3_Funk_1 = true;
        ns_St_3_Funk_2 = false;
        ns_St_3_Funk_3 = true;
        v_786 = res_St_3_Funk;
        v_810 = nr_St_3_Funk;
        v_794 = ns_St_3_Funk_1;
        v_795 = ns_St_3_Funk_2;
        v_796 = ns_St_3_Funk_3;
      } else {
        res_St_3_Indie = 4;
        v_786 = res_St_3_Indie;
        nr_St_3_Indie = false;
        v_810 = nr_St_3_Indie;
        ns_St_3_Indie_1 = true;
        v_794 = ns_St_3_Indie_1;
        ns_St_3_Indie_2 = false;
        v_795 = ns_St_3_Indie_2;
        ns_St_3_Indie_3 = false;
        v_796 = ns_St_3_Indie_3;
      };
      v_787 = v_786;
      v_803 = v_794;
      v_804 = v_795;
      v_805 = v_796;
      v_811 = v_810;
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
    _out->res = v_787;
    ns_1 = v_803;
    ns_2 = v_804;
    ns_3 = v_805;
    nr = v_811;
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
        v_788 = res_St_3_Off;
        v_812 = nr_St_3_Off;
        v_797 = ns_St_3_Off_1;
        v_798 = ns_St_3_Off_2;
        v_799 = ns_St_3_Off_3;
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
        v_788 = res_St_3_POP;
        nr_St_3_POP = false;
        v_812 = nr_St_3_POP;
        ns_St_3_POP_1 = false;
        v_797 = ns_St_3_POP_1;
        ns_St_3_POP_2 = true;
        v_798 = ns_St_3_POP_2;
        ns_St_3_POP_3 = false;
        v_799 = ns_St_3_POP_3;
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
      v_790 = v_788;
      v_806 = v_797;
      v_807 = v_798;
      v_808 = v_799;
      v_814 = v_812;
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (ck_4_3_0_0) {
        res_St_3_Regue = 6;
        nr_St_3_Regue = false;
        ns_St_3_Regue_1 = false;
        ns_St_3_Regue_2 = false;
        ns_St_3_Regue_3 = true;
        v_789 = res_St_3_Regue;
        v_813 = nr_St_3_Regue;
        v_800 = ns_St_3_Regue_1;
        v_801 = ns_St_3_Regue_2;
        v_802 = ns_St_3_Regue_3;
      } else {
        res_St_3_Rock = 7;
        v_789 = res_St_3_Rock;
        nr_St_3_Rock = false;
        v_813 = nr_St_3_Rock;
        ns_St_3_Rock_1 = false;
        v_800 = ns_St_3_Rock_1;
        ns_St_3_Rock_2 = false;
        v_801 = ns_St_3_Rock_2;
        ns_St_3_Rock_3 = false;
        v_802 = ns_St_3_Rock_3;
      };
      v_790 = v_789;
      v_806 = v_800;
      v_807 = v_801;
      v_808 = v_802;
      v_814 = v_813;
    };
    _out->res = v_790;
    ns_1 = v_806;
    ns_2 = v_807;
    ns_3 = v_808;
    nr = v_814;
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
  self->v_815 = ns_1;
  self->v_816 = ns_2;
  self->v_817 = ns_3;;
}

void Som__main_reset(Som__main_mem* self) {
  self->pnr = false;
  self->v_867 = false;
  self->v_868 = false;
  self->v_869 = false;
  self->pnr_1 = false;
  self->v_915 = false;
  self->v_916 = false;
  self->v_917 = false;
  self->pnr_2 = false;
  self->v_963 = false;
  self->v_964 = false;
  self->v_965 = false;
  self->pnr_3 = false;
  self->v_1011 = false;
  self->v_1012 = false;
  self->v_1013 = false;
  self->pnr_4 = false;
  self->ck_10_1 = false;
  self->pnr_5 = false;
  self->ck_8_1 = false;
  self->pnr_6 = false;
  self->ck_6_1 = false;
  self->pnr_7 = false;
  self->v_1064 = false;
  self->v_1065 = true;
  self->v_1066 = true;
}

void Som__main_step(int tipo, int upa, int downa, int upm, int downm,
                    int upg, int downg, int upv, int downv,
                    Som__main_out* _out, Som__main_mem* self) {
  Main_controller__main_controller_out Main_controller__main_controller_out_st;
  
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
  int v_844;
  int v_843;
  int v_842;
  int ns_St_4_Veryhigh_2_0;
  int ns_St_4_Veryhigh_3_0_0;
  int ns_St_4_Veryhigh_3_0_1;
  int ns_St_4_Veryhigh_2_1;
  int ns_St_4_Veryhigh_3_1_0;
  int ns_St_4_Veryhigh_3_1_1;
  int ns_St_4_High_2_0;
  int ns_St_4_High_3_0_0;
  int ns_St_4_High_3_0_1;
  int ns_St_4_High_2_1;
  int ns_St_4_High_3_1_0;
  int ns_St_4_High_3_1_1;
  int ns_St_4_Mid_2_0;
  int ns_St_4_Mid_3_0_0;
  int ns_St_4_Mid_3_0_1;
  int ns_St_4_Mid_2_1;
  int ns_St_4_Mid_3_1_0;
  int ns_St_4_Mid_3_1_1;
  int ns_St_4_Low_2_0;
  int ns_St_4_Low_3_0_0;
  int ns_St_4_Low_3_0_1;
  int ns_St_4_Low_2_1;
  int ns_St_4_Low_3_1_0;
  int ns_St_4_Low_3_1_1;
  int ns_St_4_Verylow_2_0;
  int ns_St_4_Verylow_3_0_0;
  int ns_St_4_Verylow_3_0_1;
  int ns_St_4_Verylow_2_1;
  int ns_St_4_Verylow_3_1_0;
  int ns_St_4_Verylow_3_1_1;
  int ck_19_2_0;
  int ck_19_3_0_0;
  int ck_19_3_0_1;
  int ck_19_2_1;
  int ck_19_3_1_0;
  int ck_19_3_1_1;
  int nr_St_4_Veryhigh;
  int ns_St_4_Veryhigh_3;
  int ns_St_4_Veryhigh_2;
  int ns_St_4_Veryhigh_1;
  int s_3_St_4_Veryhigh;
  int nr_St_4_High;
  int ns_St_4_High_3;
  int ns_St_4_High_2;
  int ns_St_4_High_1;
  int s_3_St_4_High;
  int nr_St_4_Mid;
  int ns_St_4_Mid_3;
  int ns_St_4_Mid_2;
  int ns_St_4_Mid_1;
  int s_3_St_4_Mid;
  int nr_St_4_Low;
  int ns_St_4_Low_3;
  int ns_St_4_Low_2;
  int ns_St_4_Low_1;
  int s_3_St_4_Low;
  int nr_St_4_Verylow;
  int ns_St_4_Verylow_3;
  int ns_St_4_Verylow_2;
  int ns_St_4_Verylow_1;
  int s_3_St_4_Verylow;
  int ck_19_3;
  int ck_19_2;
  int ck_19_1;
  int v_735_2_0;
  int v_735_3_0_0;
  int v_735_3_0_1;
  int v_735_2_1;
  int v_735_3_1_0;
  int v_735_3_1_1;
  int v_733_2_0;
  int v_733_3_0_0;
  int v_733_3_0_1;
  int v_733_2_1;
  int v_733_3_1_0;
  int v_733_3_1_1;
  int v_731_2_0;
  int v_731_3_0_0;
  int v_731_3_0_1;
  int v_731_2_1;
  int v_731_3_1_0;
  int v_731_3_1_1;
  int v_736;
  int v_735_3;
  int v_735_2;
  int v_735_1;
  int v_734;
  int v_733_3;
  int v_733_2;
  int v_733_1;
  int v_732;
  int v_731_3;
  int v_731_2;
  int v_731_1;
  int v_730;
  int v_729;
  int v_728;
  int v_727;
  int v_726;
  int v_725;
  int v_723_2_0;
  int v_723_3_0_0;
  int v_723_3_0_1;
  int v_723_2_1;
  int v_723_3_1_0;
  int v_723_3_1_1;
  int v_721_2_0;
  int v_721_3_0_0;
  int v_721_3_0_1;
  int v_721_2_1;
  int v_721_3_1_0;
  int v_721_3_1_1;
  int v_719_2_0;
  int v_719_3_0_0;
  int v_719_3_0_1;
  int v_719_2_1;
  int v_719_3_1_0;
  int v_719_3_1_1;
  int v_724;
  int v_723_3;
  int v_723_2;
  int v_723_1;
  int v_722;
  int v_721_3;
  int v_721_2;
  int v_721_1;
  int v_720;
  int v_719_3;
  int v_719_2;
  int v_719_1;
  int v_718;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_711;
  int v_709_2_0;
  int v_709_3_0_0;
  int v_709_3_0_1;
  int v_709_2_1;
  int v_709_3_1_0;
  int v_709_3_1_1;
  int v_707_2_0;
  int v_707_3_0_0;
  int v_707_3_0_1;
  int v_707_2_1;
  int v_707_3_1_0;
  int v_707_3_1_1;
  int v_705_2_0;
  int v_705_3_0_0;
  int v_705_3_0_1;
  int v_705_2_1;
  int v_705_3_1_0;
  int v_705_3_1_1;
  int v_710;
  int v_709_3;
  int v_709_2;
  int v_709_1;
  int v_708;
  int v_707_3;
  int v_707_2;
  int v_707_1;
  int v_706;
  int v_705_3;
  int v_705_2;
  int v_705_1;
  int v_704;
  int v_703;
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_697;
  int v_695_2_0;
  int v_695_3_0_0;
  int v_695_3_0_1;
  int v_695_2_1;
  int v_695_3_1_0;
  int v_695_3_1_1;
  int v_693_2_0;
  int v_693_3_0_0;
  int v_693_3_0_1;
  int v_693_2_1;
  int v_693_3_1_0;
  int v_693_3_1_1;
  int v_691_2_0;
  int v_691_3_0_0;
  int v_691_3_0_1;
  int v_691_2_1;
  int v_691_3_1_0;
  int v_691_3_1_1;
  int v_696;
  int v_695_3;
  int v_695_2;
  int v_695_1;
  int v_694;
  int v_693_3;
  int v_693_2;
  int v_693_1;
  int v_692;
  int v_691_3;
  int v_691_2;
  int v_691_1;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_683;
  int v_681_2_0;
  int v_681_3_0_0;
  int v_681_3_0_1;
  int v_681_2_1;
  int v_681_3_1_0;
  int v_681_3_1_1;
  int v_679_2_0;
  int v_679_3_0_0;
  int v_679_3_0_1;
  int v_679_2_1;
  int v_679_3_1_0;
  int v_679_3_1_1;
  int v_677_2_0;
  int v_677_3_0_0;
  int v_677_3_0_1;
  int v_677_2_1;
  int v_677_3_1_0;
  int v_677_3_1_1;
  int v_682;
  int v_681_3;
  int v_681_2;
  int v_681_1;
  int v_680;
  int v_679_3;
  int v_679_2;
  int v_679_1;
  int v_678;
  int v_677_3;
  int v_677_2;
  int v_677_1;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
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
  int v_872;
  int v_871;
  int v_870;
  int s_5_St_4_Veryhigh_2_0;
  int s_5_St_4_Veryhigh_3_0_0;
  int s_5_St_4_Veryhigh_3_0_1;
  int s_5_St_4_Veryhigh_2_1;
  int s_5_St_4_Veryhigh_3_1_0;
  int s_5_St_4_Veryhigh_3_1_1;
  int s_5_St_4_High_2_0;
  int s_5_St_4_High_3_0_0;
  int s_5_St_4_High_3_0_1;
  int s_5_St_4_High_2_1;
  int s_5_St_4_High_3_1_0;
  int s_5_St_4_High_3_1_1;
  int s_5_St_4_Mid_2_0;
  int s_5_St_4_Mid_3_0_0;
  int s_5_St_4_Mid_3_0_1;
  int s_5_St_4_Mid_2_1;
  int s_5_St_4_Mid_3_1_0;
  int s_5_St_4_Mid_3_1_1;
  int s_5_St_4_Low_2_0;
  int s_5_St_4_Low_3_0_0;
  int s_5_St_4_Low_3_0_1;
  int s_5_St_4_Low_2_1;
  int s_5_St_4_Low_3_1_0;
  int s_5_St_4_Low_3_1_1;
  int s_5_St_4_Verylow_2_0;
  int s_5_St_4_Verylow_3_0_0;
  int s_5_St_4_Verylow_3_0_1;
  int s_5_St_4_Verylow_2_1;
  int s_5_St_4_Verylow_3_1_0;
  int s_5_St_4_Verylow_3_1_1;
  int ck_18_2_0;
  int ck_18_3_0_0;
  int ck_18_3_0_1;
  int ck_18_2_1;
  int ck_18_3_1_0;
  int ck_18_3_1_1;
  int r_St_4_Veryhigh;
  int s_5_St_4_Veryhigh_3;
  int s_5_St_4_Veryhigh_2;
  int s_5_St_4_Veryhigh_1;
  int r_St_4_High;
  int s_5_St_4_High_3;
  int s_5_St_4_High_2;
  int s_5_St_4_High_1;
  int r_St_4_Mid;
  int s_5_St_4_Mid_3;
  int s_5_St_4_Mid_2;
  int s_5_St_4_Mid_1;
  int r_St_4_Low;
  int s_5_St_4_Low_3;
  int s_5_St_4_Low_2;
  int s_5_St_4_Low_1;
  int r_St_4_Verylow;
  int s_5_St_4_Verylow_3;
  int s_5_St_4_Verylow_2;
  int s_5_St_4_Verylow_1;
  int ck_18_3;
  int ck_18_2;
  int ck_18_1;
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
  int v_892;
  int v_891;
  int v_890;
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
  int ck_17_2_0;
  int ck_17_3_0_0;
  int ck_17_3_0_1;
  int ck_17_2_1;
  int ck_17_3_1_0;
  int ck_17_3_1_1;
  int nr_1_St_5_Veryhigh;
  int ns_1_St_5_Veryhigh_3;
  int ns_1_St_5_Veryhigh_2;
  int ns_1_St_5_Veryhigh_1;
  int s_2_St_5_Veryhigh;
  int nr_1_St_5_High;
  int ns_1_St_5_High_3;
  int ns_1_St_5_High_2;
  int ns_1_St_5_High_1;
  int s_2_St_5_High;
  int nr_1_St_5_Mid;
  int ns_1_St_5_Mid_3;
  int ns_1_St_5_Mid_2;
  int ns_1_St_5_Mid_1;
  int s_2_St_5_Mid;
  int nr_1_St_5_Low;
  int ns_1_St_5_Low_3;
  int ns_1_St_5_Low_2;
  int ns_1_St_5_Low_1;
  int s_2_St_5_Low;
  int nr_1_St_5_Verylow;
  int ns_1_St_5_Verylow_3;
  int ns_1_St_5_Verylow_2;
  int ns_1_St_5_Verylow_1;
  int s_2_St_5_Verylow;
  int ck_17_3;
  int ck_17_2;
  int ck_17_1;
  int v_669_2_0;
  int v_669_3_0_0;
  int v_669_3_0_1;
  int v_669_2_1;
  int v_669_3_1_0;
  int v_669_3_1_1;
  int v_667_2_0;
  int v_667_3_0_0;
  int v_667_3_0_1;
  int v_667_2_1;
  int v_667_3_1_0;
  int v_667_3_1_1;
  int v_665_2_0;
  int v_665_3_0_0;
  int v_665_3_0_1;
  int v_665_2_1;
  int v_665_3_1_0;
  int v_665_3_1_1;
  int v_670;
  int v_669_3;
  int v_669_2;
  int v_669_1;
  int v_668;
  int v_667_3;
  int v_667_2;
  int v_667_1;
  int v_666;
  int v_665_3;
  int v_665_2;
  int v_665_1;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_659;
  int v_657_2_0;
  int v_657_3_0_0;
  int v_657_3_0_1;
  int v_657_2_1;
  int v_657_3_1_0;
  int v_657_3_1_1;
  int v_655_2_0;
  int v_655_3_0_0;
  int v_655_3_0_1;
  int v_655_2_1;
  int v_655_3_1_0;
  int v_655_3_1_1;
  int v_653_2_0;
  int v_653_3_0_0;
  int v_653_3_0_1;
  int v_653_2_1;
  int v_653_3_1_0;
  int v_653_3_1_1;
  int v_658;
  int v_657_3;
  int v_657_2;
  int v_657_1;
  int v_656;
  int v_655_3;
  int v_655_2;
  int v_655_1;
  int v_654;
  int v_653_3;
  int v_653_2;
  int v_653_1;
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_643_2_0;
  int v_643_3_0_0;
  int v_643_3_0_1;
  int v_643_2_1;
  int v_643_3_1_0;
  int v_643_3_1_1;
  int v_641_2_0;
  int v_641_3_0_0;
  int v_641_3_0_1;
  int v_641_2_1;
  int v_641_3_1_0;
  int v_641_3_1_1;
  int v_639_2_0;
  int v_639_3_0_0;
  int v_639_3_0_1;
  int v_639_2_1;
  int v_639_3_1_0;
  int v_639_3_1_1;
  int v_644;
  int v_643_3;
  int v_643_2;
  int v_643_1;
  int v_642;
  int v_641_3;
  int v_641_2;
  int v_641_1;
  int v_640;
  int v_639_3;
  int v_639_2;
  int v_639_1;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_629_2_0;
  int v_629_3_0_0;
  int v_629_3_0_1;
  int v_629_2_1;
  int v_629_3_1_0;
  int v_629_3_1_1;
  int v_627_2_0;
  int v_627_3_0_0;
  int v_627_3_0_1;
  int v_627_2_1;
  int v_627_3_1_0;
  int v_627_3_1_1;
  int v_625_2_0;
  int v_625_3_0_0;
  int v_625_3_0_1;
  int v_625_2_1;
  int v_625_3_1_0;
  int v_625_3_1_1;
  int v_630;
  int v_629_3;
  int v_629_2;
  int v_629_1;
  int v_628;
  int v_627_3;
  int v_627_2;
  int v_627_1;
  int v_626;
  int v_625_3;
  int v_625_2;
  int v_625_1;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_615_2_0;
  int v_615_3_0_0;
  int v_615_3_0_1;
  int v_615_2_1;
  int v_615_3_1_0;
  int v_615_3_1_1;
  int v_613_2_0;
  int v_613_3_0_0;
  int v_613_3_0_1;
  int v_613_2_1;
  int v_613_3_1_0;
  int v_613_3_1_1;
  int v_611_2_0;
  int v_611_3_0_0;
  int v_611_3_0_1;
  int v_611_2_1;
  int v_611_3_1_0;
  int v_611_3_1_1;
  int v_616;
  int v_615_3;
  int v_615_2;
  int v_615_1;
  int v_614;
  int v_613_3;
  int v_613_2;
  int v_613_1;
  int v_612;
  int v_611_3;
  int v_611_2;
  int v_611_1;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
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
  int v_920;
  int v_919;
  int v_918;
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
  int ck_16_2_0;
  int ck_16_3_0_0;
  int ck_16_3_0_1;
  int ck_16_2_1;
  int ck_16_3_1_0;
  int ck_16_3_1_1;
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
  int ck_16_3;
  int ck_16_2;
  int ck_16_1;
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
  int v_940;
  int v_939;
  int v_938;
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
  int ck_15_2_0;
  int ck_15_3_0_0;
  int ck_15_3_0_1;
  int ck_15_2_1;
  int ck_15_3_1_0;
  int ck_15_3_1_1;
  int nr_2_St_6_Veryhigh;
  int ns_2_St_6_Veryhigh_3;
  int ns_2_St_6_Veryhigh_2;
  int ns_2_St_6_Veryhigh_1;
  int s_1_St_6_Veryhigh;
  int nr_2_St_6_High;
  int ns_2_St_6_High_3;
  int ns_2_St_6_High_2;
  int ns_2_St_6_High_1;
  int s_1_St_6_High;
  int nr_2_St_6_Mid;
  int ns_2_St_6_Mid_3;
  int ns_2_St_6_Mid_2;
  int ns_2_St_6_Mid_1;
  int s_1_St_6_Mid;
  int nr_2_St_6_Low;
  int ns_2_St_6_Low_3;
  int ns_2_St_6_Low_2;
  int ns_2_St_6_Low_1;
  int s_1_St_6_Low;
  int nr_2_St_6_Verylow;
  int ns_2_St_6_Verylow_3;
  int ns_2_St_6_Verylow_2;
  int ns_2_St_6_Verylow_1;
  int s_1_St_6_Verylow;
  int ck_15_3;
  int ck_15_2;
  int ck_15_1;
  int v_603_2_0;
  int v_603_3_0_0;
  int v_603_3_0_1;
  int v_603_2_1;
  int v_603_3_1_0;
  int v_603_3_1_1;
  int v_601_2_0;
  int v_601_3_0_0;
  int v_601_3_0_1;
  int v_601_2_1;
  int v_601_3_1_0;
  int v_601_3_1_1;
  int v_599_2_0;
  int v_599_3_0_0;
  int v_599_3_0_1;
  int v_599_2_1;
  int v_599_3_1_0;
  int v_599_3_1_1;
  int v_604;
  int v_603_3;
  int v_603_2;
  int v_603_1;
  int v_602;
  int v_601_3;
  int v_601_2;
  int v_601_1;
  int v_600;
  int v_599_3;
  int v_599_2;
  int v_599_1;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_591_2_0;
  int v_591_3_0_0;
  int v_591_3_0_1;
  int v_591_2_1;
  int v_591_3_1_0;
  int v_591_3_1_1;
  int v_589_2_0;
  int v_589_3_0_0;
  int v_589_3_0_1;
  int v_589_2_1;
  int v_589_3_1_0;
  int v_589_3_1_1;
  int v_587_2_0;
  int v_587_3_0_0;
  int v_587_3_0_1;
  int v_587_2_1;
  int v_587_3_1_0;
  int v_587_3_1_1;
  int v_592;
  int v_591_3;
  int v_591_2;
  int v_591_1;
  int v_590;
  int v_589_3;
  int v_589_2;
  int v_589_1;
  int v_588;
  int v_587_3;
  int v_587_2;
  int v_587_1;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_577_2_0;
  int v_577_3_0_0;
  int v_577_3_0_1;
  int v_577_2_1;
  int v_577_3_1_0;
  int v_577_3_1_1;
  int v_575_2_0;
  int v_575_3_0_0;
  int v_575_3_0_1;
  int v_575_2_1;
  int v_575_3_1_0;
  int v_575_3_1_1;
  int v_573_2_0;
  int v_573_3_0_0;
  int v_573_3_0_1;
  int v_573_2_1;
  int v_573_3_1_0;
  int v_573_3_1_1;
  int v_578;
  int v_577_3;
  int v_577_2;
  int v_577_1;
  int v_576;
  int v_575_3;
  int v_575_2;
  int v_575_1;
  int v_574;
  int v_573_3;
  int v_573_2;
  int v_573_1;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_563_2_0;
  int v_563_3_0_0;
  int v_563_3_0_1;
  int v_563_2_1;
  int v_563_3_1_0;
  int v_563_3_1_1;
  int v_561_2_0;
  int v_561_3_0_0;
  int v_561_3_0_1;
  int v_561_2_1;
  int v_561_3_1_0;
  int v_561_3_1_1;
  int v_559_2_0;
  int v_559_3_0_0;
  int v_559_3_0_1;
  int v_559_2_1;
  int v_559_3_1_0;
  int v_559_3_1_1;
  int v_564;
  int v_563_3;
  int v_563_2;
  int v_563_1;
  int v_562;
  int v_561_3;
  int v_561_2;
  int v_561_1;
  int v_560;
  int v_559_3;
  int v_559_2;
  int v_559_1;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_549_2_0;
  int v_549_3_0_0;
  int v_549_3_0_1;
  int v_549_2_1;
  int v_549_3_1_0;
  int v_549_3_1_1;
  int v_547_2_0;
  int v_547_3_0_0;
  int v_547_3_0_1;
  int v_547_2_1;
  int v_547_3_1_0;
  int v_547_3_1_1;
  int v_545_2_0;
  int v_545_3_0_0;
  int v_545_3_0_1;
  int v_545_2_1;
  int v_545_3_1_0;
  int v_545_3_1_1;
  int v_550;
  int v_549_3;
  int v_549_2;
  int v_549_1;
  int v_548;
  int v_547_3;
  int v_547_2;
  int v_547_1;
  int v_546;
  int v_545_3;
  int v_545_2;
  int v_545_1;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
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
  int v_968;
  int v_967;
  int v_966;
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
  int ck_14_2_0;
  int ck_14_3_0_0;
  int ck_14_3_0_1;
  int ck_14_2_1;
  int ck_14_3_1_0;
  int ck_14_3_1_1;
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
  int ck_14_3;
  int ck_14_2;
  int ck_14_1;
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
  int v_988;
  int v_987;
  int v_986;
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
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int nr_3_St_7_Veryhigh;
  int ns_3_St_7_Veryhigh_3;
  int ns_3_St_7_Veryhigh_2;
  int ns_3_St_7_Veryhigh_1;
  int s_St_7_Veryhigh;
  int nr_3_St_7_High;
  int ns_3_St_7_High_3;
  int ns_3_St_7_High_2;
  int ns_3_St_7_High_1;
  int s_St_7_High;
  int nr_3_St_7_Mid;
  int ns_3_St_7_Mid_3;
  int ns_3_St_7_Mid_2;
  int ns_3_St_7_Mid_1;
  int s_St_7_Mid;
  int nr_3_St_7_Low;
  int ns_3_St_7_Low_3;
  int ns_3_St_7_Low_2;
  int ns_3_St_7_Low_1;
  int s_St_7_Low;
  int nr_3_St_7_Verylow;
  int ns_3_St_7_Verylow_3;
  int ns_3_St_7_Verylow_2;
  int ns_3_St_7_Verylow_1;
  int s_St_7_Verylow;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_537_2_0;
  int v_537_3_0_0;
  int v_537_3_0_1;
  int v_537_2_1;
  int v_537_3_1_0;
  int v_537_3_1_1;
  int v_535_2_0;
  int v_535_3_0_0;
  int v_535_3_0_1;
  int v_535_2_1;
  int v_535_3_1_0;
  int v_535_3_1_1;
  int v_533_2_0;
  int v_533_3_0_0;
  int v_533_3_0_1;
  int v_533_2_1;
  int v_533_3_1_0;
  int v_533_3_1_1;
  int v_538;
  int v_537_3;
  int v_537_2;
  int v_537_1;
  int v_536;
  int v_535_3;
  int v_535_2;
  int v_535_1;
  int v_534;
  int v_533_3;
  int v_533_2;
  int v_533_1;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_525_2_0;
  int v_525_3_0_0;
  int v_525_3_0_1;
  int v_525_2_1;
  int v_525_3_1_0;
  int v_525_3_1_1;
  int v_523_2_0;
  int v_523_3_0_0;
  int v_523_3_0_1;
  int v_523_2_1;
  int v_523_3_1_0;
  int v_523_3_1_1;
  int v_521_2_0;
  int v_521_3_0_0;
  int v_521_3_0_1;
  int v_521_2_1;
  int v_521_3_1_0;
  int v_521_3_1_1;
  int v_526;
  int v_525_3;
  int v_525_2;
  int v_525_1;
  int v_524;
  int v_523_3;
  int v_523_2;
  int v_523_1;
  int v_522;
  int v_521_3;
  int v_521_2;
  int v_521_1;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_511_2_0;
  int v_511_3_0_0;
  int v_511_3_0_1;
  int v_511_2_1;
  int v_511_3_1_0;
  int v_511_3_1_1;
  int v_509_2_0;
  int v_509_3_0_0;
  int v_509_3_0_1;
  int v_509_2_1;
  int v_509_3_1_0;
  int v_509_3_1_1;
  int v_507_2_0;
  int v_507_3_0_0;
  int v_507_3_0_1;
  int v_507_2_1;
  int v_507_3_1_0;
  int v_507_3_1_1;
  int v_512;
  int v_511_3;
  int v_511_2;
  int v_511_1;
  int v_510;
  int v_509_3;
  int v_509_2;
  int v_509_1;
  int v_508;
  int v_507_3;
  int v_507_2;
  int v_507_1;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_497_2_0;
  int v_497_3_0_0;
  int v_497_3_0_1;
  int v_497_2_1;
  int v_497_3_1_0;
  int v_497_3_1_1;
  int v_495_2_0;
  int v_495_3_0_0;
  int v_495_3_0_1;
  int v_495_2_1;
  int v_495_3_1_0;
  int v_495_3_1_1;
  int v_493_2_0;
  int v_493_3_0_0;
  int v_493_3_0_1;
  int v_493_2_1;
  int v_493_3_1_0;
  int v_493_3_1_1;
  int v_498;
  int v_497_3;
  int v_497_2;
  int v_497_1;
  int v_496;
  int v_495_3;
  int v_495_2;
  int v_495_1;
  int v_494;
  int v_493_3;
  int v_493_2;
  int v_493_1;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_483_2_0;
  int v_483_3_0_0;
  int v_483_3_0_1;
  int v_483_2_1;
  int v_483_3_1_0;
  int v_483_3_1_1;
  int v_481_2_0;
  int v_481_3_0_0;
  int v_481_3_0_1;
  int v_481_2_1;
  int v_481_3_1_0;
  int v_481_3_1_1;
  int v_479_2_0;
  int v_479_3_0_0;
  int v_479_3_0_1;
  int v_479_2_1;
  int v_479_3_1_0;
  int v_479_3_1_1;
  int v_484;
  int v_483_3;
  int v_483_2;
  int v_483_1;
  int v_482;
  int v_481_3;
  int v_481_2;
  int v_481_1;
  int v_480;
  int v_479_3;
  int v_479_2;
  int v_479_1;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
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
  int v_1016;
  int v_1015;
  int v_1014;
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
  int ck_12_2_0;
  int ck_12_3_0_0;
  int ck_12_3_0_1;
  int ck_12_2_1;
  int ck_12_3_1_0;
  int ck_12_3_1_1;
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
  int ck_12_3;
  int ck_12_2;
  int ck_12_1;
  int nr_4_St_8_ON;
  int ns_4_St_8_ON_1;
  int ligado_2_St_8_ON;
  int nr_4_St_8_Off;
  int ns_4_St_8_Off_1;
  int ligado_2_St_8_Off;
  int ck_11_1;
  int v_472;
  int r_4_St_8_ON;
  int s_9_St_8_ON_1;
  int r_4_St_8_Off;
  int s_9_St_8_Off_1;
  int nr_5_St_9_ON;
  int ns_5_St_9_ON_1;
  int ligado_1_St_9_ON;
  int nr_5_St_9_Off;
  int ns_5_St_9_Off_1;
  int ligado_1_St_9_Off;
  int ck_9_1;
  int v_471;
  int r_5_St_9_ON;
  int s_10_St_9_ON_1;
  int r_5_St_9_Off;
  int s_10_St_9_Off_1;
  int nr_6_St_10_ON;
  int ns_6_St_10_ON_1;
  int ligado_St_10_ON;
  int nr_6_St_10_Off;
  int ns_6_St_10_Off_1;
  int ligado_St_10_Off;
  int ck_7_1;
  int v_470;
  int r_6_St_10_ON;
  int s_11_St_10_ON_1;
  int r_6_St_10_Off;
  int s_11_St_10_Off_1;
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
  int v_1036;
  int v_1035;
  int v_1034;
  int ns_7_St_11_Rock_2_0;
  int ns_7_St_11_Rock_3_0_0;
  int ns_7_St_11_Rock_3_0_1;
  int ns_7_St_11_Rock_2_1;
  int ns_7_St_11_Rock_3_1_0;
  int ns_7_St_11_Rock_3_1_1;
  int ns_7_St_11_Regue_2_0;
  int ns_7_St_11_Regue_3_0_0;
  int ns_7_St_11_Regue_3_0_1;
  int ns_7_St_11_Regue_2_1;
  int ns_7_St_11_Regue_3_1_0;
  int ns_7_St_11_Regue_3_1_1;
  int ns_7_St_11_POP_2_0;
  int ns_7_St_11_POP_3_0_0;
  int ns_7_St_11_POP_3_0_1;
  int ns_7_St_11_POP_2_1;
  int ns_7_St_11_POP_3_1_0;
  int ns_7_St_11_POP_3_1_1;
  int ns_7_St_11_Indie_2_0;
  int ns_7_St_11_Indie_3_0_0;
  int ns_7_St_11_Indie_3_0_1;
  int ns_7_St_11_Indie_2_1;
  int ns_7_St_11_Indie_3_1_0;
  int ns_7_St_11_Indie_3_1_1;
  int ns_7_St_11_Funk_2_0;
  int ns_7_St_11_Funk_3_0_0;
  int ns_7_St_11_Funk_3_0_1;
  int ns_7_St_11_Funk_2_1;
  int ns_7_St_11_Funk_3_1_0;
  int ns_7_St_11_Funk_3_1_1;
  int ns_7_St_11_Electronic_2_0;
  int ns_7_St_11_Electronic_3_0_0;
  int ns_7_St_11_Electronic_3_0_1;
  int ns_7_St_11_Electronic_2_1;
  int ns_7_St_11_Electronic_3_1_0;
  int ns_7_St_11_Electronic_3_1_1;
  int ns_7_St_11_Classic_2_0;
  int ns_7_St_11_Classic_3_0_0;
  int ns_7_St_11_Classic_3_0_1;
  int ns_7_St_11_Classic_2_1;
  int ns_7_St_11_Classic_3_1_0;
  int ns_7_St_11_Classic_3_1_1;
  int ns_7_St_11_Off_2_0;
  int ns_7_St_11_Off_3_0_0;
  int ns_7_St_11_Off_3_0_1;
  int ns_7_St_11_Off_2_1;
  int ns_7_St_11_Off_3_1_0;
  int ns_7_St_11_Off_3_1_1;
  int ck_5_2_0;
  int ck_5_3_0_0;
  int ck_5_3_0_1;
  int ck_5_2_1;
  int ck_5_3_1_0;
  int ck_5_3_1_1;
  int nr_7_St_11_Rock;
  int ns_7_St_11_Rock_3;
  int ns_7_St_11_Rock_2;
  int ns_7_St_11_Rock_1;
  int res_1_St_11_Rock;
  int nr_7_St_11_Regue;
  int ns_7_St_11_Regue_3;
  int ns_7_St_11_Regue_2;
  int ns_7_St_11_Regue_1;
  int res_1_St_11_Regue;
  int nr_7_St_11_POP;
  int ns_7_St_11_POP_3;
  int ns_7_St_11_POP_2;
  int ns_7_St_11_POP_1;
  int res_1_St_11_POP;
  int nr_7_St_11_Indie;
  int ns_7_St_11_Indie_3;
  int ns_7_St_11_Indie_2;
  int ns_7_St_11_Indie_1;
  int res_1_St_11_Indie;
  int nr_7_St_11_Funk;
  int ns_7_St_11_Funk_3;
  int ns_7_St_11_Funk_2;
  int ns_7_St_11_Funk_1;
  int res_1_St_11_Funk;
  int nr_7_St_11_Electronic;
  int ns_7_St_11_Electronic_3;
  int ns_7_St_11_Electronic_2;
  int ns_7_St_11_Electronic_1;
  int res_1_St_11_Electronic;
  int nr_7_St_11_Classic;
  int ns_7_St_11_Classic_3;
  int ns_7_St_11_Classic_2;
  int ns_7_St_11_Classic_1;
  int res_1_St_11_Classic;
  int nr_7_St_11_Off;
  int ns_7_St_11_Off_3;
  int ns_7_St_11_Off_2;
  int ns_7_St_11_Off_1;
  int res_1_St_11_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_468_2_0;
  int v_468_3_0_0;
  int v_468_3_0_1;
  int v_468_2_1;
  int v_468_3_1_0;
  int v_468_3_1_1;
  int v_466_2_0;
  int v_466_3_0_0;
  int v_466_3_0_1;
  int v_466_2_1;
  int v_466_3_1_0;
  int v_466_3_1_1;
  int v_464_2_0;
  int v_464_3_0_0;
  int v_464_3_0_1;
  int v_464_2_1;
  int v_464_3_1_0;
  int v_464_3_1_1;
  int v_462_2_0;
  int v_462_3_0_0;
  int v_462_3_0_1;
  int v_462_2_1;
  int v_462_3_1_0;
  int v_462_3_1_1;
  int v_460_2_0;
  int v_460_3_0_0;
  int v_460_3_0_1;
  int v_460_2_1;
  int v_460_3_1_0;
  int v_460_3_1_1;
  int v_458_2_0;
  int v_458_3_0_0;
  int v_458_3_0_1;
  int v_458_2_1;
  int v_458_3_1_0;
  int v_458_3_1_1;
  int v_469;
  int v_468_3;
  int v_468_2;
  int v_468_1;
  int v_467;
  int v_466_3;
  int v_466_2;
  int v_466_1;
  int v_465;
  int v_464_3;
  int v_464_2;
  int v_464_1;
  int v_463;
  int v_462_3;
  int v_462_2;
  int v_462_1;
  int v_461;
  int v_460_3;
  int v_460_2;
  int v_460_1;
  int v_459;
  int v_458_3;
  int v_458_2;
  int v_458_1;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_449_2_0;
  int v_449_3_0_0;
  int v_449_3_0_1;
  int v_449_2_1;
  int v_449_3_1_0;
  int v_449_3_1_1;
  int v_447_2_0;
  int v_447_3_0_0;
  int v_447_3_0_1;
  int v_447_2_1;
  int v_447_3_1_0;
  int v_447_3_1_1;
  int v_445_2_0;
  int v_445_3_0_0;
  int v_445_3_0_1;
  int v_445_2_1;
  int v_445_3_1_0;
  int v_445_3_1_1;
  int v_443_2_0;
  int v_443_3_0_0;
  int v_443_3_0_1;
  int v_443_2_1;
  int v_443_3_1_0;
  int v_443_3_1_1;
  int v_441_2_0;
  int v_441_3_0_0;
  int v_441_3_0_1;
  int v_441_2_1;
  int v_441_3_1_0;
  int v_441_3_1_1;
  int v_439_2_0;
  int v_439_3_0_0;
  int v_439_3_0_1;
  int v_439_2_1;
  int v_439_3_1_0;
  int v_439_3_1_1;
  int v_450;
  int v_449_3;
  int v_449_2;
  int v_449_1;
  int v_448;
  int v_447_3;
  int v_447_2;
  int v_447_1;
  int v_446;
  int v_445_3;
  int v_445_2;
  int v_445_1;
  int v_444;
  int v_443_3;
  int v_443_2;
  int v_443_1;
  int v_442;
  int v_441_3;
  int v_441_2;
  int v_441_1;
  int v_440;
  int v_439_3;
  int v_439_2;
  int v_439_1;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_430_2_0;
  int v_430_3_0_0;
  int v_430_3_0_1;
  int v_430_2_1;
  int v_430_3_1_0;
  int v_430_3_1_1;
  int v_428_2_0;
  int v_428_3_0_0;
  int v_428_3_0_1;
  int v_428_2_1;
  int v_428_3_1_0;
  int v_428_3_1_1;
  int v_426_2_0;
  int v_426_3_0_0;
  int v_426_3_0_1;
  int v_426_2_1;
  int v_426_3_1_0;
  int v_426_3_1_1;
  int v_424_2_0;
  int v_424_3_0_0;
  int v_424_3_0_1;
  int v_424_2_1;
  int v_424_3_1_0;
  int v_424_3_1_1;
  int v_422_2_0;
  int v_422_3_0_0;
  int v_422_3_0_1;
  int v_422_2_1;
  int v_422_3_1_0;
  int v_422_3_1_1;
  int v_420_2_0;
  int v_420_3_0_0;
  int v_420_3_0_1;
  int v_420_2_1;
  int v_420_3_1_0;
  int v_420_3_1_1;
  int v_431;
  int v_430_3;
  int v_430_2;
  int v_430_1;
  int v_429;
  int v_428_3;
  int v_428_2;
  int v_428_1;
  int v_427;
  int v_426_3;
  int v_426_2;
  int v_426_1;
  int v_425;
  int v_424_3;
  int v_424_2;
  int v_424_1;
  int v_423;
  int v_422_3;
  int v_422_2;
  int v_422_1;
  int v_421;
  int v_420_3;
  int v_420_2;
  int v_420_1;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_411_2_0;
  int v_411_3_0_0;
  int v_411_3_0_1;
  int v_411_2_1;
  int v_411_3_1_0;
  int v_411_3_1_1;
  int v_409_2_0;
  int v_409_3_0_0;
  int v_409_3_0_1;
  int v_409_2_1;
  int v_409_3_1_0;
  int v_409_3_1_1;
  int v_407_2_0;
  int v_407_3_0_0;
  int v_407_3_0_1;
  int v_407_2_1;
  int v_407_3_1_0;
  int v_407_3_1_1;
  int v_405_2_0;
  int v_405_3_0_0;
  int v_405_3_0_1;
  int v_405_2_1;
  int v_405_3_1_0;
  int v_405_3_1_1;
  int v_403_2_0;
  int v_403_3_0_0;
  int v_403_3_0_1;
  int v_403_2_1;
  int v_403_3_1_0;
  int v_403_3_1_1;
  int v_401_2_0;
  int v_401_3_0_0;
  int v_401_3_0_1;
  int v_401_2_1;
  int v_401_3_1_0;
  int v_401_3_1_1;
  int v_412;
  int v_411_3;
  int v_411_2;
  int v_411_1;
  int v_410;
  int v_409_3;
  int v_409_2;
  int v_409_1;
  int v_408;
  int v_407_3;
  int v_407_2;
  int v_407_1;
  int v_406;
  int v_405_3;
  int v_405_2;
  int v_405_1;
  int v_404;
  int v_403_3;
  int v_403_2;
  int v_403_1;
  int v_402;
  int v_401_3;
  int v_401_2;
  int v_401_1;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_392_2_0;
  int v_392_3_0_0;
  int v_392_3_0_1;
  int v_392_2_1;
  int v_392_3_1_0;
  int v_392_3_1_1;
  int v_390_2_0;
  int v_390_3_0_0;
  int v_390_3_0_1;
  int v_390_2_1;
  int v_390_3_1_0;
  int v_390_3_1_1;
  int v_388_2_0;
  int v_388_3_0_0;
  int v_388_3_0_1;
  int v_388_2_1;
  int v_388_3_1_0;
  int v_388_3_1_1;
  int v_386_2_0;
  int v_386_3_0_0;
  int v_386_3_0_1;
  int v_386_2_1;
  int v_386_3_1_0;
  int v_386_3_1_1;
  int v_384_2_0;
  int v_384_3_0_0;
  int v_384_3_0_1;
  int v_384_2_1;
  int v_384_3_1_0;
  int v_384_3_1_1;
  int v_382_2_0;
  int v_382_3_0_0;
  int v_382_3_0_1;
  int v_382_2_1;
  int v_382_3_1_0;
  int v_382_3_1_1;
  int v_393;
  int v_392_3;
  int v_392_2;
  int v_392_1;
  int v_391;
  int v_390_3;
  int v_390_2;
  int v_390_1;
  int v_389;
  int v_388_3;
  int v_388_2;
  int v_388_1;
  int v_387;
  int v_386_3;
  int v_386_2;
  int v_386_1;
  int v_385;
  int v_384_3;
  int v_384_2;
  int v_384_1;
  int v_383;
  int v_382_3;
  int v_382_2;
  int v_382_1;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_373_2_0;
  int v_373_3_0_0;
  int v_373_3_0_1;
  int v_373_2_1;
  int v_373_3_1_0;
  int v_373_3_1_1;
  int v_371_2_0;
  int v_371_3_0_0;
  int v_371_3_0_1;
  int v_371_2_1;
  int v_371_3_1_0;
  int v_371_3_1_1;
  int v_369_2_0;
  int v_369_3_0_0;
  int v_369_3_0_1;
  int v_369_2_1;
  int v_369_3_1_0;
  int v_369_3_1_1;
  int v_367_2_0;
  int v_367_3_0_0;
  int v_367_3_0_1;
  int v_367_2_1;
  int v_367_3_1_0;
  int v_367_3_1_1;
  int v_365_2_0;
  int v_365_3_0_0;
  int v_365_3_0_1;
  int v_365_2_1;
  int v_365_3_1_0;
  int v_365_3_1_1;
  int v_363_2_0;
  int v_363_3_0_0;
  int v_363_3_0_1;
  int v_363_2_1;
  int v_363_3_1_0;
  int v_363_3_1_1;
  int v_374;
  int v_373_3;
  int v_373_2;
  int v_373_1;
  int v_372;
  int v_371_3;
  int v_371_2;
  int v_371_1;
  int v_370;
  int v_369_3;
  int v_369_2;
  int v_369_1;
  int v_368;
  int v_367_3;
  int v_367_2;
  int v_367_1;
  int v_366;
  int v_365_3;
  int v_365_2;
  int v_365_1;
  int v_364;
  int v_363_3;
  int v_363_2;
  int v_363_1;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_354_2_0;
  int v_354_3_0_0;
  int v_354_3_0_1;
  int v_354_2_1;
  int v_354_3_1_0;
  int v_354_3_1_1;
  int v_352_2_0;
  int v_352_3_0_0;
  int v_352_3_0_1;
  int v_352_2_1;
  int v_352_3_1_0;
  int v_352_3_1_1;
  int v_350_2_0;
  int v_350_3_0_0;
  int v_350_3_0_1;
  int v_350_2_1;
  int v_350_3_1_0;
  int v_350_3_1_1;
  int v_348_2_0;
  int v_348_3_0_0;
  int v_348_3_0_1;
  int v_348_2_1;
  int v_348_3_1_0;
  int v_348_3_1_1;
  int v_346_2_0;
  int v_346_3_0_0;
  int v_346_3_0_1;
  int v_346_2_1;
  int v_346_3_1_0;
  int v_346_3_1_1;
  int v_344_2_0;
  int v_344_3_0_0;
  int v_344_3_0_1;
  int v_344_2_1;
  int v_344_3_1_0;
  int v_344_3_1_1;
  int v_355;
  int v_354_3;
  int v_354_2;
  int v_354_1;
  int v_353;
  int v_352_3;
  int v_352_2;
  int v_352_1;
  int v_351;
  int v_350_3;
  int v_350_2;
  int v_350_1;
  int v_349;
  int v_348_3;
  int v_348_2;
  int v_348_1;
  int v_347;
  int v_346_3;
  int v_346_2;
  int v_346_1;
  int v_345;
  int v_344_3;
  int v_344_2;
  int v_344_1;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_335_2_0;
  int v_335_3_0_0;
  int v_335_3_0_1;
  int v_335_2_1;
  int v_335_3_1_0;
  int v_335_3_1_1;
  int v_333_2_0;
  int v_333_3_0_0;
  int v_333_3_0_1;
  int v_333_2_1;
  int v_333_3_1_0;
  int v_333_3_1_1;
  int v_331_2_0;
  int v_331_3_0_0;
  int v_331_3_0_1;
  int v_331_2_1;
  int v_331_3_1_0;
  int v_331_3_1_1;
  int v_329_2_0;
  int v_329_3_0_0;
  int v_329_3_0_1;
  int v_329_2_1;
  int v_329_3_1_0;
  int v_329_3_1_1;
  int v_327_2_0;
  int v_327_3_0_0;
  int v_327_3_0_1;
  int v_327_2_1;
  int v_327_3_1_0;
  int v_327_3_1_1;
  int v_325_2_0;
  int v_325_3_0_0;
  int v_325_3_0_1;
  int v_325_2_1;
  int v_325_3_1_0;
  int v_325_3_1_1;
  int v_336;
  int v_335_3;
  int v_335_2;
  int v_335_1;
  int v_334;
  int v_333_3;
  int v_333_2;
  int v_333_1;
  int v_332;
  int v_331_3;
  int v_331_2;
  int v_331_1;
  int v_330;
  int v_329_3;
  int v_329_2;
  int v_329_1;
  int v_328;
  int v_327_3;
  int v_327_2;
  int v_327_1;
  int v_326;
  int v_325_3;
  int v_325_2;
  int v_325_1;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
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
  int v_1069;
  int v_1068;
  int v_1067;
  int s_12_St_11_Rock_2_0;
  int s_12_St_11_Rock_3_0_0;
  int s_12_St_11_Rock_3_0_1;
  int s_12_St_11_Rock_2_1;
  int s_12_St_11_Rock_3_1_0;
  int s_12_St_11_Rock_3_1_1;
  int s_12_St_11_Regue_2_0;
  int s_12_St_11_Regue_3_0_0;
  int s_12_St_11_Regue_3_0_1;
  int s_12_St_11_Regue_2_1;
  int s_12_St_11_Regue_3_1_0;
  int s_12_St_11_Regue_3_1_1;
  int s_12_St_11_POP_2_0;
  int s_12_St_11_POP_3_0_0;
  int s_12_St_11_POP_3_0_1;
  int s_12_St_11_POP_2_1;
  int s_12_St_11_POP_3_1_0;
  int s_12_St_11_POP_3_1_1;
  int s_12_St_11_Indie_2_0;
  int s_12_St_11_Indie_3_0_0;
  int s_12_St_11_Indie_3_0_1;
  int s_12_St_11_Indie_2_1;
  int s_12_St_11_Indie_3_1_0;
  int s_12_St_11_Indie_3_1_1;
  int s_12_St_11_Funk_2_0;
  int s_12_St_11_Funk_3_0_0;
  int s_12_St_11_Funk_3_0_1;
  int s_12_St_11_Funk_2_1;
  int s_12_St_11_Funk_3_1_0;
  int s_12_St_11_Funk_3_1_1;
  int s_12_St_11_Electronic_2_0;
  int s_12_St_11_Electronic_3_0_0;
  int s_12_St_11_Electronic_3_0_1;
  int s_12_St_11_Electronic_2_1;
  int s_12_St_11_Electronic_3_1_0;
  int s_12_St_11_Electronic_3_1_1;
  int s_12_St_11_Classic_2_0;
  int s_12_St_11_Classic_3_0_0;
  int s_12_St_11_Classic_3_0_1;
  int s_12_St_11_Classic_2_1;
  int s_12_St_11_Classic_3_1_0;
  int s_12_St_11_Classic_3_1_1;
  int s_12_St_11_Off_2_0;
  int s_12_St_11_Off_3_0_0;
  int s_12_St_11_Off_3_0_1;
  int s_12_St_11_Off_2_1;
  int s_12_St_11_Off_3_1_0;
  int s_12_St_11_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_7_St_11_Rock;
  int s_12_St_11_Rock_3;
  int s_12_St_11_Rock_2;
  int s_12_St_11_Rock_1;
  int r_7_St_11_Regue;
  int s_12_St_11_Regue_3;
  int s_12_St_11_Regue_2;
  int s_12_St_11_Regue_1;
  int r_7_St_11_POP;
  int s_12_St_11_POP_3;
  int s_12_St_11_POP_2;
  int s_12_St_11_POP_1;
  int r_7_St_11_Indie;
  int s_12_St_11_Indie_3;
  int s_12_St_11_Indie_2;
  int s_12_St_11_Indie_1;
  int r_7_St_11_Funk;
  int s_12_St_11_Funk_3;
  int s_12_St_11_Funk_2;
  int s_12_St_11_Funk_1;
  int r_7_St_11_Electronic;
  int s_12_St_11_Electronic_3;
  int s_12_St_11_Electronic_2;
  int s_12_St_11_Electronic_1;
  int r_7_St_11_Classic;
  int s_12_St_11_Classic_3;
  int s_12_St_11_Classic_2;
  int s_12_St_11_Classic_1;
  int r_7_St_11_Off;
  int s_12_St_11_Off_3;
  int s_12_St_11_Off_2;
  int s_12_St_11_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_12_2_0;
  int s_12_3_0_0;
  int s_12_3_0_1;
  int s_12_2_1;
  int s_12_3_1_0;
  int s_12_3_1_1;
  int ns_7_2_0;
  int ns_7_3_0_0;
  int ns_7_3_0_1;
  int ns_7_2_1;
  int ns_7_3_1_0;
  int ns_7_3_1_1;
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
  int s_5_2_0;
  int s_5_3_0_0;
  int s_5_3_0_1;
  int s_5_2_1;
  int s_5_3_1_0;
  int s_5_3_1_1;
  int ns_2_4_0;
  int ns_3_4_0_0;
  int ns_3_4_0_1;
  int ns_2_4_1;
  int ns_3_4_1_0;
  int ns_3_4_1_1;
  int s_12_3;
  int s_12_2;
  int s_12_1;
  int ns_7_3;
  int ns_7_2;
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
  int s_9_1;
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
  int s_5_3;
  int s_5_2;
  int s_5_1;
  int ns_3_4;
  int ns_2_4;
  int ns_1_4;
  int r;
  int nr;
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
  up_3 = upv;
  down_3 = downv;
  ck_18_1 = self->v_867;
  ck_18_2 = self->v_868;
  ck_18_3 = self->v_869;
  up_2 = upg;
  down_2 = downg;
  ck_16_1 = self->v_915;
  ck_16_2 = self->v_916;
  ck_16_3 = self->v_917;
  up_1 = upm;
  down_1 = downm;
  ck_14_1 = self->v_963;
  ck_14_2 = self->v_964;
  ck_14_3 = self->v_965;
  up = upa;
  down = downa;
  ck_12_1 = self->v_1011;
  ck_12_2 = self->v_1012;
  ck_12_3 = self->v_1013;
  tipo_1 = tipo;
  ck_1 = self->v_1064;
  ck_2 = self->v_1065;
  ck_3 = self->v_1066;
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
        v_438 = (tipo_1==7);
        if (v_438) {
          v_440 = true;
          v_439_1 = false;
          v_439_2 = false;
          v_439_3 = false;
        } else {
          v_440 = self->pnr_7;
          v_439_1 = true;
          v_439_2 = true;
          v_439_3 = true;
        };
        v_437 = (tipo_1==6);
        if (v_437) {
          v_442 = true;
          v_441_1 = false;
          v_441_2 = false;
          v_441_3 = true;
        } else {
          v_442 = v_440;
          v_441_1 = v_439_1;
          v_441_2 = v_439_2;
          v_441_3 = v_439_3;
        };
        v_436 = (tipo_1==5);
        if (v_436) {
          v_444 = true;
          v_443_1 = false;
          v_443_2 = true;
          v_443_3 = false;
        } else {
          v_444 = v_442;
          v_443_1 = v_441_1;
          v_443_2 = v_441_2;
          v_443_3 = v_441_3;
        };
        v_435 = (tipo_1==4);
        if (v_435) {
          v_446 = true;
          v_445_1 = true;
          v_445_2 = false;
          v_445_3 = false;
        } else {
          v_446 = v_444;
          v_445_1 = v_443_1;
          v_445_2 = v_443_2;
          v_445_3 = v_443_3;
        };
        v_434 = (tipo_1==3);
        if (v_434) {
          v_448 = true;
          v_447_1 = true;
          v_447_2 = false;
          v_447_3 = true;
        } else {
          v_448 = v_446;
          v_447_1 = v_445_1;
          v_447_2 = v_445_2;
          v_447_3 = v_445_3;
        };
        v_433 = (tipo_1==2);
        if (v_433) {
          v_450 = true;
          v_449_1 = true;
          v_449_2 = true;
          v_449_3 = false;
        } else {
          v_450 = v_448;
          v_449_1 = v_447_1;
          v_449_2 = v_447_2;
          v_449_3 = v_447_3;
        };
        v_432 = (tipo_1==0);
        if (v_432) {
          r_7_St_11_Classic = true;
          s_12_St_11_Classic_1 = false;
          s_12_St_11_Classic_2 = true;
          s_12_St_11_Classic_3 = true;
        } else {
          r_7_St_11_Classic = v_450;
          s_12_St_11_Classic_1 = v_449_1;
          s_12_St_11_Classic_2 = v_449_2;
          s_12_St_11_Classic_3 = v_449_3;
        };
        v_1085 = r_7_St_11_Classic;
        v_1067 = s_12_St_11_Classic_1;
        v_1068 = s_12_St_11_Classic_2;
        v_1069 = s_12_St_11_Classic_3;
        if (v_439_1) {
          v_439_2_1 = v_439_2;
          if (v_439_2_1) {
            v_439_3_1_1 = v_439_3;
          } else {
            v_439_3_1_0 = v_439_3;
          };
        } else {
          v_439_2_0 = v_439_2;
          if (v_439_2_0) {
            v_439_3_0_1 = v_439_3;
          } else {
            v_439_3_0_0 = v_439_3;
          };
        };
        if (v_441_1) {
          v_441_2_1 = v_441_2;
          if (v_441_2_1) {
            v_441_3_1_1 = v_441_3;
          } else {
            v_441_3_1_0 = v_441_3;
          };
        } else {
          v_441_2_0 = v_441_2;
          if (v_441_2_0) {
            v_441_3_0_1 = v_441_3;
          } else {
            v_441_3_0_0 = v_441_3;
          };
        };
        if (v_443_1) {
          v_443_2_1 = v_443_2;
          if (v_443_2_1) {
            v_443_3_1_1 = v_443_3;
          } else {
            v_443_3_1_0 = v_443_3;
          };
        } else {
          v_443_2_0 = v_443_2;
          if (v_443_2_0) {
            v_443_3_0_1 = v_443_3;
          } else {
            v_443_3_0_0 = v_443_3;
          };
        };
        if (v_445_1) {
          v_445_2_1 = v_445_2;
          if (v_445_2_1) {
            v_445_3_1_1 = v_445_3;
          } else {
            v_445_3_1_0 = v_445_3;
          };
        } else {
          v_445_2_0 = v_445_2;
          if (v_445_2_0) {
            v_445_3_0_1 = v_445_3;
          } else {
            v_445_3_0_0 = v_445_3;
          };
        };
        if (v_447_1) {
          v_447_2_1 = v_447_2;
          if (v_447_2_1) {
            v_447_3_1_1 = v_447_3;
          } else {
            v_447_3_1_0 = v_447_3;
          };
        } else {
          v_447_2_0 = v_447_2;
          if (v_447_2_0) {
            v_447_3_0_1 = v_447_3;
          } else {
            v_447_3_0_0 = v_447_3;
          };
        };
        if (v_449_1) {
          v_449_2_1 = v_449_2;
          if (v_449_2_1) {
            v_449_3_1_1 = v_449_3;
          } else {
            v_449_3_1_0 = v_449_3;
          };
        } else {
          v_449_2_0 = v_449_2;
          if (v_449_2_0) {
            v_449_3_0_1 = v_449_3;
          } else {
            v_449_3_0_0 = v_449_3;
          };
        };
        if (s_12_St_11_Classic_1) {
          s_12_St_11_Classic_2_1 = s_12_St_11_Classic_2;
          if (s_12_St_11_Classic_2_1) {
            s_12_St_11_Classic_3_1_1 = s_12_St_11_Classic_3;
          } else {
            s_12_St_11_Classic_3_1_0 = s_12_St_11_Classic_3;
          };
        } else {
          s_12_St_11_Classic_2_0 = s_12_St_11_Classic_2;
          if (s_12_St_11_Classic_2_0) {
            s_12_St_11_Classic_3_0_1 = s_12_St_11_Classic_3;
          } else {
            s_12_St_11_Classic_3_0_0 = s_12_St_11_Classic_3;
          };
        };
      } else {
        v_419 = (tipo_1==7);
        if (v_419) {
          v_421 = true;
          v_420_1 = false;
          v_420_2 = false;
          v_420_3 = false;
        } else {
          v_421 = self->pnr_7;
          v_420_1 = true;
          v_420_2 = true;
          v_420_3 = false;
        };
        v_418 = (tipo_1==6);
        if (v_418) {
          v_423 = true;
          v_422_1 = false;
          v_422_2 = false;
          v_422_3 = true;
        } else {
          v_423 = v_421;
          v_422_1 = v_420_1;
          v_422_2 = v_420_2;
          v_422_3 = v_420_3;
        };
        v_417 = (tipo_1==5);
        if (v_417) {
          v_425 = true;
          v_424_1 = false;
          v_424_2 = true;
          v_424_3 = false;
        } else {
          v_425 = v_423;
          v_424_1 = v_422_1;
          v_424_2 = v_422_2;
          v_424_3 = v_422_3;
        };
        v_416 = (tipo_1==4);
        if (v_416) {
          v_427 = true;
          v_426_1 = true;
          v_426_2 = false;
          v_426_3 = false;
        } else {
          v_427 = v_425;
          v_426_1 = v_424_1;
          v_426_2 = v_424_2;
          v_426_3 = v_424_3;
        };
        v_415 = (tipo_1==3);
        if (v_415) {
          v_429 = true;
          v_428_1 = true;
          v_428_2 = false;
          v_428_3 = true;
        } else {
          v_429 = v_427;
          v_428_1 = v_426_1;
          v_428_2 = v_426_2;
          v_428_3 = v_426_3;
        };
        v_414 = (tipo_1==1);
        if (v_414) {
          v_431 = true;
          v_430_1 = true;
          v_430_2 = true;
          v_430_3 = true;
        } else {
          v_431 = v_429;
          v_430_1 = v_428_1;
          v_430_2 = v_428_2;
          v_430_3 = v_428_3;
        };
        v_413 = (tipo_1==0);
        if (v_413) {
          r_7_St_11_Electronic = true;
        } else {
          r_7_St_11_Electronic = v_431;
        };
        v_1085 = r_7_St_11_Electronic;
        if (v_413) {
          s_12_St_11_Electronic_1 = false;
        } else {
          s_12_St_11_Electronic_1 = v_430_1;
        };
        v_1067 = s_12_St_11_Electronic_1;
        if (v_413) {
          s_12_St_11_Electronic_2 = true;
        } else {
          s_12_St_11_Electronic_2 = v_430_2;
        };
        v_1068 = s_12_St_11_Electronic_2;
        if (v_413) {
          s_12_St_11_Electronic_3 = true;
        } else {
          s_12_St_11_Electronic_3 = v_430_3;
        };
        v_1069 = s_12_St_11_Electronic_3;
        if (v_420_1) {
          v_420_2_1 = v_420_2;
          if (v_420_2_1) {
            v_420_3_1_1 = v_420_3;
          } else {
            v_420_3_1_0 = v_420_3;
          };
        } else {
          v_420_2_0 = v_420_2;
          if (v_420_2_0) {
            v_420_3_0_1 = v_420_3;
          } else {
            v_420_3_0_0 = v_420_3;
          };
        };
        if (v_422_1) {
          v_422_2_1 = v_422_2;
          if (v_422_2_1) {
            v_422_3_1_1 = v_422_3;
          } else {
            v_422_3_1_0 = v_422_3;
          };
        } else {
          v_422_2_0 = v_422_2;
          if (v_422_2_0) {
            v_422_3_0_1 = v_422_3;
          } else {
            v_422_3_0_0 = v_422_3;
          };
        };
        if (v_424_1) {
          v_424_2_1 = v_424_2;
          if (v_424_2_1) {
            v_424_3_1_1 = v_424_3;
          } else {
            v_424_3_1_0 = v_424_3;
          };
        } else {
          v_424_2_0 = v_424_2;
          if (v_424_2_0) {
            v_424_3_0_1 = v_424_3;
          } else {
            v_424_3_0_0 = v_424_3;
          };
        };
        if (v_426_1) {
          v_426_2_1 = v_426_2;
          if (v_426_2_1) {
            v_426_3_1_1 = v_426_3;
          } else {
            v_426_3_1_0 = v_426_3;
          };
        } else {
          v_426_2_0 = v_426_2;
          if (v_426_2_0) {
            v_426_3_0_1 = v_426_3;
          } else {
            v_426_3_0_0 = v_426_3;
          };
        };
        if (v_428_1) {
          v_428_2_1 = v_428_2;
          if (v_428_2_1) {
            v_428_3_1_1 = v_428_3;
          } else {
            v_428_3_1_0 = v_428_3;
          };
        } else {
          v_428_2_0 = v_428_2;
          if (v_428_2_0) {
            v_428_3_0_1 = v_428_3;
          } else {
            v_428_3_0_0 = v_428_3;
          };
        };
        if (v_430_1) {
          v_430_2_1 = v_430_2;
          if (v_430_2_1) {
            v_430_3_1_1 = v_430_3;
          } else {
            v_430_3_1_0 = v_430_3;
          };
        } else {
          v_430_2_0 = v_430_2;
          if (v_430_2_0) {
            v_430_3_0_1 = v_430_3;
          } else {
            v_430_3_0_0 = v_430_3;
          };
        };
        if (s_12_St_11_Electronic_1) {
          s_12_St_11_Electronic_2_1 = s_12_St_11_Electronic_2;
          if (s_12_St_11_Electronic_2_1) {
            s_12_St_11_Electronic_3_1_1 = s_12_St_11_Electronic_3;
          } else {
            s_12_St_11_Electronic_3_1_0 = s_12_St_11_Electronic_3;
          };
        } else {
          s_12_St_11_Electronic_2_0 = s_12_St_11_Electronic_2;
          if (s_12_St_11_Electronic_2_0) {
            s_12_St_11_Electronic_3_0_1 = s_12_St_11_Electronic_3;
          } else {
            s_12_St_11_Electronic_3_0_0 = s_12_St_11_Electronic_3;
          };
        };
      };
      v_1079 = v_1067;
      v_1080 = v_1068;
      v_1081 = v_1069;
      v_1087 = v_1085;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_400 = (tipo_1==7);
        if (v_400) {
          v_402 = true;
          v_401_1 = false;
          v_401_2 = false;
          v_401_3 = false;
        } else {
          v_402 = self->pnr_7;
          v_401_1 = true;
          v_401_2 = false;
          v_401_3 = true;
        };
        v_399 = (tipo_1==6);
        if (v_399) {
          v_404 = true;
          v_403_1 = false;
          v_403_2 = false;
          v_403_3 = true;
        } else {
          v_404 = v_402;
          v_403_1 = v_401_1;
          v_403_2 = v_401_2;
          v_403_3 = v_401_3;
        };
        v_398 = (tipo_1==5);
        if (v_398) {
          v_406 = true;
          v_405_1 = false;
          v_405_2 = true;
          v_405_3 = false;
        } else {
          v_406 = v_404;
          v_405_1 = v_403_1;
          v_405_2 = v_403_2;
          v_405_3 = v_403_3;
        };
        v_397 = (tipo_1==4);
        if (v_397) {
          v_408 = true;
          v_407_1 = true;
          v_407_2 = false;
          v_407_3 = false;
        } else {
          v_408 = v_406;
          v_407_1 = v_405_1;
          v_407_2 = v_405_2;
          v_407_3 = v_405_3;
        };
        v_396 = (tipo_1==2);
        if (v_396) {
          v_410 = true;
          v_409_1 = true;
          v_409_2 = true;
          v_409_3 = false;
        } else {
          v_410 = v_408;
          v_409_1 = v_407_1;
          v_409_2 = v_407_2;
          v_409_3 = v_407_3;
        };
        v_395 = (tipo_1==1);
        if (v_395) {
          v_412 = true;
          v_411_1 = true;
          v_411_2 = true;
          v_411_3 = true;
        } else {
          v_412 = v_410;
          v_411_1 = v_409_1;
          v_411_2 = v_409_2;
          v_411_3 = v_409_3;
        };
        v_394 = (tipo_1==0);
        if (v_394) {
          r_7_St_11_Funk = true;
          s_12_St_11_Funk_1 = false;
          s_12_St_11_Funk_2 = true;
          s_12_St_11_Funk_3 = true;
        } else {
          r_7_St_11_Funk = v_412;
          s_12_St_11_Funk_1 = v_411_1;
          s_12_St_11_Funk_2 = v_411_2;
          s_12_St_11_Funk_3 = v_411_3;
        };
        v_1086 = r_7_St_11_Funk;
        v_1070 = s_12_St_11_Funk_1;
        v_1071 = s_12_St_11_Funk_2;
        v_1072 = s_12_St_11_Funk_3;
      } else {
        v_381 = (tipo_1==7);
        if (v_381) {
          v_383 = true;
          v_382_1 = false;
          v_382_2 = false;
          v_382_3 = false;
        } else {
          v_383 = self->pnr_7;
          v_382_1 = true;
          v_382_2 = false;
          v_382_3 = false;
        };
        v_380 = (tipo_1==6);
        if (v_380) {
          v_385 = true;
          v_384_1 = false;
          v_384_2 = false;
          v_384_3 = true;
        } else {
          v_385 = v_383;
          v_384_1 = v_382_1;
          v_384_2 = v_382_2;
          v_384_3 = v_382_3;
        };
        v_379 = (tipo_1==5);
        if (v_379) {
          v_387 = true;
          v_386_1 = false;
          v_386_2 = true;
          v_386_3 = false;
        } else {
          v_387 = v_385;
          v_386_1 = v_384_1;
          v_386_2 = v_384_2;
          v_386_3 = v_384_3;
        };
        v_378 = (tipo_1==3);
        if (v_378) {
          v_389 = true;
          v_388_1 = true;
          v_388_2 = false;
          v_388_3 = true;
        } else {
          v_389 = v_387;
          v_388_1 = v_386_1;
          v_388_2 = v_386_2;
          v_388_3 = v_386_3;
        };
        v_377 = (tipo_1==2);
        if (v_377) {
          v_391 = true;
          v_390_1 = true;
          v_390_2 = true;
          v_390_3 = false;
        } else {
          v_391 = v_389;
          v_390_1 = v_388_1;
          v_390_2 = v_388_2;
          v_390_3 = v_388_3;
        };
        v_376 = (tipo_1==1);
        if (v_376) {
          v_393 = true;
          v_392_1 = true;
          v_392_2 = true;
          v_392_3 = true;
        } else {
          v_393 = v_391;
          v_392_1 = v_390_1;
          v_392_2 = v_390_2;
          v_392_3 = v_390_3;
        };
        v_375 = (tipo_1==0);
        if (v_375) {
          r_7_St_11_Indie = true;
        } else {
          r_7_St_11_Indie = v_393;
        };
        v_1086 = r_7_St_11_Indie;
        if (v_375) {
          s_12_St_11_Indie_1 = false;
        } else {
          s_12_St_11_Indie_1 = v_392_1;
        };
        v_1070 = s_12_St_11_Indie_1;
        if (v_375) {
          s_12_St_11_Indie_2 = true;
        } else {
          s_12_St_11_Indie_2 = v_392_2;
        };
        v_1071 = s_12_St_11_Indie_2;
        if (v_375) {
          s_12_St_11_Indie_3 = true;
        } else {
          s_12_St_11_Indie_3 = v_392_3;
        };
        v_1072 = s_12_St_11_Indie_3;
      };
      v_1079 = v_1070;
      v_1080 = v_1071;
      v_1081 = v_1072;
      v_1087 = v_1086;
      if (ck_3_1_0) {
        if (v_401_1) {
          v_401_2_1 = v_401_2;
          if (v_401_2_1) {
            v_401_3_1_1 = v_401_3;
          } else {
            v_401_3_1_0 = v_401_3;
          };
        } else {
          v_401_2_0 = v_401_2;
          if (v_401_2_0) {
            v_401_3_0_1 = v_401_3;
          } else {
            v_401_3_0_0 = v_401_3;
          };
        };
        if (v_403_1) {
          v_403_2_1 = v_403_2;
          if (v_403_2_1) {
            v_403_3_1_1 = v_403_3;
          } else {
            v_403_3_1_0 = v_403_3;
          };
        } else {
          v_403_2_0 = v_403_2;
          if (v_403_2_0) {
            v_403_3_0_1 = v_403_3;
          } else {
            v_403_3_0_0 = v_403_3;
          };
        };
        if (v_405_1) {
          v_405_2_1 = v_405_2;
          if (v_405_2_1) {
            v_405_3_1_1 = v_405_3;
          } else {
            v_405_3_1_0 = v_405_3;
          };
        } else {
          v_405_2_0 = v_405_2;
          if (v_405_2_0) {
            v_405_3_0_1 = v_405_3;
          } else {
            v_405_3_0_0 = v_405_3;
          };
        };
        if (v_407_1) {
          v_407_2_1 = v_407_2;
          if (v_407_2_1) {
            v_407_3_1_1 = v_407_3;
          } else {
            v_407_3_1_0 = v_407_3;
          };
        } else {
          v_407_2_0 = v_407_2;
          if (v_407_2_0) {
            v_407_3_0_1 = v_407_3;
          } else {
            v_407_3_0_0 = v_407_3;
          };
        };
        if (v_409_1) {
          v_409_2_1 = v_409_2;
          if (v_409_2_1) {
            v_409_3_1_1 = v_409_3;
          } else {
            v_409_3_1_0 = v_409_3;
          };
        } else {
          v_409_2_0 = v_409_2;
          if (v_409_2_0) {
            v_409_3_0_1 = v_409_3;
          } else {
            v_409_3_0_0 = v_409_3;
          };
        };
        if (v_411_1) {
          v_411_2_1 = v_411_2;
          if (v_411_2_1) {
            v_411_3_1_1 = v_411_3;
          } else {
            v_411_3_1_0 = v_411_3;
          };
        } else {
          v_411_2_0 = v_411_2;
          if (v_411_2_0) {
            v_411_3_0_1 = v_411_3;
          } else {
            v_411_3_0_0 = v_411_3;
          };
        };
        if (s_12_St_11_Funk_1) {
          s_12_St_11_Funk_2_1 = s_12_St_11_Funk_2;
          if (s_12_St_11_Funk_2_1) {
            s_12_St_11_Funk_3_1_1 = s_12_St_11_Funk_3;
          } else {
            s_12_St_11_Funk_3_1_0 = s_12_St_11_Funk_3;
          };
        } else {
          s_12_St_11_Funk_2_0 = s_12_St_11_Funk_2;
          if (s_12_St_11_Funk_2_0) {
            s_12_St_11_Funk_3_0_1 = s_12_St_11_Funk_3;
          } else {
            s_12_St_11_Funk_3_0_0 = s_12_St_11_Funk_3;
          };
        };
      } else {
        if (v_382_1) {
          v_382_2_1 = v_382_2;
          if (v_382_2_1) {
            v_382_3_1_1 = v_382_3;
          } else {
            v_382_3_1_0 = v_382_3;
          };
        } else {
          v_382_2_0 = v_382_2;
          if (v_382_2_0) {
            v_382_3_0_1 = v_382_3;
          } else {
            v_382_3_0_0 = v_382_3;
          };
        };
        if (v_384_1) {
          v_384_2_1 = v_384_2;
          if (v_384_2_1) {
            v_384_3_1_1 = v_384_3;
          } else {
            v_384_3_1_0 = v_384_3;
          };
        } else {
          v_384_2_0 = v_384_2;
          if (v_384_2_0) {
            v_384_3_0_1 = v_384_3;
          } else {
            v_384_3_0_0 = v_384_3;
          };
        };
        if (v_386_1) {
          v_386_2_1 = v_386_2;
          if (v_386_2_1) {
            v_386_3_1_1 = v_386_3;
          } else {
            v_386_3_1_0 = v_386_3;
          };
        } else {
          v_386_2_0 = v_386_2;
          if (v_386_2_0) {
            v_386_3_0_1 = v_386_3;
          } else {
            v_386_3_0_0 = v_386_3;
          };
        };
        if (v_388_1) {
          v_388_2_1 = v_388_2;
          if (v_388_2_1) {
            v_388_3_1_1 = v_388_3;
          } else {
            v_388_3_1_0 = v_388_3;
          };
        } else {
          v_388_2_0 = v_388_2;
          if (v_388_2_0) {
            v_388_3_0_1 = v_388_3;
          } else {
            v_388_3_0_0 = v_388_3;
          };
        };
        if (v_390_1) {
          v_390_2_1 = v_390_2;
          if (v_390_2_1) {
            v_390_3_1_1 = v_390_3;
          } else {
            v_390_3_1_0 = v_390_3;
          };
        } else {
          v_390_2_0 = v_390_2;
          if (v_390_2_0) {
            v_390_3_0_1 = v_390_3;
          } else {
            v_390_3_0_0 = v_390_3;
          };
        };
        if (v_392_1) {
          v_392_2_1 = v_392_2;
          if (v_392_2_1) {
            v_392_3_1_1 = v_392_3;
          } else {
            v_392_3_1_0 = v_392_3;
          };
        } else {
          v_392_2_0 = v_392_2;
          if (v_392_2_0) {
            v_392_3_0_1 = v_392_3;
          } else {
            v_392_3_0_0 = v_392_3;
          };
        };
        if (s_12_St_11_Indie_1) {
          s_12_St_11_Indie_2_1 = s_12_St_11_Indie_2;
          if (s_12_St_11_Indie_2_1) {
            s_12_St_11_Indie_3_1_1 = s_12_St_11_Indie_3;
          } else {
            s_12_St_11_Indie_3_1_0 = s_12_St_11_Indie_3;
          };
        } else {
          s_12_St_11_Indie_2_0 = s_12_St_11_Indie_2;
          if (s_12_St_11_Indie_2_0) {
            s_12_St_11_Indie_3_0_1 = s_12_St_11_Indie_3;
          } else {
            s_12_St_11_Indie_3_0_0 = s_12_St_11_Indie_3;
          };
        };
      };
    };
    s_12_1 = v_1079;
    s_12_2 = v_1080;
    s_12_3 = v_1081;
    r_7 = v_1087;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        v_457 = (tipo_1==7);
        if (v_457) {
          v_459 = true;
          v_458_1 = false;
          v_458_2 = false;
          v_458_3 = false;
        } else {
          v_459 = self->pnr_7;
          v_458_1 = false;
          v_458_2 = true;
          v_458_3 = true;
        };
        v_456 = (tipo_1==6);
        if (v_456) {
          v_461 = true;
          v_460_1 = false;
          v_460_2 = false;
          v_460_3 = true;
        } else {
          v_461 = v_459;
          v_460_1 = v_458_1;
          v_460_2 = v_458_2;
          v_460_3 = v_458_3;
        };
        v_455 = (tipo_1==5);
        if (v_455) {
          v_463 = true;
          v_462_1 = false;
          v_462_2 = true;
          v_462_3 = false;
        } else {
          v_463 = v_461;
          v_462_1 = v_460_1;
          v_462_2 = v_460_2;
          v_462_3 = v_460_3;
        };
        v_454 = (tipo_1==4);
        if (v_454) {
          v_465 = true;
          v_464_1 = true;
          v_464_2 = false;
          v_464_3 = false;
        } else {
          v_465 = v_463;
          v_464_1 = v_462_1;
          v_464_2 = v_462_2;
          v_464_3 = v_462_3;
        };
        v_453 = (tipo_1==3);
        if (v_453) {
          v_467 = true;
          v_466_1 = true;
          v_466_2 = false;
          v_466_3 = true;
        } else {
          v_467 = v_465;
          v_466_1 = v_464_1;
          v_466_2 = v_464_2;
          v_466_3 = v_464_3;
        };
        v_452 = (tipo_1==2);
        if (v_452) {
          v_469 = true;
          v_468_1 = true;
          v_468_2 = true;
          v_468_3 = false;
        } else {
          v_469 = v_467;
          v_468_1 = v_466_1;
          v_468_2 = v_466_2;
          v_468_3 = v_466_3;
        };
        v_451 = (tipo_1==1);
        if (v_451) {
          r_7_St_11_Off = true;
          s_12_St_11_Off_1 = true;
          s_12_St_11_Off_2 = true;
          s_12_St_11_Off_3 = true;
        } else {
          r_7_St_11_Off = v_469;
          s_12_St_11_Off_1 = v_468_1;
          s_12_St_11_Off_2 = v_468_2;
          s_12_St_11_Off_3 = v_468_3;
        };
        v_1088 = r_7_St_11_Off;
        v_1073 = s_12_St_11_Off_1;
        v_1074 = s_12_St_11_Off_2;
        v_1075 = s_12_St_11_Off_3;
        if (v_458_1) {
          v_458_2_1 = v_458_2;
          if (v_458_2_1) {
            v_458_3_1_1 = v_458_3;
          } else {
            v_458_3_1_0 = v_458_3;
          };
        } else {
          v_458_2_0 = v_458_2;
          if (v_458_2_0) {
            v_458_3_0_1 = v_458_3;
          } else {
            v_458_3_0_0 = v_458_3;
          };
        };
        if (v_460_1) {
          v_460_2_1 = v_460_2;
          if (v_460_2_1) {
            v_460_3_1_1 = v_460_3;
          } else {
            v_460_3_1_0 = v_460_3;
          };
        } else {
          v_460_2_0 = v_460_2;
          if (v_460_2_0) {
            v_460_3_0_1 = v_460_3;
          } else {
            v_460_3_0_0 = v_460_3;
          };
        };
        if (v_462_1) {
          v_462_2_1 = v_462_2;
          if (v_462_2_1) {
            v_462_3_1_1 = v_462_3;
          } else {
            v_462_3_1_0 = v_462_3;
          };
        } else {
          v_462_2_0 = v_462_2;
          if (v_462_2_0) {
            v_462_3_0_1 = v_462_3;
          } else {
            v_462_3_0_0 = v_462_3;
          };
        };
        if (v_464_1) {
          v_464_2_1 = v_464_2;
          if (v_464_2_1) {
            v_464_3_1_1 = v_464_3;
          } else {
            v_464_3_1_0 = v_464_3;
          };
        } else {
          v_464_2_0 = v_464_2;
          if (v_464_2_0) {
            v_464_3_0_1 = v_464_3;
          } else {
            v_464_3_0_0 = v_464_3;
          };
        };
        if (v_466_1) {
          v_466_2_1 = v_466_2;
          if (v_466_2_1) {
            v_466_3_1_1 = v_466_3;
          } else {
            v_466_3_1_0 = v_466_3;
          };
        } else {
          v_466_2_0 = v_466_2;
          if (v_466_2_0) {
            v_466_3_0_1 = v_466_3;
          } else {
            v_466_3_0_0 = v_466_3;
          };
        };
        if (v_468_1) {
          v_468_2_1 = v_468_2;
          if (v_468_2_1) {
            v_468_3_1_1 = v_468_3;
          } else {
            v_468_3_1_0 = v_468_3;
          };
        } else {
          v_468_2_0 = v_468_2;
          if (v_468_2_0) {
            v_468_3_0_1 = v_468_3;
          } else {
            v_468_3_0_0 = v_468_3;
          };
        };
        if (s_12_St_11_Off_1) {
          s_12_St_11_Off_2_1 = s_12_St_11_Off_2;
          if (s_12_St_11_Off_2_1) {
            s_12_St_11_Off_3_1_1 = s_12_St_11_Off_3;
          } else {
            s_12_St_11_Off_3_1_0 = s_12_St_11_Off_3;
          };
        } else {
          s_12_St_11_Off_2_0 = s_12_St_11_Off_2;
          if (s_12_St_11_Off_2_0) {
            s_12_St_11_Off_3_0_1 = s_12_St_11_Off_3;
          } else {
            s_12_St_11_Off_3_0_0 = s_12_St_11_Off_3;
          };
        };
      } else {
        v_362 = (tipo_1==7);
        if (v_362) {
          v_364 = true;
          v_363_1 = false;
          v_363_2 = false;
          v_363_3 = false;
        } else {
          v_364 = self->pnr_7;
          v_363_1 = false;
          v_363_2 = true;
          v_363_3 = false;
        };
        v_361 = (tipo_1==6);
        if (v_361) {
          v_366 = true;
          v_365_1 = false;
          v_365_2 = false;
          v_365_3 = true;
        } else {
          v_366 = v_364;
          v_365_1 = v_363_1;
          v_365_2 = v_363_2;
          v_365_3 = v_363_3;
        };
        v_360 = (tipo_1==4);
        if (v_360) {
          v_368 = true;
          v_367_1 = true;
          v_367_2 = false;
          v_367_3 = false;
        } else {
          v_368 = v_366;
          v_367_1 = v_365_1;
          v_367_2 = v_365_2;
          v_367_3 = v_365_3;
        };
        v_359 = (tipo_1==3);
        if (v_359) {
          v_370 = true;
          v_369_1 = true;
          v_369_2 = false;
          v_369_3 = true;
        } else {
          v_370 = v_368;
          v_369_1 = v_367_1;
          v_369_2 = v_367_2;
          v_369_3 = v_367_3;
        };
        v_358 = (tipo_1==2);
        if (v_358) {
          v_372 = true;
          v_371_1 = true;
          v_371_2 = true;
          v_371_3 = false;
        } else {
          v_372 = v_370;
          v_371_1 = v_369_1;
          v_371_2 = v_369_2;
          v_371_3 = v_369_3;
        };
        v_357 = (tipo_1==1);
        if (v_357) {
          v_374 = true;
          v_373_1 = true;
          v_373_2 = true;
          v_373_3 = true;
        } else {
          v_374 = v_372;
          v_373_1 = v_371_1;
          v_373_2 = v_371_2;
          v_373_3 = v_371_3;
        };
        v_356 = (tipo_1==0);
        if (v_356) {
          r_7_St_11_POP = true;
        } else {
          r_7_St_11_POP = v_374;
        };
        v_1088 = r_7_St_11_POP;
        if (v_356) {
          s_12_St_11_POP_1 = false;
        } else {
          s_12_St_11_POP_1 = v_373_1;
        };
        v_1073 = s_12_St_11_POP_1;
        if (v_356) {
          s_12_St_11_POP_2 = true;
        } else {
          s_12_St_11_POP_2 = v_373_2;
        };
        v_1074 = s_12_St_11_POP_2;
        if (v_356) {
          s_12_St_11_POP_3 = true;
        } else {
          s_12_St_11_POP_3 = v_373_3;
        };
        v_1075 = s_12_St_11_POP_3;
        if (v_363_1) {
          v_363_2_1 = v_363_2;
          if (v_363_2_1) {
            v_363_3_1_1 = v_363_3;
          } else {
            v_363_3_1_0 = v_363_3;
          };
        } else {
          v_363_2_0 = v_363_2;
          if (v_363_2_0) {
            v_363_3_0_1 = v_363_3;
          } else {
            v_363_3_0_0 = v_363_3;
          };
        };
        if (v_365_1) {
          v_365_2_1 = v_365_2;
          if (v_365_2_1) {
            v_365_3_1_1 = v_365_3;
          } else {
            v_365_3_1_0 = v_365_3;
          };
        } else {
          v_365_2_0 = v_365_2;
          if (v_365_2_0) {
            v_365_3_0_1 = v_365_3;
          } else {
            v_365_3_0_0 = v_365_3;
          };
        };
        if (v_367_1) {
          v_367_2_1 = v_367_2;
          if (v_367_2_1) {
            v_367_3_1_1 = v_367_3;
          } else {
            v_367_3_1_0 = v_367_3;
          };
        } else {
          v_367_2_0 = v_367_2;
          if (v_367_2_0) {
            v_367_3_0_1 = v_367_3;
          } else {
            v_367_3_0_0 = v_367_3;
          };
        };
        if (v_369_1) {
          v_369_2_1 = v_369_2;
          if (v_369_2_1) {
            v_369_3_1_1 = v_369_3;
          } else {
            v_369_3_1_0 = v_369_3;
          };
        } else {
          v_369_2_0 = v_369_2;
          if (v_369_2_0) {
            v_369_3_0_1 = v_369_3;
          } else {
            v_369_3_0_0 = v_369_3;
          };
        };
        if (v_371_1) {
          v_371_2_1 = v_371_2;
          if (v_371_2_1) {
            v_371_3_1_1 = v_371_3;
          } else {
            v_371_3_1_0 = v_371_3;
          };
        } else {
          v_371_2_0 = v_371_2;
          if (v_371_2_0) {
            v_371_3_0_1 = v_371_3;
          } else {
            v_371_3_0_0 = v_371_3;
          };
        };
        if (v_373_1) {
          v_373_2_1 = v_373_2;
          if (v_373_2_1) {
            v_373_3_1_1 = v_373_3;
          } else {
            v_373_3_1_0 = v_373_3;
          };
        } else {
          v_373_2_0 = v_373_2;
          if (v_373_2_0) {
            v_373_3_0_1 = v_373_3;
          } else {
            v_373_3_0_0 = v_373_3;
          };
        };
        if (s_12_St_11_POP_1) {
          s_12_St_11_POP_2_1 = s_12_St_11_POP_2;
          if (s_12_St_11_POP_2_1) {
            s_12_St_11_POP_3_1_1 = s_12_St_11_POP_3;
          } else {
            s_12_St_11_POP_3_1_0 = s_12_St_11_POP_3;
          };
        } else {
          s_12_St_11_POP_2_0 = s_12_St_11_POP_2;
          if (s_12_St_11_POP_2_0) {
            s_12_St_11_POP_3_0_1 = s_12_St_11_POP_3;
          } else {
            s_12_St_11_POP_3_0_0 = s_12_St_11_POP_3;
          };
        };
      };
      v_1082 = v_1073;
      v_1083 = v_1074;
      v_1084 = v_1075;
      v_1090 = v_1088;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_343 = (tipo_1==7);
        if (v_343) {
          v_345 = true;
          v_344_1 = false;
          v_344_2 = false;
          v_344_3 = false;
        } else {
          v_345 = self->pnr_7;
          v_344_1 = false;
          v_344_2 = false;
          v_344_3 = true;
        };
        v_342 = (tipo_1==5);
        if (v_342) {
          v_347 = true;
          v_346_1 = false;
          v_346_2 = true;
          v_346_3 = false;
        } else {
          v_347 = v_345;
          v_346_1 = v_344_1;
          v_346_2 = v_344_2;
          v_346_3 = v_344_3;
        };
        v_341 = (tipo_1==4);
        if (v_341) {
          v_349 = true;
          v_348_1 = true;
          v_348_2 = false;
          v_348_3 = false;
        } else {
          v_349 = v_347;
          v_348_1 = v_346_1;
          v_348_2 = v_346_2;
          v_348_3 = v_346_3;
        };
        v_340 = (tipo_1==3);
        if (v_340) {
          v_351 = true;
          v_350_1 = true;
          v_350_2 = false;
          v_350_3 = true;
        } else {
          v_351 = v_349;
          v_350_1 = v_348_1;
          v_350_2 = v_348_2;
          v_350_3 = v_348_3;
        };
        v_339 = (tipo_1==2);
        if (v_339) {
          v_353 = true;
          v_352_1 = true;
          v_352_2 = true;
          v_352_3 = false;
        } else {
          v_353 = v_351;
          v_352_1 = v_350_1;
          v_352_2 = v_350_2;
          v_352_3 = v_350_3;
        };
        v_338 = (tipo_1==1);
        if (v_338) {
          v_355 = true;
          v_354_1 = true;
          v_354_2 = true;
          v_354_3 = true;
        } else {
          v_355 = v_353;
          v_354_1 = v_352_1;
          v_354_2 = v_352_2;
          v_354_3 = v_352_3;
        };
        v_337 = (tipo_1==0);
        if (v_337) {
          r_7_St_11_Regue = true;
          s_12_St_11_Regue_1 = false;
          s_12_St_11_Regue_2 = true;
          s_12_St_11_Regue_3 = true;
        } else {
          r_7_St_11_Regue = v_355;
          s_12_St_11_Regue_1 = v_354_1;
          s_12_St_11_Regue_2 = v_354_2;
          s_12_St_11_Regue_3 = v_354_3;
        };
        v_1089 = r_7_St_11_Regue;
        v_1076 = s_12_St_11_Regue_1;
        v_1077 = s_12_St_11_Regue_2;
        v_1078 = s_12_St_11_Regue_3;
      } else {
        v_324 = (tipo_1==6);
        if (v_324) {
          v_326 = true;
          v_325_1 = false;
          v_325_2 = false;
          v_325_3 = true;
        } else {
          v_326 = self->pnr_7;
          v_325_1 = false;
          v_325_2 = false;
          v_325_3 = false;
        };
        v_323 = (tipo_1==5);
        if (v_323) {
          v_328 = true;
          v_327_1 = false;
          v_327_2 = true;
          v_327_3 = false;
        } else {
          v_328 = v_326;
          v_327_1 = v_325_1;
          v_327_2 = v_325_2;
          v_327_3 = v_325_3;
        };
        v_322 = (tipo_1==4);
        if (v_322) {
          v_330 = true;
          v_329_1 = true;
          v_329_2 = false;
          v_329_3 = false;
        } else {
          v_330 = v_328;
          v_329_1 = v_327_1;
          v_329_2 = v_327_2;
          v_329_3 = v_327_3;
        };
        v_321 = (tipo_1==3);
        if (v_321) {
          v_332 = true;
          v_331_1 = true;
          v_331_2 = false;
          v_331_3 = true;
        } else {
          v_332 = v_330;
          v_331_1 = v_329_1;
          v_331_2 = v_329_2;
          v_331_3 = v_329_3;
        };
        v_320 = (tipo_1==2);
        if (v_320) {
          v_334 = true;
          v_333_1 = true;
          v_333_2 = true;
          v_333_3 = false;
        } else {
          v_334 = v_332;
          v_333_1 = v_331_1;
          v_333_2 = v_331_2;
          v_333_3 = v_331_3;
        };
        v_319 = (tipo_1==1);
        if (v_319) {
          v_336 = true;
          v_335_1 = true;
          v_335_2 = true;
          v_335_3 = true;
        } else {
          v_336 = v_334;
          v_335_1 = v_333_1;
          v_335_2 = v_333_2;
          v_335_3 = v_333_3;
        };
        v_318 = (tipo_1==0);
        if (v_318) {
          r_7_St_11_Rock = true;
        } else {
          r_7_St_11_Rock = v_336;
        };
        v_1089 = r_7_St_11_Rock;
        if (v_318) {
          s_12_St_11_Rock_1 = false;
        } else {
          s_12_St_11_Rock_1 = v_335_1;
        };
        v_1076 = s_12_St_11_Rock_1;
        if (v_318) {
          s_12_St_11_Rock_2 = true;
        } else {
          s_12_St_11_Rock_2 = v_335_2;
        };
        v_1077 = s_12_St_11_Rock_2;
        if (v_318) {
          s_12_St_11_Rock_3 = true;
        } else {
          s_12_St_11_Rock_3 = v_335_3;
        };
        v_1078 = s_12_St_11_Rock_3;
      };
      v_1082 = v_1076;
      v_1083 = v_1077;
      v_1084 = v_1078;
      v_1090 = v_1089;
    };
    s_12_1 = v_1082;
    s_12_2 = v_1083;
    s_12_3 = v_1084;
    r_7 = v_1090;
  };
  ck_5_1 = s_12_1;
  ck_5_2 = s_12_2;
  ck_5_3 = s_12_3;
  Main_controller__main_controller_step(upa, downa, upm, downm, upg, downg,
                                        upv, downv, v_318, v_319, v_320,
                                        v_321, v_322, v_323, v_324, v_337,
                                        v_338, v_339, v_340, v_341, v_342,
                                        v_343, v_356, v_357, v_358, v_359,
                                        v_360, v_361, v_362, v_451, v_452,
                                        v_453, v_454, v_455, v_456, v_457,
                                        v_375, v_376, v_377, v_378, v_379,
                                        v_380, v_381, v_394, v_395, v_396,
                                        v_397, v_398, v_399, v_400, v_413,
                                        v_414, v_415, v_416, v_417, v_418,
                                        v_419, v_432, v_433, v_434, v_435,
                                        v_436, v_437, v_438, self->v_1066,
                                        self->v_1065, self->v_1064,
                                        self->pnr_7, self->ck_6_1,
                                        self->pnr_6, self->ck_8_1,
                                        self->pnr_5, self->ck_10_1,
                                        self->pnr_4, self->v_1013,
                                        self->v_1012, self->v_1011,
                                        self->pnr_3, self->v_965,
                                        self->v_964, self->v_963,
                                        self->pnr_2, self->v_917,
                                        self->v_916, self->v_915,
                                        self->pnr_1, self->v_869,
                                        self->v_868, self->v_867, self->pnr,
                                        true, true, true, true, true, true,
                                        true, true, true, true, true, true,
                                        true, true, true, true, true, true,
                                        true, true, true, true, true, true,
                                        true, true, true,
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
        v_689 = (up_3&&c_6);
        v_688 = !(cvh_3);
        v_690 = (v_688||v_689);
        if (v_690) {
          v_692 = true;
          v_691_1 = false;
          v_691_2 = false;
          v_691_3 = true;
        } else {
          v_692 = self->pnr;
          v_691_1 = true;
          v_691_2 = true;
          v_691_3 = true;
        };
        v_686 = (down_3&&c_6);
        v_685 = !(cmi_3);
        v_687 = (v_685||v_686);
        if (v_687) {
          v_694 = true;
          v_693_1 = true;
          v_693_2 = false;
          v_693_3 = false;
        } else {
          v_694 = v_692;
          v_693_1 = v_691_1;
          v_693_2 = v_691_2;
          v_693_3 = v_691_3;
        };
        v_684 = !(clo_3);
        if (v_684) {
          v_696 = true;
          v_695_1 = true;
          v_695_2 = true;
          v_695_3 = false;
        } else {
          v_696 = v_694;
          v_695_1 = v_693_1;
          v_695_2 = v_693_2;
          v_695_3 = v_693_3;
        };
        v_683 = !(cvl_3);
        if (v_683) {
          r_St_4_High = true;
        } else {
          r_St_4_High = v_696;
        };
        v_885 = r_St_4_High;
        if (v_683) {
          s_5_St_4_High_1 = false;
        } else {
          s_5_St_4_High_1 = v_695_1;
        };
        v_870 = s_5_St_4_High_1;
        if (v_683) {
          s_5_St_4_High_2 = false;
        } else {
          s_5_St_4_High_2 = v_695_2;
        };
        v_871 = s_5_St_4_High_2;
        if (v_683) {
          s_5_St_4_High_3 = false;
        } else {
          s_5_St_4_High_3 = v_695_3;
        };
        v_872 = s_5_St_4_High_3;
      } else {
        v_718 = !(cvh_3);
        if (v_718) {
          v_720 = true;
          v_719_1 = false;
          v_719_2 = false;
          v_719_3 = true;
        } else {
          v_720 = self->pnr;
          v_719_1 = true;
          v_719_2 = true;
          v_719_3 = false;
        };
        v_717 = !(chi_3);
        if (v_717) {
          v_722 = true;
          v_721_1 = true;
          v_721_2 = true;
          v_721_3 = true;
        } else {
          v_722 = v_720;
          v_721_1 = v_719_1;
          v_721_2 = v_719_2;
          v_721_3 = v_719_3;
        };
        v_715 = (up_3&&c_6);
        v_714 = !(cmi_3);
        v_716 = (v_714||v_715);
        if (v_716) {
          v_724 = true;
          v_723_1 = true;
          v_723_2 = false;
          v_723_3 = false;
        } else {
          v_724 = v_722;
          v_723_1 = v_721_1;
          v_723_2 = v_721_2;
          v_723_3 = v_721_3;
        };
        v_712 = (down_3&&c_6);
        v_711 = !(cvl_3);
        v_713 = (v_711||v_712);
        if (v_713) {
          r_St_4_Low = true;
          s_5_St_4_Low_1 = false;
          s_5_St_4_Low_2 = false;
          s_5_St_4_Low_3 = false;
        } else {
          r_St_4_Low = v_724;
          s_5_St_4_Low_1 = v_723_1;
          s_5_St_4_Low_2 = v_723_2;
          s_5_St_4_Low_3 = v_723_3;
        };
        v_885 = r_St_4_Low;
        v_870 = s_5_St_4_Low_1;
        v_871 = s_5_St_4_Low_2;
        v_872 = s_5_St_4_Low_3;
        if (v_719_1) {
          v_719_2_1 = v_719_2;
          if (v_719_2_1) {
            v_719_3_1_1 = v_719_3;
          } else {
            v_719_3_1_0 = v_719_3;
          };
        } else {
          v_719_2_0 = v_719_2;
          if (v_719_2_0) {
            v_719_3_0_1 = v_719_3;
          } else {
            v_719_3_0_0 = v_719_3;
          };
        };
        if (v_721_1) {
          v_721_2_1 = v_721_2;
          if (v_721_2_1) {
            v_721_3_1_1 = v_721_3;
          } else {
            v_721_3_1_0 = v_721_3;
          };
        } else {
          v_721_2_0 = v_721_2;
          if (v_721_2_0) {
            v_721_3_0_1 = v_721_3;
          } else {
            v_721_3_0_0 = v_721_3;
          };
        };
        if (v_723_1) {
          v_723_2_1 = v_723_2;
          if (v_723_2_1) {
            v_723_3_1_1 = v_723_3;
          } else {
            v_723_3_1_0 = v_723_3;
          };
        } else {
          v_723_2_0 = v_723_2;
          if (v_723_2_0) {
            v_723_3_0_1 = v_723_3;
          } else {
            v_723_3_0_0 = v_723_3;
          };
        };
      };
      v_879 = v_870;
      v_880 = v_871;
      v_881 = v_872;
      v_887 = v_885;
      if (ck_18_3_1_1) {
        if (v_691_1) {
          v_691_2_1 = v_691_2;
          if (v_691_2_1) {
            v_691_3_1_1 = v_691_3;
          } else {
            v_691_3_1_0 = v_691_3;
          };
        } else {
          v_691_2_0 = v_691_2;
          if (v_691_2_0) {
            v_691_3_0_1 = v_691_3;
          } else {
            v_691_3_0_0 = v_691_3;
          };
        };
        if (v_693_1) {
          v_693_2_1 = v_693_2;
          if (v_693_2_1) {
            v_693_3_1_1 = v_693_3;
          } else {
            v_693_3_1_0 = v_693_3;
          };
        } else {
          v_693_2_0 = v_693_2;
          if (v_693_2_0) {
            v_693_3_0_1 = v_693_3;
          } else {
            v_693_3_0_0 = v_693_3;
          };
        };
        if (v_695_1) {
          v_695_2_1 = v_695_2;
          if (v_695_2_1) {
            v_695_3_1_1 = v_695_3;
          } else {
            v_695_3_1_0 = v_695_3;
          };
        } else {
          v_695_2_0 = v_695_2;
          if (v_695_2_0) {
            v_695_3_0_1 = v_695_3;
          } else {
            v_695_3_0_0 = v_695_3;
          };
        };
        if (s_5_St_4_High_1) {
          s_5_St_4_High_2_1 = s_5_St_4_High_2;
          if (s_5_St_4_High_2_1) {
            s_5_St_4_High_3_1_1 = s_5_St_4_High_3;
          } else {
            s_5_St_4_High_3_1_0 = s_5_St_4_High_3;
          };
        } else {
          s_5_St_4_High_2_0 = s_5_St_4_High_2;
          if (s_5_St_4_High_2_0) {
            s_5_St_4_High_3_0_1 = s_5_St_4_High_3;
          } else {
            s_5_St_4_High_3_0_0 = s_5_St_4_High_3;
          };
        };
      } else {
        if (s_5_St_4_Low_1) {
          s_5_St_4_Low_2_1 = s_5_St_4_Low_2;
          if (s_5_St_4_Low_2_1) {
            s_5_St_4_Low_3_1_1 = s_5_St_4_Low_3;
          } else {
            s_5_St_4_Low_3_1_0 = s_5_St_4_Low_3;
          };
        } else {
          s_5_St_4_Low_2_0 = s_5_St_4_Low_2;
          if (s_5_St_4_Low_2_0) {
            s_5_St_4_Low_3_0_1 = s_5_St_4_Low_3;
          } else {
            s_5_St_4_Low_3_0_0 = s_5_St_4_Low_3;
          };
        };
      };
    } else {
      if (ck_18_3_1_0) {
        v_886 = true;
        v_873 = true;
        v_874 = true;
        v_875 = true;
      } else {
        v_704 = !(cvh_3);
        if (v_704) {
          v_706 = true;
          v_705_1 = false;
          v_705_2 = false;
          v_705_3 = true;
        } else {
          v_706 = self->pnr;
          v_705_1 = true;
          v_705_2 = false;
          v_705_3 = false;
        };
        v_702 = (up_3&&c_6);
        v_701 = !(chi_3);
        v_703 = (v_701||v_702);
        if (v_703) {
          v_708 = true;
          v_707_1 = true;
          v_707_2 = true;
          v_707_3 = true;
        } else {
          v_708 = v_706;
          v_707_1 = v_705_1;
          v_707_2 = v_705_2;
          v_707_3 = v_705_3;
        };
        v_699 = (down_3&&c_6);
        v_698 = !(clo_3);
        v_700 = (v_698||v_699);
        if (v_700) {
          v_710 = true;
          v_709_1 = true;
          v_709_2 = true;
          v_709_3 = false;
        } else {
          v_710 = v_708;
          v_709_1 = v_707_1;
          v_709_2 = v_707_2;
          v_709_3 = v_707_3;
        };
        v_697 = !(cvl_3);
        if (v_697) {
          r_St_4_Mid = true;
        } else {
          r_St_4_Mid = v_710;
        };
        v_886 = r_St_4_Mid;
        if (v_697) {
          s_5_St_4_Mid_1 = false;
        } else {
          s_5_St_4_Mid_1 = v_709_1;
        };
        v_873 = s_5_St_4_Mid_1;
        if (v_697) {
          s_5_St_4_Mid_2 = false;
        } else {
          s_5_St_4_Mid_2 = v_709_2;
        };
        v_874 = s_5_St_4_Mid_2;
        if (v_697) {
          s_5_St_4_Mid_3 = false;
        } else {
          s_5_St_4_Mid_3 = v_709_3;
        };
        v_875 = s_5_St_4_Mid_3;
        if (v_705_1) {
          v_705_2_1 = v_705_2;
          if (v_705_2_1) {
            v_705_3_1_1 = v_705_3;
          } else {
            v_705_3_1_0 = v_705_3;
          };
        } else {
          v_705_2_0 = v_705_2;
          if (v_705_2_0) {
            v_705_3_0_1 = v_705_3;
          } else {
            v_705_3_0_0 = v_705_3;
          };
        };
        if (v_707_1) {
          v_707_2_1 = v_707_2;
          if (v_707_2_1) {
            v_707_3_1_1 = v_707_3;
          } else {
            v_707_3_1_0 = v_707_3;
          };
        } else {
          v_707_2_0 = v_707_2;
          if (v_707_2_0) {
            v_707_3_0_1 = v_707_3;
          } else {
            v_707_3_0_0 = v_707_3;
          };
        };
        if (v_709_1) {
          v_709_2_1 = v_709_2;
          if (v_709_2_1) {
            v_709_3_1_1 = v_709_3;
          } else {
            v_709_3_1_0 = v_709_3;
          };
        } else {
          v_709_2_0 = v_709_2;
          if (v_709_2_0) {
            v_709_3_0_1 = v_709_3;
          } else {
            v_709_3_0_0 = v_709_3;
          };
        };
        if (s_5_St_4_Mid_1) {
          s_5_St_4_Mid_2_1 = s_5_St_4_Mid_2;
          if (s_5_St_4_Mid_2_1) {
            s_5_St_4_Mid_3_1_1 = s_5_St_4_Mid_3;
          } else {
            s_5_St_4_Mid_3_1_0 = s_5_St_4_Mid_3;
          };
        } else {
          s_5_St_4_Mid_2_0 = s_5_St_4_Mid_2;
          if (s_5_St_4_Mid_2_0) {
            s_5_St_4_Mid_3_0_1 = s_5_St_4_Mid_3;
          } else {
            s_5_St_4_Mid_3_0_0 = s_5_St_4_Mid_3;
          };
        };
      };
      v_879 = v_873;
      v_880 = v_874;
      v_881 = v_875;
      v_887 = v_886;
    };
    s_5_1 = v_879;
    s_5_2 = v_880;
    s_5_3 = v_881;
    r = v_887;
  } else {
    if (ck_18_2_0) {
      v_882 = true;
      v_883 = true;
      v_884 = true;
      v_889 = true;
    } else {
      if (ck_18_3_0_0) {
        v_675 = (down_3&&c_6);
        v_674 = !(chi_3);
        v_676 = (v_674||v_675);
        if (v_676) {
          v_678 = true;
          v_677_1 = true;
          v_677_2 = true;
          v_677_3 = true;
        } else {
          v_678 = self->pnr;
          v_677_1 = false;
          v_677_2 = false;
          v_677_3 = true;
        };
        v_673 = !(cmi_3);
        if (v_673) {
          v_680 = true;
          v_679_1 = true;
          v_679_2 = false;
          v_679_3 = false;
        } else {
          v_680 = v_678;
          v_679_1 = v_677_1;
          v_679_2 = v_677_2;
          v_679_3 = v_677_3;
        };
        v_672 = !(clo_3);
        if (v_672) {
          v_682 = true;
          v_681_1 = true;
          v_681_2 = true;
          v_681_3 = false;
        } else {
          v_682 = v_680;
          v_681_1 = v_679_1;
          v_681_2 = v_679_2;
          v_681_3 = v_679_3;
        };
        v_671 = !(cvl_3);
        if (v_671) {
          r_St_4_Veryhigh = true;
        } else {
          r_St_4_Veryhigh = v_682;
        };
        v_888 = r_St_4_Veryhigh;
        if (v_671) {
          s_5_St_4_Veryhigh_1 = false;
        } else {
          s_5_St_4_Veryhigh_1 = v_681_1;
        };
        v_876 = s_5_St_4_Veryhigh_1;
        if (v_671) {
          s_5_St_4_Veryhigh_2 = false;
        } else {
          s_5_St_4_Veryhigh_2 = v_681_2;
        };
        v_877 = s_5_St_4_Veryhigh_2;
        if (v_671) {
          s_5_St_4_Veryhigh_3 = false;
        } else {
          s_5_St_4_Veryhigh_3 = v_681_3;
        };
        v_878 = s_5_St_4_Veryhigh_3;
        if (v_677_1) {
          v_677_2_1 = v_677_2;
          if (v_677_2_1) {
            v_677_3_1_1 = v_677_3;
          } else {
            v_677_3_1_0 = v_677_3;
          };
        } else {
          v_677_2_0 = v_677_2;
          if (v_677_2_0) {
            v_677_3_0_1 = v_677_3;
          } else {
            v_677_3_0_0 = v_677_3;
          };
        };
        if (v_679_1) {
          v_679_2_1 = v_679_2;
          if (v_679_2_1) {
            v_679_3_1_1 = v_679_3;
          } else {
            v_679_3_1_0 = v_679_3;
          };
        } else {
          v_679_2_0 = v_679_2;
          if (v_679_2_0) {
            v_679_3_0_1 = v_679_3;
          } else {
            v_679_3_0_0 = v_679_3;
          };
        };
        if (v_681_1) {
          v_681_2_1 = v_681_2;
          if (v_681_2_1) {
            v_681_3_1_1 = v_681_3;
          } else {
            v_681_3_1_0 = v_681_3;
          };
        } else {
          v_681_2_0 = v_681_2;
          if (v_681_2_0) {
            v_681_3_0_1 = v_681_3;
          } else {
            v_681_3_0_0 = v_681_3;
          };
        };
      } else {
        v_730 = !(cvh_3);
        if (v_730) {
          v_732 = true;
          v_731_1 = false;
          v_731_2 = false;
          v_731_3 = true;
        } else {
          v_732 = self->pnr;
          v_731_1 = false;
          v_731_2 = false;
          v_731_3 = false;
        };
        v_729 = !(chi_3);
        if (v_729) {
          v_734 = true;
          v_733_1 = true;
          v_733_2 = true;
          v_733_3 = true;
        } else {
          v_734 = v_732;
          v_733_1 = v_731_1;
          v_733_2 = v_731_2;
          v_733_3 = v_731_3;
        };
        v_728 = !(cmi_3);
        if (v_728) {
          v_736 = true;
          v_735_1 = true;
          v_735_2 = false;
          v_735_3 = false;
        } else {
          v_736 = v_734;
          v_735_1 = v_733_1;
          v_735_2 = v_733_2;
          v_735_3 = v_733_3;
        };
        v_726 = (up_3&&c_6);
        v_725 = !(clo_3);
        v_727 = (v_725||v_726);
        if (v_727) {
          r_St_4_Verylow = true;
          s_5_St_4_Verylow_1 = true;
          s_5_St_4_Verylow_2 = true;
          s_5_St_4_Verylow_3 = false;
        } else {
          r_St_4_Verylow = v_736;
          s_5_St_4_Verylow_1 = v_735_1;
          s_5_St_4_Verylow_2 = v_735_2;
          s_5_St_4_Verylow_3 = v_735_3;
        };
        v_888 = r_St_4_Verylow;
        v_876 = s_5_St_4_Verylow_1;
        v_877 = s_5_St_4_Verylow_2;
        v_878 = s_5_St_4_Verylow_3;
        if (v_731_1) {
          v_731_2_1 = v_731_2;
          if (v_731_2_1) {
            v_731_3_1_1 = v_731_3;
          } else {
            v_731_3_1_0 = v_731_3;
          };
        } else {
          v_731_2_0 = v_731_2;
          if (v_731_2_0) {
            v_731_3_0_1 = v_731_3;
          } else {
            v_731_3_0_0 = v_731_3;
          };
        };
        if (v_733_1) {
          v_733_2_1 = v_733_2;
          if (v_733_2_1) {
            v_733_3_1_1 = v_733_3;
          } else {
            v_733_3_1_0 = v_733_3;
          };
        } else {
          v_733_2_0 = v_733_2;
          if (v_733_2_0) {
            v_733_3_0_1 = v_733_3;
          } else {
            v_733_3_0_0 = v_733_3;
          };
        };
        if (v_735_1) {
          v_735_2_1 = v_735_2;
          if (v_735_2_1) {
            v_735_3_1_1 = v_735_3;
          } else {
            v_735_3_1_0 = v_735_3;
          };
        } else {
          v_735_2_0 = v_735_2;
          if (v_735_2_0) {
            v_735_3_0_1 = v_735_3;
          } else {
            v_735_3_0_0 = v_735_3;
          };
        };
      };
      v_882 = v_876;
      v_883 = v_877;
      v_884 = v_878;
      v_889 = v_888;
    };
    s_5_1 = v_882;
    s_5_2 = v_883;
    s_5_3 = v_884;
    r = v_889;
  };
  ck_19_1 = s_5_1;
  ck_19_2 = s_5_2;
  ck_19_3 = s_5_3;
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      ck_19_3_1_1 = ck_19_3;
      if (ck_19_3_1_1) {
        s_3_St_4_High = 4;
        v_842 = s_3_St_4_High;
        nr_St_4_High = false;
        v_862 = nr_St_4_High;
        ns_St_4_High_1 = true;
        v_847 = ns_St_4_High_1;
        ns_St_4_High_2 = true;
        v_848 = ns_St_4_High_2;
        ns_St_4_High_3 = true;
        v_849 = ns_St_4_High_3;
      } else {
        s_3_St_4_Low = 2;
        nr_St_4_Low = false;
        ns_St_4_Low_1 = true;
        ns_St_4_Low_2 = true;
        ns_St_4_Low_3 = false;
        v_842 = s_3_St_4_Low;
        v_862 = nr_St_4_Low;
        v_847 = ns_St_4_Low_1;
        v_848 = ns_St_4_Low_2;
        v_849 = ns_St_4_Low_3;
      };
      v_844 = v_842;
      v_856 = v_847;
      v_857 = v_848;
      v_858 = v_849;
      v_864 = v_862;
      if (ck_19_3_1_1) {
        if (ns_St_4_High_1) {
          ns_St_4_High_2_1 = ns_St_4_High_2;
          if (ns_St_4_High_2_1) {
            ns_St_4_High_3_1_1 = ns_St_4_High_3;
          } else {
            ns_St_4_High_3_1_0 = ns_St_4_High_3;
          };
        } else {
          ns_St_4_High_2_0 = ns_St_4_High_2;
          if (ns_St_4_High_2_0) {
            ns_St_4_High_3_0_1 = ns_St_4_High_3;
          } else {
            ns_St_4_High_3_0_0 = ns_St_4_High_3;
          };
        };
      } else {
        if (ns_St_4_Low_1) {
          ns_St_4_Low_2_1 = ns_St_4_Low_2;
          if (ns_St_4_Low_2_1) {
            ns_St_4_Low_3_1_1 = ns_St_4_Low_3;
          } else {
            ns_St_4_Low_3_1_0 = ns_St_4_Low_3;
          };
        } else {
          ns_St_4_Low_2_0 = ns_St_4_Low_2;
          if (ns_St_4_Low_2_0) {
            ns_St_4_Low_3_0_1 = ns_St_4_Low_3;
          } else {
            ns_St_4_Low_3_0_0 = ns_St_4_Low_3;
          };
        };
      };
    } else {
      ck_19_3_1_0 = ck_19_3;
      if (ck_19_3_1_0) {
        v_843 = 0;
        v_863 = true;
        v_850 = true;
        v_851 = true;
        v_852 = true;
      } else {
        s_3_St_4_Mid = 3;
        v_843 = s_3_St_4_Mid;
        nr_St_4_Mid = false;
        v_863 = nr_St_4_Mid;
        ns_St_4_Mid_1 = true;
        v_850 = ns_St_4_Mid_1;
        ns_St_4_Mid_2 = false;
        v_851 = ns_St_4_Mid_2;
        ns_St_4_Mid_3 = false;
        v_852 = ns_St_4_Mid_3;
        if (ns_St_4_Mid_1) {
          ns_St_4_Mid_2_1 = ns_St_4_Mid_2;
          if (ns_St_4_Mid_2_1) {
            ns_St_4_Mid_3_1_1 = ns_St_4_Mid_3;
          } else {
            ns_St_4_Mid_3_1_0 = ns_St_4_Mid_3;
          };
        } else {
          ns_St_4_Mid_2_0 = ns_St_4_Mid_2;
          if (ns_St_4_Mid_2_0) {
            ns_St_4_Mid_3_0_1 = ns_St_4_Mid_3;
          } else {
            ns_St_4_Mid_3_0_0 = ns_St_4_Mid_3;
          };
        };
      };
      v_844 = v_843;
      v_856 = v_850;
      v_857 = v_851;
      v_858 = v_852;
      v_864 = v_863;
    };
    s_3 = v_844;
    ns_1_4 = v_856;
    ns_2_4 = v_857;
    ns_3_4 = v_858;
    nr = v_864;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      ck_19_3_0_1 = ck_19_3;
      v_846 = 0;
      v_859 = true;
      v_860 = true;
      v_861 = true;
      v_866 = true;
    } else {
      ck_19_3_0_0 = ck_19_3;
      if (ck_19_3_0_0) {
        s_3_St_4_Veryhigh = 5;
        v_845 = s_3_St_4_Veryhigh;
        nr_St_4_Veryhigh = false;
        v_865 = nr_St_4_Veryhigh;
        ns_St_4_Veryhigh_1 = false;
        v_853 = ns_St_4_Veryhigh_1;
        ns_St_4_Veryhigh_2 = false;
        v_854 = ns_St_4_Veryhigh_2;
        ns_St_4_Veryhigh_3 = true;
        v_855 = ns_St_4_Veryhigh_3;
      } else {
        s_3_St_4_Verylow = 1;
        nr_St_4_Verylow = false;
        ns_St_4_Verylow_1 = false;
        ns_St_4_Verylow_2 = false;
        ns_St_4_Verylow_3 = false;
        v_845 = s_3_St_4_Verylow;
        v_865 = nr_St_4_Verylow;
        v_853 = ns_St_4_Verylow_1;
        v_854 = ns_St_4_Verylow_2;
        v_855 = ns_St_4_Verylow_3;
      };
      v_846 = v_845;
      v_859 = v_853;
      v_860 = v_854;
      v_861 = v_855;
      v_866 = v_865;
    };
    s_3 = v_846;
    ns_1_4 = v_859;
    ns_2_4 = v_860;
    ns_3_4 = v_861;
    nr = v_866;
  };
  _out->volume = s_3;
  v = (_out->volume>=2);
  ruleVol = !(v);
  if (ns_1_4) {
    ns_2_4_1 = ns_2_4;
    if (ns_2_4_1) {
      ns_3_4_1_1 = ns_3_4;
    } else {
      ns_3_4_1_0 = ns_3_4;
    };
  } else {
    ns_2_4_0 = ns_2_4;
    if (ns_2_4_0) {
      ns_3_4_0_1 = ns_3_4;
    } else {
      ns_3_4_0_0 = ns_3_4;
    };
  };
  if (!(ck_19_1)) {
    if (!(ck_19_2_0)) {
      if (ck_19_3_0_0) {
        if (ns_St_4_Veryhigh_1) {
          ns_St_4_Veryhigh_2_1 = ns_St_4_Veryhigh_2;
          if (ns_St_4_Veryhigh_2_1) {
            ns_St_4_Veryhigh_3_1_1 = ns_St_4_Veryhigh_3;
          } else {
            ns_St_4_Veryhigh_3_1_0 = ns_St_4_Veryhigh_3;
          };
        } else {
          ns_St_4_Veryhigh_2_0 = ns_St_4_Veryhigh_2;
          if (ns_St_4_Veryhigh_2_0) {
            ns_St_4_Veryhigh_3_0_1 = ns_St_4_Veryhigh_3;
          } else {
            ns_St_4_Veryhigh_3_0_0 = ns_St_4_Veryhigh_3;
          };
        };
      } else {
        if (ns_St_4_Verylow_1) {
          ns_St_4_Verylow_2_1 = ns_St_4_Verylow_2;
          if (ns_St_4_Verylow_2_1) {
            ns_St_4_Verylow_3_1_1 = ns_St_4_Verylow_3;
          } else {
            ns_St_4_Verylow_3_1_0 = ns_St_4_Verylow_3;
          };
        } else {
          ns_St_4_Verylow_2_0 = ns_St_4_Verylow_2;
          if (ns_St_4_Verylow_2_0) {
            ns_St_4_Verylow_3_0_1 = ns_St_4_Verylow_3;
          } else {
            ns_St_4_Verylow_3_0_0 = ns_St_4_Verylow_3;
          };
        };
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
    if (s_5_2_1) {
      s_5_3_1_1 = s_5_3;
    } else {
      s_5_3_1_0 = s_5_3;
    };
  } else {
    s_5_2_0 = s_5_2;
    if (s_5_2_0) {
      s_5_3_0_1 = s_5_3;
    } else {
      s_5_3_0_0 = s_5_3;
    };
  };
  if (!(ck_18_1)) {
    if (!(ck_18_2_0)) {
      if (ck_18_3_0_0) {
        if (s_5_St_4_Veryhigh_1) {
          s_5_St_4_Veryhigh_2_1 = s_5_St_4_Veryhigh_2;
          if (s_5_St_4_Veryhigh_2_1) {
            s_5_St_4_Veryhigh_3_1_1 = s_5_St_4_Veryhigh_3;
          } else {
            s_5_St_4_Veryhigh_3_1_0 = s_5_St_4_Veryhigh_3;
          };
        } else {
          s_5_St_4_Veryhigh_2_0 = s_5_St_4_Veryhigh_2;
          if (s_5_St_4_Veryhigh_2_0) {
            s_5_St_4_Veryhigh_3_0_1 = s_5_St_4_Veryhigh_3;
          } else {
            s_5_St_4_Veryhigh_3_0_0 = s_5_St_4_Veryhigh_3;
          };
        };
      } else {
        if (s_5_St_4_Verylow_1) {
          s_5_St_4_Verylow_2_1 = s_5_St_4_Verylow_2;
          if (s_5_St_4_Verylow_2_1) {
            s_5_St_4_Verylow_3_1_1 = s_5_St_4_Verylow_3;
          } else {
            s_5_St_4_Verylow_3_1_0 = s_5_St_4_Verylow_3;
          };
        } else {
          s_5_St_4_Verylow_2_0 = s_5_St_4_Verylow_2;
          if (s_5_St_4_Verylow_2_0) {
            s_5_St_4_Verylow_3_0_1 = s_5_St_4_Verylow_3;
          } else {
            s_5_St_4_Verylow_3_0_0 = s_5_St_4_Verylow_3;
          };
        };
      };
    };
  };
  if (ck_16_1) {
    if (ck_16_2_1) {
      if (ck_16_3_1_1) {
        v_623 = (up_2&&c_5);
        v_622 = !(cvh_2);
        v_624 = (v_622||v_623);
        if (v_624) {
          v_626 = true;
          v_625_1 = false;
          v_625_2 = false;
          v_625_3 = true;
        } else {
          v_626 = self->pnr_1;
          v_625_1 = true;
          v_625_2 = true;
          v_625_3 = true;
        };
        v_620 = (down_2&&c_5);
        v_619 = !(cmi_2);
        v_621 = (v_619||v_620);
        if (v_621) {
          v_628 = true;
          v_627_1 = true;
          v_627_2 = false;
          v_627_3 = false;
        } else {
          v_628 = v_626;
          v_627_1 = v_625_1;
          v_627_2 = v_625_2;
          v_627_3 = v_625_3;
        };
        v_618 = !(clo_2);
        if (v_618) {
          v_630 = true;
          v_629_1 = true;
          v_629_2 = true;
          v_629_3 = false;
        } else {
          v_630 = v_628;
          v_629_1 = v_627_1;
          v_629_2 = v_627_2;
          v_629_3 = v_627_3;
        };
        v_617 = !(cvl_2);
        if (v_617) {
          r_1_St_5_High = true;
        } else {
          r_1_St_5_High = v_630;
        };
        v_933 = r_1_St_5_High;
        if (v_617) {
          s_6_St_5_High_1 = false;
        } else {
          s_6_St_5_High_1 = v_629_1;
        };
        v_918 = s_6_St_5_High_1;
        if (v_617) {
          s_6_St_5_High_2 = false;
        } else {
          s_6_St_5_High_2 = v_629_2;
        };
        v_919 = s_6_St_5_High_2;
        if (v_617) {
          s_6_St_5_High_3 = false;
        } else {
          s_6_St_5_High_3 = v_629_3;
        };
        v_920 = s_6_St_5_High_3;
      } else {
        v_652 = !(cvh_2);
        if (v_652) {
          v_654 = true;
          v_653_1 = false;
          v_653_2 = false;
          v_653_3 = true;
        } else {
          v_654 = self->pnr_1;
          v_653_1 = true;
          v_653_2 = true;
          v_653_3 = false;
        };
        v_651 = !(chi_2);
        if (v_651) {
          v_656 = true;
          v_655_1 = true;
          v_655_2 = true;
          v_655_3 = true;
        } else {
          v_656 = v_654;
          v_655_1 = v_653_1;
          v_655_2 = v_653_2;
          v_655_3 = v_653_3;
        };
        v_649 = (up_2&&c_5);
        v_648 = !(cmi_2);
        v_650 = (v_648||v_649);
        if (v_650) {
          v_658 = true;
          v_657_1 = true;
          v_657_2 = false;
          v_657_3 = false;
        } else {
          v_658 = v_656;
          v_657_1 = v_655_1;
          v_657_2 = v_655_2;
          v_657_3 = v_655_3;
        };
        v_646 = (down_2&&c_5);
        v_645 = !(cvl_2);
        v_647 = (v_645||v_646);
        if (v_647) {
          r_1_St_5_Low = true;
          s_6_St_5_Low_1 = false;
          s_6_St_5_Low_2 = false;
          s_6_St_5_Low_3 = false;
        } else {
          r_1_St_5_Low = v_658;
          s_6_St_5_Low_1 = v_657_1;
          s_6_St_5_Low_2 = v_657_2;
          s_6_St_5_Low_3 = v_657_3;
        };
        v_933 = r_1_St_5_Low;
        v_918 = s_6_St_5_Low_1;
        v_919 = s_6_St_5_Low_2;
        v_920 = s_6_St_5_Low_3;
        if (v_653_1) {
          v_653_2_1 = v_653_2;
          if (v_653_2_1) {
            v_653_3_1_1 = v_653_3;
          } else {
            v_653_3_1_0 = v_653_3;
          };
        } else {
          v_653_2_0 = v_653_2;
          if (v_653_2_0) {
            v_653_3_0_1 = v_653_3;
          } else {
            v_653_3_0_0 = v_653_3;
          };
        };
        if (v_655_1) {
          v_655_2_1 = v_655_2;
          if (v_655_2_1) {
            v_655_3_1_1 = v_655_3;
          } else {
            v_655_3_1_0 = v_655_3;
          };
        } else {
          v_655_2_0 = v_655_2;
          if (v_655_2_0) {
            v_655_3_0_1 = v_655_3;
          } else {
            v_655_3_0_0 = v_655_3;
          };
        };
        if (v_657_1) {
          v_657_2_1 = v_657_2;
          if (v_657_2_1) {
            v_657_3_1_1 = v_657_3;
          } else {
            v_657_3_1_0 = v_657_3;
          };
        } else {
          v_657_2_0 = v_657_2;
          if (v_657_2_0) {
            v_657_3_0_1 = v_657_3;
          } else {
            v_657_3_0_0 = v_657_3;
          };
        };
      };
      v_927 = v_918;
      v_928 = v_919;
      v_929 = v_920;
      v_935 = v_933;
      if (ck_16_3_1_1) {
        if (v_625_1) {
          v_625_2_1 = v_625_2;
          if (v_625_2_1) {
            v_625_3_1_1 = v_625_3;
          } else {
            v_625_3_1_0 = v_625_3;
          };
        } else {
          v_625_2_0 = v_625_2;
          if (v_625_2_0) {
            v_625_3_0_1 = v_625_3;
          } else {
            v_625_3_0_0 = v_625_3;
          };
        };
        if (v_627_1) {
          v_627_2_1 = v_627_2;
          if (v_627_2_1) {
            v_627_3_1_1 = v_627_3;
          } else {
            v_627_3_1_0 = v_627_3;
          };
        } else {
          v_627_2_0 = v_627_2;
          if (v_627_2_0) {
            v_627_3_0_1 = v_627_3;
          } else {
            v_627_3_0_0 = v_627_3;
          };
        };
        if (v_629_1) {
          v_629_2_1 = v_629_2;
          if (v_629_2_1) {
            v_629_3_1_1 = v_629_3;
          } else {
            v_629_3_1_0 = v_629_3;
          };
        } else {
          v_629_2_0 = v_629_2;
          if (v_629_2_0) {
            v_629_3_0_1 = v_629_3;
          } else {
            v_629_3_0_0 = v_629_3;
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
      if (ck_16_3_1_0) {
        v_934 = true;
        v_921 = true;
        v_922 = true;
        v_923 = true;
      } else {
        v_638 = !(cvh_2);
        if (v_638) {
          v_640 = true;
          v_639_1 = false;
          v_639_2 = false;
          v_639_3 = true;
        } else {
          v_640 = self->pnr_1;
          v_639_1 = true;
          v_639_2 = false;
          v_639_3 = false;
        };
        v_636 = (up_2&&c_5);
        v_635 = !(chi_2);
        v_637 = (v_635||v_636);
        if (v_637) {
          v_642 = true;
          v_641_1 = true;
          v_641_2 = true;
          v_641_3 = true;
        } else {
          v_642 = v_640;
          v_641_1 = v_639_1;
          v_641_2 = v_639_2;
          v_641_3 = v_639_3;
        };
        v_633 = (down_2&&c_5);
        v_632 = !(clo_2);
        v_634 = (v_632||v_633);
        if (v_634) {
          v_644 = true;
          v_643_1 = true;
          v_643_2 = true;
          v_643_3 = false;
        } else {
          v_644 = v_642;
          v_643_1 = v_641_1;
          v_643_2 = v_641_2;
          v_643_3 = v_641_3;
        };
        v_631 = !(cvl_2);
        if (v_631) {
          r_1_St_5_Mid = true;
        } else {
          r_1_St_5_Mid = v_644;
        };
        v_934 = r_1_St_5_Mid;
        if (v_631) {
          s_6_St_5_Mid_1 = false;
        } else {
          s_6_St_5_Mid_1 = v_643_1;
        };
        v_921 = s_6_St_5_Mid_1;
        if (v_631) {
          s_6_St_5_Mid_2 = false;
        } else {
          s_6_St_5_Mid_2 = v_643_2;
        };
        v_922 = s_6_St_5_Mid_2;
        if (v_631) {
          s_6_St_5_Mid_3 = false;
        } else {
          s_6_St_5_Mid_3 = v_643_3;
        };
        v_923 = s_6_St_5_Mid_3;
        if (v_639_1) {
          v_639_2_1 = v_639_2;
          if (v_639_2_1) {
            v_639_3_1_1 = v_639_3;
          } else {
            v_639_3_1_0 = v_639_3;
          };
        } else {
          v_639_2_0 = v_639_2;
          if (v_639_2_0) {
            v_639_3_0_1 = v_639_3;
          } else {
            v_639_3_0_0 = v_639_3;
          };
        };
        if (v_641_1) {
          v_641_2_1 = v_641_2;
          if (v_641_2_1) {
            v_641_3_1_1 = v_641_3;
          } else {
            v_641_3_1_0 = v_641_3;
          };
        } else {
          v_641_2_0 = v_641_2;
          if (v_641_2_0) {
            v_641_3_0_1 = v_641_3;
          } else {
            v_641_3_0_0 = v_641_3;
          };
        };
        if (v_643_1) {
          v_643_2_1 = v_643_2;
          if (v_643_2_1) {
            v_643_3_1_1 = v_643_3;
          } else {
            v_643_3_1_0 = v_643_3;
          };
        } else {
          v_643_2_0 = v_643_2;
          if (v_643_2_0) {
            v_643_3_0_1 = v_643_3;
          } else {
            v_643_3_0_0 = v_643_3;
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
      v_927 = v_921;
      v_928 = v_922;
      v_929 = v_923;
      v_935 = v_934;
    };
    s_6_1 = v_927;
    s_6_2 = v_928;
    s_6_3 = v_929;
    r_1 = v_935;
  } else {
    if (ck_16_2_0) {
      v_930 = true;
      v_931 = true;
      v_932 = true;
      v_937 = true;
    } else {
      if (ck_16_3_0_0) {
        v_609 = (down_2&&c_5);
        v_608 = !(chi_2);
        v_610 = (v_608||v_609);
        if (v_610) {
          v_612 = true;
          v_611_1 = true;
          v_611_2 = true;
          v_611_3 = true;
        } else {
          v_612 = self->pnr_1;
          v_611_1 = false;
          v_611_2 = false;
          v_611_3 = true;
        };
        v_607 = !(cmi_2);
        if (v_607) {
          v_614 = true;
          v_613_1 = true;
          v_613_2 = false;
          v_613_3 = false;
        } else {
          v_614 = v_612;
          v_613_1 = v_611_1;
          v_613_2 = v_611_2;
          v_613_3 = v_611_3;
        };
        v_606 = !(clo_2);
        if (v_606) {
          v_616 = true;
          v_615_1 = true;
          v_615_2 = true;
          v_615_3 = false;
        } else {
          v_616 = v_614;
          v_615_1 = v_613_1;
          v_615_2 = v_613_2;
          v_615_3 = v_613_3;
        };
        v_605 = !(cvl_2);
        if (v_605) {
          r_1_St_5_Veryhigh = true;
        } else {
          r_1_St_5_Veryhigh = v_616;
        };
        v_936 = r_1_St_5_Veryhigh;
        if (v_605) {
          s_6_St_5_Veryhigh_1 = false;
        } else {
          s_6_St_5_Veryhigh_1 = v_615_1;
        };
        v_924 = s_6_St_5_Veryhigh_1;
        if (v_605) {
          s_6_St_5_Veryhigh_2 = false;
        } else {
          s_6_St_5_Veryhigh_2 = v_615_2;
        };
        v_925 = s_6_St_5_Veryhigh_2;
        if (v_605) {
          s_6_St_5_Veryhigh_3 = false;
        } else {
          s_6_St_5_Veryhigh_3 = v_615_3;
        };
        v_926 = s_6_St_5_Veryhigh_3;
        if (v_611_1) {
          v_611_2_1 = v_611_2;
          if (v_611_2_1) {
            v_611_3_1_1 = v_611_3;
          } else {
            v_611_3_1_0 = v_611_3;
          };
        } else {
          v_611_2_0 = v_611_2;
          if (v_611_2_0) {
            v_611_3_0_1 = v_611_3;
          } else {
            v_611_3_0_0 = v_611_3;
          };
        };
        if (v_613_1) {
          v_613_2_1 = v_613_2;
          if (v_613_2_1) {
            v_613_3_1_1 = v_613_3;
          } else {
            v_613_3_1_0 = v_613_3;
          };
        } else {
          v_613_2_0 = v_613_2;
          if (v_613_2_0) {
            v_613_3_0_1 = v_613_3;
          } else {
            v_613_3_0_0 = v_613_3;
          };
        };
        if (v_615_1) {
          v_615_2_1 = v_615_2;
          if (v_615_2_1) {
            v_615_3_1_1 = v_615_3;
          } else {
            v_615_3_1_0 = v_615_3;
          };
        } else {
          v_615_2_0 = v_615_2;
          if (v_615_2_0) {
            v_615_3_0_1 = v_615_3;
          } else {
            v_615_3_0_0 = v_615_3;
          };
        };
      } else {
        v_664 = !(cvh_2);
        if (v_664) {
          v_666 = true;
          v_665_1 = false;
          v_665_2 = false;
          v_665_3 = true;
        } else {
          v_666 = self->pnr_1;
          v_665_1 = false;
          v_665_2 = false;
          v_665_3 = false;
        };
        v_663 = !(chi_2);
        if (v_663) {
          v_668 = true;
          v_667_1 = true;
          v_667_2 = true;
          v_667_3 = true;
        } else {
          v_668 = v_666;
          v_667_1 = v_665_1;
          v_667_2 = v_665_2;
          v_667_3 = v_665_3;
        };
        v_662 = !(cmi_2);
        if (v_662) {
          v_670 = true;
          v_669_1 = true;
          v_669_2 = false;
          v_669_3 = false;
        } else {
          v_670 = v_668;
          v_669_1 = v_667_1;
          v_669_2 = v_667_2;
          v_669_3 = v_667_3;
        };
        v_660 = (up_2&&c_5);
        v_659 = !(clo_2);
        v_661 = (v_659||v_660);
        if (v_661) {
          r_1_St_5_Verylow = true;
          s_6_St_5_Verylow_1 = true;
          s_6_St_5_Verylow_2 = true;
          s_6_St_5_Verylow_3 = false;
        } else {
          r_1_St_5_Verylow = v_670;
          s_6_St_5_Verylow_1 = v_669_1;
          s_6_St_5_Verylow_2 = v_669_2;
          s_6_St_5_Verylow_3 = v_669_3;
        };
        v_936 = r_1_St_5_Verylow;
        v_924 = s_6_St_5_Verylow_1;
        v_925 = s_6_St_5_Verylow_2;
        v_926 = s_6_St_5_Verylow_3;
        if (v_665_1) {
          v_665_2_1 = v_665_2;
          if (v_665_2_1) {
            v_665_3_1_1 = v_665_3;
          } else {
            v_665_3_1_0 = v_665_3;
          };
        } else {
          v_665_2_0 = v_665_2;
          if (v_665_2_0) {
            v_665_3_0_1 = v_665_3;
          } else {
            v_665_3_0_0 = v_665_3;
          };
        };
        if (v_667_1) {
          v_667_2_1 = v_667_2;
          if (v_667_2_1) {
            v_667_3_1_1 = v_667_3;
          } else {
            v_667_3_1_0 = v_667_3;
          };
        } else {
          v_667_2_0 = v_667_2;
          if (v_667_2_0) {
            v_667_3_0_1 = v_667_3;
          } else {
            v_667_3_0_0 = v_667_3;
          };
        };
        if (v_669_1) {
          v_669_2_1 = v_669_2;
          if (v_669_2_1) {
            v_669_3_1_1 = v_669_3;
          } else {
            v_669_3_1_0 = v_669_3;
          };
        } else {
          v_669_2_0 = v_669_2;
          if (v_669_2_0) {
            v_669_3_0_1 = v_669_3;
          } else {
            v_669_3_0_0 = v_669_3;
          };
        };
      };
      v_930 = v_924;
      v_931 = v_925;
      v_932 = v_926;
      v_937 = v_936;
    };
    s_6_1 = v_930;
    s_6_2 = v_931;
    s_6_3 = v_932;
    r_1 = v_937;
  };
  ck_17_1 = s_6_1;
  ck_17_2 = s_6_2;
  ck_17_3 = s_6_3;
  if (ck_17_1) {
    ck_17_2_1 = ck_17_2;
    if (ck_17_2_1) {
      ck_17_3_1_1 = ck_17_3;
      if (ck_17_3_1_1) {
        s_2_St_5_High = 4;
        v_890 = s_2_St_5_High;
        nr_1_St_5_High = false;
        v_910 = nr_1_St_5_High;
        ns_1_St_5_High_1 = true;
        v_895 = ns_1_St_5_High_1;
        ns_1_St_5_High_2 = true;
        v_896 = ns_1_St_5_High_2;
        ns_1_St_5_High_3 = true;
        v_897 = ns_1_St_5_High_3;
      } else {
        s_2_St_5_Low = 2;
        nr_1_St_5_Low = false;
        ns_1_St_5_Low_1 = true;
        ns_1_St_5_Low_2 = true;
        ns_1_St_5_Low_3 = false;
        v_890 = s_2_St_5_Low;
        v_910 = nr_1_St_5_Low;
        v_895 = ns_1_St_5_Low_1;
        v_896 = ns_1_St_5_Low_2;
        v_897 = ns_1_St_5_Low_3;
      };
      v_892 = v_890;
      v_904 = v_895;
      v_905 = v_896;
      v_906 = v_897;
      v_912 = v_910;
      if (ck_17_3_1_1) {
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
      ck_17_3_1_0 = ck_17_3;
      if (ck_17_3_1_0) {
        v_891 = 0;
        v_911 = true;
        v_898 = true;
        v_899 = true;
        v_900 = true;
      } else {
        s_2_St_5_Mid = 3;
        v_891 = s_2_St_5_Mid;
        nr_1_St_5_Mid = false;
        v_911 = nr_1_St_5_Mid;
        ns_1_St_5_Mid_1 = true;
        v_898 = ns_1_St_5_Mid_1;
        ns_1_St_5_Mid_2 = false;
        v_899 = ns_1_St_5_Mid_2;
        ns_1_St_5_Mid_3 = false;
        v_900 = ns_1_St_5_Mid_3;
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
      v_892 = v_891;
      v_904 = v_898;
      v_905 = v_899;
      v_906 = v_900;
      v_912 = v_911;
    };
    s_2 = v_892;
    ns_1_1 = v_904;
    ns_1_2 = v_905;
    ns_1_3 = v_906;
    nr_1 = v_912;
  } else {
    ck_17_2_0 = ck_17_2;
    if (ck_17_2_0) {
      ck_17_3_0_1 = ck_17_3;
      v_894 = 0;
      v_907 = true;
      v_908 = true;
      v_909 = true;
      v_914 = true;
    } else {
      ck_17_3_0_0 = ck_17_3;
      if (ck_17_3_0_0) {
        s_2_St_5_Veryhigh = 5;
        v_893 = s_2_St_5_Veryhigh;
        nr_1_St_5_Veryhigh = false;
        v_913 = nr_1_St_5_Veryhigh;
        ns_1_St_5_Veryhigh_1 = false;
        v_901 = ns_1_St_5_Veryhigh_1;
        ns_1_St_5_Veryhigh_2 = false;
        v_902 = ns_1_St_5_Veryhigh_2;
        ns_1_St_5_Veryhigh_3 = true;
        v_903 = ns_1_St_5_Veryhigh_3;
      } else {
        s_2_St_5_Verylow = 1;
        nr_1_St_5_Verylow = false;
        ns_1_St_5_Verylow_1 = false;
        ns_1_St_5_Verylow_2 = false;
        ns_1_St_5_Verylow_3 = false;
        v_893 = s_2_St_5_Verylow;
        v_913 = nr_1_St_5_Verylow;
        v_901 = ns_1_St_5_Verylow_1;
        v_902 = ns_1_St_5_Verylow_2;
        v_903 = ns_1_St_5_Verylow_3;
      };
      v_894 = v_893;
      v_907 = v_901;
      v_908 = v_902;
      v_909 = v_903;
      v_914 = v_913;
    };
    s_2 = v_894;
    ns_1_1 = v_907;
    ns_1_2 = v_908;
    ns_1_3 = v_909;
    nr_1 = v_914;
  };
  _out->grave = s_2;
  v_225 = (_out->grave>=1);
  v_236 = (_out->grave==1);
  v_247 = (_out->grave<=3);
  v_258 = (_out->grave==1);
  v_270 = (_out->grave>=1);
  v_282 = (_out->grave==1);
  v_294 = (_out->grave==1);
  v_307 = (_out->grave==1);
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
  if (!(ck_17_1)) {
    if (!(ck_17_2_0)) {
      if (ck_17_3_0_0) {
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
  if (!(ck_16_1)) {
    if (!(ck_16_2_0)) {
      if (ck_16_3_0_0) {
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
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (ck_14_3_1_1) {
        v_557 = (up_1&&c_4);
        v_556 = !(cvh_1);
        v_558 = (v_556||v_557);
        if (v_558) {
          v_560 = true;
          v_559_1 = false;
          v_559_2 = false;
          v_559_3 = true;
        } else {
          v_560 = self->pnr_2;
          v_559_1 = true;
          v_559_2 = true;
          v_559_3 = true;
        };
        v_554 = (down_1&&c_4);
        v_553 = !(cmi_1);
        v_555 = (v_553||v_554);
        if (v_555) {
          v_562 = true;
          v_561_1 = true;
          v_561_2 = false;
          v_561_3 = false;
        } else {
          v_562 = v_560;
          v_561_1 = v_559_1;
          v_561_2 = v_559_2;
          v_561_3 = v_559_3;
        };
        v_552 = !(clo_1);
        if (v_552) {
          v_564 = true;
          v_563_1 = true;
          v_563_2 = true;
          v_563_3 = false;
        } else {
          v_564 = v_562;
          v_563_1 = v_561_1;
          v_563_2 = v_561_2;
          v_563_3 = v_561_3;
        };
        v_551 = !(cvl_1);
        if (v_551) {
          r_2_St_6_High = true;
        } else {
          r_2_St_6_High = v_564;
        };
        v_981 = r_2_St_6_High;
        if (v_551) {
          s_7_St_6_High_1 = false;
        } else {
          s_7_St_6_High_1 = v_563_1;
        };
        v_966 = s_7_St_6_High_1;
        if (v_551) {
          s_7_St_6_High_2 = false;
        } else {
          s_7_St_6_High_2 = v_563_2;
        };
        v_967 = s_7_St_6_High_2;
        if (v_551) {
          s_7_St_6_High_3 = false;
        } else {
          s_7_St_6_High_3 = v_563_3;
        };
        v_968 = s_7_St_6_High_3;
      } else {
        v_586 = !(cvh_1);
        if (v_586) {
          v_588 = true;
          v_587_1 = false;
          v_587_2 = false;
          v_587_3 = true;
        } else {
          v_588 = self->pnr_2;
          v_587_1 = true;
          v_587_2 = true;
          v_587_3 = false;
        };
        v_585 = !(chi_1);
        if (v_585) {
          v_590 = true;
          v_589_1 = true;
          v_589_2 = true;
          v_589_3 = true;
        } else {
          v_590 = v_588;
          v_589_1 = v_587_1;
          v_589_2 = v_587_2;
          v_589_3 = v_587_3;
        };
        v_583 = (up_1&&c_4);
        v_582 = !(cmi_1);
        v_584 = (v_582||v_583);
        if (v_584) {
          v_592 = true;
          v_591_1 = true;
          v_591_2 = false;
          v_591_3 = false;
        } else {
          v_592 = v_590;
          v_591_1 = v_589_1;
          v_591_2 = v_589_2;
          v_591_3 = v_589_3;
        };
        v_580 = (down_1&&c_4);
        v_579 = !(cvl_1);
        v_581 = (v_579||v_580);
        if (v_581) {
          r_2_St_6_Low = true;
          s_7_St_6_Low_1 = false;
          s_7_St_6_Low_2 = false;
          s_7_St_6_Low_3 = false;
        } else {
          r_2_St_6_Low = v_592;
          s_7_St_6_Low_1 = v_591_1;
          s_7_St_6_Low_2 = v_591_2;
          s_7_St_6_Low_3 = v_591_3;
        };
        v_981 = r_2_St_6_Low;
        v_966 = s_7_St_6_Low_1;
        v_967 = s_7_St_6_Low_2;
        v_968 = s_7_St_6_Low_3;
        if (v_587_1) {
          v_587_2_1 = v_587_2;
          if (v_587_2_1) {
            v_587_3_1_1 = v_587_3;
          } else {
            v_587_3_1_0 = v_587_3;
          };
        } else {
          v_587_2_0 = v_587_2;
          if (v_587_2_0) {
            v_587_3_0_1 = v_587_3;
          } else {
            v_587_3_0_0 = v_587_3;
          };
        };
        if (v_589_1) {
          v_589_2_1 = v_589_2;
          if (v_589_2_1) {
            v_589_3_1_1 = v_589_3;
          } else {
            v_589_3_1_0 = v_589_3;
          };
        } else {
          v_589_2_0 = v_589_2;
          if (v_589_2_0) {
            v_589_3_0_1 = v_589_3;
          } else {
            v_589_3_0_0 = v_589_3;
          };
        };
        if (v_591_1) {
          v_591_2_1 = v_591_2;
          if (v_591_2_1) {
            v_591_3_1_1 = v_591_3;
          } else {
            v_591_3_1_0 = v_591_3;
          };
        } else {
          v_591_2_0 = v_591_2;
          if (v_591_2_0) {
            v_591_3_0_1 = v_591_3;
          } else {
            v_591_3_0_0 = v_591_3;
          };
        };
      };
      v_975 = v_966;
      v_976 = v_967;
      v_977 = v_968;
      v_983 = v_981;
      if (ck_14_3_1_1) {
        if (v_559_1) {
          v_559_2_1 = v_559_2;
          if (v_559_2_1) {
            v_559_3_1_1 = v_559_3;
          } else {
            v_559_3_1_0 = v_559_3;
          };
        } else {
          v_559_2_0 = v_559_2;
          if (v_559_2_0) {
            v_559_3_0_1 = v_559_3;
          } else {
            v_559_3_0_0 = v_559_3;
          };
        };
        if (v_561_1) {
          v_561_2_1 = v_561_2;
          if (v_561_2_1) {
            v_561_3_1_1 = v_561_3;
          } else {
            v_561_3_1_0 = v_561_3;
          };
        } else {
          v_561_2_0 = v_561_2;
          if (v_561_2_0) {
            v_561_3_0_1 = v_561_3;
          } else {
            v_561_3_0_0 = v_561_3;
          };
        };
        if (v_563_1) {
          v_563_2_1 = v_563_2;
          if (v_563_2_1) {
            v_563_3_1_1 = v_563_3;
          } else {
            v_563_3_1_0 = v_563_3;
          };
        } else {
          v_563_2_0 = v_563_2;
          if (v_563_2_0) {
            v_563_3_0_1 = v_563_3;
          } else {
            v_563_3_0_0 = v_563_3;
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
      if (ck_14_3_1_0) {
        v_982 = true;
        v_969 = true;
        v_970 = true;
        v_971 = true;
      } else {
        v_572 = !(cvh_1);
        if (v_572) {
          v_574 = true;
          v_573_1 = false;
          v_573_2 = false;
          v_573_3 = true;
        } else {
          v_574 = self->pnr_2;
          v_573_1 = true;
          v_573_2 = false;
          v_573_3 = false;
        };
        v_570 = (up_1&&c_4);
        v_569 = !(chi_1);
        v_571 = (v_569||v_570);
        if (v_571) {
          v_576 = true;
          v_575_1 = true;
          v_575_2 = true;
          v_575_3 = true;
        } else {
          v_576 = v_574;
          v_575_1 = v_573_1;
          v_575_2 = v_573_2;
          v_575_3 = v_573_3;
        };
        v_567 = (down_1&&c_4);
        v_566 = !(clo_1);
        v_568 = (v_566||v_567);
        if (v_568) {
          v_578 = true;
          v_577_1 = true;
          v_577_2 = true;
          v_577_3 = false;
        } else {
          v_578 = v_576;
          v_577_1 = v_575_1;
          v_577_2 = v_575_2;
          v_577_3 = v_575_3;
        };
        v_565 = !(cvl_1);
        if (v_565) {
          r_2_St_6_Mid = true;
        } else {
          r_2_St_6_Mid = v_578;
        };
        v_982 = r_2_St_6_Mid;
        if (v_565) {
          s_7_St_6_Mid_1 = false;
        } else {
          s_7_St_6_Mid_1 = v_577_1;
        };
        v_969 = s_7_St_6_Mid_1;
        if (v_565) {
          s_7_St_6_Mid_2 = false;
        } else {
          s_7_St_6_Mid_2 = v_577_2;
        };
        v_970 = s_7_St_6_Mid_2;
        if (v_565) {
          s_7_St_6_Mid_3 = false;
        } else {
          s_7_St_6_Mid_3 = v_577_3;
        };
        v_971 = s_7_St_6_Mid_3;
        if (v_573_1) {
          v_573_2_1 = v_573_2;
          if (v_573_2_1) {
            v_573_3_1_1 = v_573_3;
          } else {
            v_573_3_1_0 = v_573_3;
          };
        } else {
          v_573_2_0 = v_573_2;
          if (v_573_2_0) {
            v_573_3_0_1 = v_573_3;
          } else {
            v_573_3_0_0 = v_573_3;
          };
        };
        if (v_575_1) {
          v_575_2_1 = v_575_2;
          if (v_575_2_1) {
            v_575_3_1_1 = v_575_3;
          } else {
            v_575_3_1_0 = v_575_3;
          };
        } else {
          v_575_2_0 = v_575_2;
          if (v_575_2_0) {
            v_575_3_0_1 = v_575_3;
          } else {
            v_575_3_0_0 = v_575_3;
          };
        };
        if (v_577_1) {
          v_577_2_1 = v_577_2;
          if (v_577_2_1) {
            v_577_3_1_1 = v_577_3;
          } else {
            v_577_3_1_0 = v_577_3;
          };
        } else {
          v_577_2_0 = v_577_2;
          if (v_577_2_0) {
            v_577_3_0_1 = v_577_3;
          } else {
            v_577_3_0_0 = v_577_3;
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
      v_975 = v_969;
      v_976 = v_970;
      v_977 = v_971;
      v_983 = v_982;
    };
    s_7_1 = v_975;
    s_7_2 = v_976;
    s_7_3 = v_977;
    r_2 = v_983;
  } else {
    if (ck_14_2_0) {
      v_978 = true;
      v_979 = true;
      v_980 = true;
      v_985 = true;
    } else {
      if (ck_14_3_0_0) {
        v_543 = (down_1&&c_4);
        v_542 = !(chi_1);
        v_544 = (v_542||v_543);
        if (v_544) {
          v_546 = true;
          v_545_1 = true;
          v_545_2 = true;
          v_545_3 = true;
        } else {
          v_546 = self->pnr_2;
          v_545_1 = false;
          v_545_2 = false;
          v_545_3 = true;
        };
        v_541 = !(cmi_1);
        if (v_541) {
          v_548 = true;
          v_547_1 = true;
          v_547_2 = false;
          v_547_3 = false;
        } else {
          v_548 = v_546;
          v_547_1 = v_545_1;
          v_547_2 = v_545_2;
          v_547_3 = v_545_3;
        };
        v_540 = !(clo_1);
        if (v_540) {
          v_550 = true;
          v_549_1 = true;
          v_549_2 = true;
          v_549_3 = false;
        } else {
          v_550 = v_548;
          v_549_1 = v_547_1;
          v_549_2 = v_547_2;
          v_549_3 = v_547_3;
        };
        v_539 = !(cvl_1);
        if (v_539) {
          r_2_St_6_Veryhigh = true;
        } else {
          r_2_St_6_Veryhigh = v_550;
        };
        v_984 = r_2_St_6_Veryhigh;
        if (v_539) {
          s_7_St_6_Veryhigh_1 = false;
        } else {
          s_7_St_6_Veryhigh_1 = v_549_1;
        };
        v_972 = s_7_St_6_Veryhigh_1;
        if (v_539) {
          s_7_St_6_Veryhigh_2 = false;
        } else {
          s_7_St_6_Veryhigh_2 = v_549_2;
        };
        v_973 = s_7_St_6_Veryhigh_2;
        if (v_539) {
          s_7_St_6_Veryhigh_3 = false;
        } else {
          s_7_St_6_Veryhigh_3 = v_549_3;
        };
        v_974 = s_7_St_6_Veryhigh_3;
        if (v_545_1) {
          v_545_2_1 = v_545_2;
          if (v_545_2_1) {
            v_545_3_1_1 = v_545_3;
          } else {
            v_545_3_1_0 = v_545_3;
          };
        } else {
          v_545_2_0 = v_545_2;
          if (v_545_2_0) {
            v_545_3_0_1 = v_545_3;
          } else {
            v_545_3_0_0 = v_545_3;
          };
        };
        if (v_547_1) {
          v_547_2_1 = v_547_2;
          if (v_547_2_1) {
            v_547_3_1_1 = v_547_3;
          } else {
            v_547_3_1_0 = v_547_3;
          };
        } else {
          v_547_2_0 = v_547_2;
          if (v_547_2_0) {
            v_547_3_0_1 = v_547_3;
          } else {
            v_547_3_0_0 = v_547_3;
          };
        };
        if (v_549_1) {
          v_549_2_1 = v_549_2;
          if (v_549_2_1) {
            v_549_3_1_1 = v_549_3;
          } else {
            v_549_3_1_0 = v_549_3;
          };
        } else {
          v_549_2_0 = v_549_2;
          if (v_549_2_0) {
            v_549_3_0_1 = v_549_3;
          } else {
            v_549_3_0_0 = v_549_3;
          };
        };
      } else {
        v_598 = !(cvh_1);
        if (v_598) {
          v_600 = true;
          v_599_1 = false;
          v_599_2 = false;
          v_599_3 = true;
        } else {
          v_600 = self->pnr_2;
          v_599_1 = false;
          v_599_2 = false;
          v_599_3 = false;
        };
        v_597 = !(chi_1);
        if (v_597) {
          v_602 = true;
          v_601_1 = true;
          v_601_2 = true;
          v_601_3 = true;
        } else {
          v_602 = v_600;
          v_601_1 = v_599_1;
          v_601_2 = v_599_2;
          v_601_3 = v_599_3;
        };
        v_596 = !(cmi_1);
        if (v_596) {
          v_604 = true;
          v_603_1 = true;
          v_603_2 = false;
          v_603_3 = false;
        } else {
          v_604 = v_602;
          v_603_1 = v_601_1;
          v_603_2 = v_601_2;
          v_603_3 = v_601_3;
        };
        v_594 = (up_1&&c_4);
        v_593 = !(clo_1);
        v_595 = (v_593||v_594);
        if (v_595) {
          r_2_St_6_Verylow = true;
          s_7_St_6_Verylow_1 = true;
          s_7_St_6_Verylow_2 = true;
          s_7_St_6_Verylow_3 = false;
        } else {
          r_2_St_6_Verylow = v_604;
          s_7_St_6_Verylow_1 = v_603_1;
          s_7_St_6_Verylow_2 = v_603_2;
          s_7_St_6_Verylow_3 = v_603_3;
        };
        v_984 = r_2_St_6_Verylow;
        v_972 = s_7_St_6_Verylow_1;
        v_973 = s_7_St_6_Verylow_2;
        v_974 = s_7_St_6_Verylow_3;
        if (v_599_1) {
          v_599_2_1 = v_599_2;
          if (v_599_2_1) {
            v_599_3_1_1 = v_599_3;
          } else {
            v_599_3_1_0 = v_599_3;
          };
        } else {
          v_599_2_0 = v_599_2;
          if (v_599_2_0) {
            v_599_3_0_1 = v_599_3;
          } else {
            v_599_3_0_0 = v_599_3;
          };
        };
        if (v_601_1) {
          v_601_2_1 = v_601_2;
          if (v_601_2_1) {
            v_601_3_1_1 = v_601_3;
          } else {
            v_601_3_1_0 = v_601_3;
          };
        } else {
          v_601_2_0 = v_601_2;
          if (v_601_2_0) {
            v_601_3_0_1 = v_601_3;
          } else {
            v_601_3_0_0 = v_601_3;
          };
        };
        if (v_603_1) {
          v_603_2_1 = v_603_2;
          if (v_603_2_1) {
            v_603_3_1_1 = v_603_3;
          } else {
            v_603_3_1_0 = v_603_3;
          };
        } else {
          v_603_2_0 = v_603_2;
          if (v_603_2_0) {
            v_603_3_0_1 = v_603_3;
          } else {
            v_603_3_0_0 = v_603_3;
          };
        };
      };
      v_978 = v_972;
      v_979 = v_973;
      v_980 = v_974;
      v_985 = v_984;
    };
    s_7_1 = v_978;
    s_7_2 = v_979;
    s_7_3 = v_980;
    r_2 = v_985;
  };
  ck_15_1 = s_7_1;
  ck_15_2 = s_7_2;
  ck_15_3 = s_7_3;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      ck_15_3_1_1 = ck_15_3;
      if (ck_15_3_1_1) {
        s_1_St_6_High = 4;
        v_938 = s_1_St_6_High;
        nr_2_St_6_High = false;
        v_958 = nr_2_St_6_High;
        ns_2_St_6_High_1 = true;
        v_943 = ns_2_St_6_High_1;
        ns_2_St_6_High_2 = true;
        v_944 = ns_2_St_6_High_2;
        ns_2_St_6_High_3 = true;
        v_945 = ns_2_St_6_High_3;
      } else {
        s_1_St_6_Low = 2;
        nr_2_St_6_Low = false;
        ns_2_St_6_Low_1 = true;
        ns_2_St_6_Low_2 = true;
        ns_2_St_6_Low_3 = false;
        v_938 = s_1_St_6_Low;
        v_958 = nr_2_St_6_Low;
        v_943 = ns_2_St_6_Low_1;
        v_944 = ns_2_St_6_Low_2;
        v_945 = ns_2_St_6_Low_3;
      };
      v_940 = v_938;
      v_952 = v_943;
      v_953 = v_944;
      v_954 = v_945;
      v_960 = v_958;
      if (ck_15_3_1_1) {
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
      ck_15_3_1_0 = ck_15_3;
      if (ck_15_3_1_0) {
        v_939 = 0;
        v_959 = true;
        v_946 = true;
        v_947 = true;
        v_948 = true;
      } else {
        s_1_St_6_Mid = 3;
        v_939 = s_1_St_6_Mid;
        nr_2_St_6_Mid = false;
        v_959 = nr_2_St_6_Mid;
        ns_2_St_6_Mid_1 = true;
        v_946 = ns_2_St_6_Mid_1;
        ns_2_St_6_Mid_2 = false;
        v_947 = ns_2_St_6_Mid_2;
        ns_2_St_6_Mid_3 = false;
        v_948 = ns_2_St_6_Mid_3;
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
      v_940 = v_939;
      v_952 = v_946;
      v_953 = v_947;
      v_954 = v_948;
      v_960 = v_959;
    };
    s_1 = v_940;
    ns_2_1 = v_952;
    ns_2_2 = v_953;
    ns_2_3 = v_954;
    nr_2 = v_960;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      ck_15_3_0_1 = ck_15_3;
      v_942 = 0;
      v_955 = true;
      v_956 = true;
      v_957 = true;
      v_962 = true;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        s_1_St_6_Veryhigh = 5;
        v_941 = s_1_St_6_Veryhigh;
        nr_2_St_6_Veryhigh = false;
        v_961 = nr_2_St_6_Veryhigh;
        ns_2_St_6_Veryhigh_1 = false;
        v_949 = ns_2_St_6_Veryhigh_1;
        ns_2_St_6_Veryhigh_2 = false;
        v_950 = ns_2_St_6_Veryhigh_2;
        ns_2_St_6_Veryhigh_3 = true;
        v_951 = ns_2_St_6_Veryhigh_3;
      } else {
        s_1_St_6_Verylow = 1;
        nr_2_St_6_Verylow = false;
        ns_2_St_6_Verylow_1 = false;
        ns_2_St_6_Verylow_2 = false;
        ns_2_St_6_Verylow_3 = false;
        v_941 = s_1_St_6_Verylow;
        v_961 = nr_2_St_6_Verylow;
        v_949 = ns_2_St_6_Verylow_1;
        v_950 = ns_2_St_6_Verylow_2;
        v_951 = ns_2_St_6_Verylow_3;
      };
      v_942 = v_941;
      v_955 = v_949;
      v_956 = v_950;
      v_957 = v_951;
      v_962 = v_961;
    };
    s_1 = v_942;
    ns_2_1 = v_955;
    ns_2_2 = v_956;
    ns_2_3 = v_957;
    nr_2 = v_962;
  };
  _out->medio = s_1;
  v_223 = (_out->medio>=1);
  v_234 = (_out->medio>=1);
  v_245 = (_out->medio==5);
  v_256 = (_out->medio<=4);
  v_268 = (_out->medio==5);
  v_280 = (_out->medio>=1);
  v_292 = (_out->medio==1);
  v_305 = (_out->medio==1);
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
  if (!(ck_15_1)) {
    if (!(ck_15_2_0)) {
      if (ck_15_3_0_0) {
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
  if (!(ck_14_1)) {
    if (!(ck_14_2_0)) {
      if (ck_14_3_0_0) {
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
  if (ck_12_1) {
    if (ck_12_2_1) {
      if (ck_12_3_1_1) {
        v_491 = (up&&c_3);
        v_490 = !(cvh);
        v_492 = (v_490||v_491);
        if (v_492) {
          v_494 = true;
          v_493_1 = false;
          v_493_2 = false;
          v_493_3 = true;
        } else {
          v_494 = self->pnr_3;
          v_493_1 = true;
          v_493_2 = true;
          v_493_3 = true;
        };
        v_488 = (down&&c_3);
        v_487 = !(cmi);
        v_489 = (v_487||v_488);
        if (v_489) {
          v_496 = true;
          v_495_1 = true;
          v_495_2 = false;
          v_495_3 = false;
        } else {
          v_496 = v_494;
          v_495_1 = v_493_1;
          v_495_2 = v_493_2;
          v_495_3 = v_493_3;
        };
        v_486 = !(clo);
        if (v_486) {
          v_498 = true;
          v_497_1 = true;
          v_497_2 = true;
          v_497_3 = false;
        } else {
          v_498 = v_496;
          v_497_1 = v_495_1;
          v_497_2 = v_495_2;
          v_497_3 = v_495_3;
        };
        v_485 = !(cvl);
        if (v_485) {
          r_3_St_7_High = true;
        } else {
          r_3_St_7_High = v_498;
        };
        v_1029 = r_3_St_7_High;
        if (v_485) {
          s_8_St_7_High_1 = false;
        } else {
          s_8_St_7_High_1 = v_497_1;
        };
        v_1014 = s_8_St_7_High_1;
        if (v_485) {
          s_8_St_7_High_2 = false;
        } else {
          s_8_St_7_High_2 = v_497_2;
        };
        v_1015 = s_8_St_7_High_2;
        if (v_485) {
          s_8_St_7_High_3 = false;
        } else {
          s_8_St_7_High_3 = v_497_3;
        };
        v_1016 = s_8_St_7_High_3;
      } else {
        v_520 = !(cvh);
        if (v_520) {
          v_522 = true;
          v_521_1 = false;
          v_521_2 = false;
          v_521_3 = true;
        } else {
          v_522 = self->pnr_3;
          v_521_1 = true;
          v_521_2 = true;
          v_521_3 = false;
        };
        v_519 = !(chi);
        if (v_519) {
          v_524 = true;
          v_523_1 = true;
          v_523_2 = true;
          v_523_3 = true;
        } else {
          v_524 = v_522;
          v_523_1 = v_521_1;
          v_523_2 = v_521_2;
          v_523_3 = v_521_3;
        };
        v_517 = (up&&c_3);
        v_516 = !(cmi);
        v_518 = (v_516||v_517);
        if (v_518) {
          v_526 = true;
          v_525_1 = true;
          v_525_2 = false;
          v_525_3 = false;
        } else {
          v_526 = v_524;
          v_525_1 = v_523_1;
          v_525_2 = v_523_2;
          v_525_3 = v_523_3;
        };
        v_514 = (down&&c_3);
        v_513 = !(cvl);
        v_515 = (v_513||v_514);
        if (v_515) {
          r_3_St_7_Low = true;
          s_8_St_7_Low_1 = false;
          s_8_St_7_Low_2 = false;
          s_8_St_7_Low_3 = false;
        } else {
          r_3_St_7_Low = v_526;
          s_8_St_7_Low_1 = v_525_1;
          s_8_St_7_Low_2 = v_525_2;
          s_8_St_7_Low_3 = v_525_3;
        };
        v_1029 = r_3_St_7_Low;
        v_1014 = s_8_St_7_Low_1;
        v_1015 = s_8_St_7_Low_2;
        v_1016 = s_8_St_7_Low_3;
        if (v_521_1) {
          v_521_2_1 = v_521_2;
          if (v_521_2_1) {
            v_521_3_1_1 = v_521_3;
          } else {
            v_521_3_1_0 = v_521_3;
          };
        } else {
          v_521_2_0 = v_521_2;
          if (v_521_2_0) {
            v_521_3_0_1 = v_521_3;
          } else {
            v_521_3_0_0 = v_521_3;
          };
        };
        if (v_523_1) {
          v_523_2_1 = v_523_2;
          if (v_523_2_1) {
            v_523_3_1_1 = v_523_3;
          } else {
            v_523_3_1_0 = v_523_3;
          };
        } else {
          v_523_2_0 = v_523_2;
          if (v_523_2_0) {
            v_523_3_0_1 = v_523_3;
          } else {
            v_523_3_0_0 = v_523_3;
          };
        };
        if (v_525_1) {
          v_525_2_1 = v_525_2;
          if (v_525_2_1) {
            v_525_3_1_1 = v_525_3;
          } else {
            v_525_3_1_0 = v_525_3;
          };
        } else {
          v_525_2_0 = v_525_2;
          if (v_525_2_0) {
            v_525_3_0_1 = v_525_3;
          } else {
            v_525_3_0_0 = v_525_3;
          };
        };
      };
      v_1023 = v_1014;
      v_1024 = v_1015;
      v_1025 = v_1016;
      v_1031 = v_1029;
      if (ck_12_3_1_1) {
        if (v_493_1) {
          v_493_2_1 = v_493_2;
          if (v_493_2_1) {
            v_493_3_1_1 = v_493_3;
          } else {
            v_493_3_1_0 = v_493_3;
          };
        } else {
          v_493_2_0 = v_493_2;
          if (v_493_2_0) {
            v_493_3_0_1 = v_493_3;
          } else {
            v_493_3_0_0 = v_493_3;
          };
        };
        if (v_495_1) {
          v_495_2_1 = v_495_2;
          if (v_495_2_1) {
            v_495_3_1_1 = v_495_3;
          } else {
            v_495_3_1_0 = v_495_3;
          };
        } else {
          v_495_2_0 = v_495_2;
          if (v_495_2_0) {
            v_495_3_0_1 = v_495_3;
          } else {
            v_495_3_0_0 = v_495_3;
          };
        };
        if (v_497_1) {
          v_497_2_1 = v_497_2;
          if (v_497_2_1) {
            v_497_3_1_1 = v_497_3;
          } else {
            v_497_3_1_0 = v_497_3;
          };
        } else {
          v_497_2_0 = v_497_2;
          if (v_497_2_0) {
            v_497_3_0_1 = v_497_3;
          } else {
            v_497_3_0_0 = v_497_3;
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
      if (ck_12_3_1_0) {
        v_1030 = true;
        v_1017 = true;
        v_1018 = true;
        v_1019 = true;
      } else {
        v_506 = !(cvh);
        if (v_506) {
          v_508 = true;
          v_507_1 = false;
          v_507_2 = false;
          v_507_3 = true;
        } else {
          v_508 = self->pnr_3;
          v_507_1 = true;
          v_507_2 = false;
          v_507_3 = false;
        };
        v_504 = (up&&c_3);
        v_503 = !(chi);
        v_505 = (v_503||v_504);
        if (v_505) {
          v_510 = true;
          v_509_1 = true;
          v_509_2 = true;
          v_509_3 = true;
        } else {
          v_510 = v_508;
          v_509_1 = v_507_1;
          v_509_2 = v_507_2;
          v_509_3 = v_507_3;
        };
        v_501 = (down&&c_3);
        v_500 = !(clo);
        v_502 = (v_500||v_501);
        if (v_502) {
          v_512 = true;
          v_511_1 = true;
          v_511_2 = true;
          v_511_3 = false;
        } else {
          v_512 = v_510;
          v_511_1 = v_509_1;
          v_511_2 = v_509_2;
          v_511_3 = v_509_3;
        };
        v_499 = !(cvl);
        if (v_499) {
          r_3_St_7_Mid = true;
        } else {
          r_3_St_7_Mid = v_512;
        };
        v_1030 = r_3_St_7_Mid;
        if (v_499) {
          s_8_St_7_Mid_1 = false;
        } else {
          s_8_St_7_Mid_1 = v_511_1;
        };
        v_1017 = s_8_St_7_Mid_1;
        if (v_499) {
          s_8_St_7_Mid_2 = false;
        } else {
          s_8_St_7_Mid_2 = v_511_2;
        };
        v_1018 = s_8_St_7_Mid_2;
        if (v_499) {
          s_8_St_7_Mid_3 = false;
        } else {
          s_8_St_7_Mid_3 = v_511_3;
        };
        v_1019 = s_8_St_7_Mid_3;
        if (v_507_1) {
          v_507_2_1 = v_507_2;
          if (v_507_2_1) {
            v_507_3_1_1 = v_507_3;
          } else {
            v_507_3_1_0 = v_507_3;
          };
        } else {
          v_507_2_0 = v_507_2;
          if (v_507_2_0) {
            v_507_3_0_1 = v_507_3;
          } else {
            v_507_3_0_0 = v_507_3;
          };
        };
        if (v_509_1) {
          v_509_2_1 = v_509_2;
          if (v_509_2_1) {
            v_509_3_1_1 = v_509_3;
          } else {
            v_509_3_1_0 = v_509_3;
          };
        } else {
          v_509_2_0 = v_509_2;
          if (v_509_2_0) {
            v_509_3_0_1 = v_509_3;
          } else {
            v_509_3_0_0 = v_509_3;
          };
        };
        if (v_511_1) {
          v_511_2_1 = v_511_2;
          if (v_511_2_1) {
            v_511_3_1_1 = v_511_3;
          } else {
            v_511_3_1_0 = v_511_3;
          };
        } else {
          v_511_2_0 = v_511_2;
          if (v_511_2_0) {
            v_511_3_0_1 = v_511_3;
          } else {
            v_511_3_0_0 = v_511_3;
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
      v_1023 = v_1017;
      v_1024 = v_1018;
      v_1025 = v_1019;
      v_1031 = v_1030;
    };
    s_8_1 = v_1023;
    s_8_2 = v_1024;
    s_8_3 = v_1025;
    r_3 = v_1031;
  } else {
    if (ck_12_2_0) {
      v_1026 = true;
      v_1027 = true;
      v_1028 = true;
      v_1033 = true;
    } else {
      if (ck_12_3_0_0) {
        v_477 = (down&&c_3);
        v_476 = !(chi);
        v_478 = (v_476||v_477);
        if (v_478) {
          v_480 = true;
          v_479_1 = true;
          v_479_2 = true;
          v_479_3 = true;
        } else {
          v_480 = self->pnr_3;
          v_479_1 = false;
          v_479_2 = false;
          v_479_3 = true;
        };
        v_475 = !(cmi);
        if (v_475) {
          v_482 = true;
          v_481_1 = true;
          v_481_2 = false;
          v_481_3 = false;
        } else {
          v_482 = v_480;
          v_481_1 = v_479_1;
          v_481_2 = v_479_2;
          v_481_3 = v_479_3;
        };
        v_474 = !(clo);
        if (v_474) {
          v_484 = true;
          v_483_1 = true;
          v_483_2 = true;
          v_483_3 = false;
        } else {
          v_484 = v_482;
          v_483_1 = v_481_1;
          v_483_2 = v_481_2;
          v_483_3 = v_481_3;
        };
        v_473 = !(cvl);
        if (v_473) {
          r_3_St_7_Veryhigh = true;
        } else {
          r_3_St_7_Veryhigh = v_484;
        };
        v_1032 = r_3_St_7_Veryhigh;
        if (v_473) {
          s_8_St_7_Veryhigh_1 = false;
        } else {
          s_8_St_7_Veryhigh_1 = v_483_1;
        };
        v_1020 = s_8_St_7_Veryhigh_1;
        if (v_473) {
          s_8_St_7_Veryhigh_2 = false;
        } else {
          s_8_St_7_Veryhigh_2 = v_483_2;
        };
        v_1021 = s_8_St_7_Veryhigh_2;
        if (v_473) {
          s_8_St_7_Veryhigh_3 = false;
        } else {
          s_8_St_7_Veryhigh_3 = v_483_3;
        };
        v_1022 = s_8_St_7_Veryhigh_3;
        if (v_479_1) {
          v_479_2_1 = v_479_2;
          if (v_479_2_1) {
            v_479_3_1_1 = v_479_3;
          } else {
            v_479_3_1_0 = v_479_3;
          };
        } else {
          v_479_2_0 = v_479_2;
          if (v_479_2_0) {
            v_479_3_0_1 = v_479_3;
          } else {
            v_479_3_0_0 = v_479_3;
          };
        };
        if (v_481_1) {
          v_481_2_1 = v_481_2;
          if (v_481_2_1) {
            v_481_3_1_1 = v_481_3;
          } else {
            v_481_3_1_0 = v_481_3;
          };
        } else {
          v_481_2_0 = v_481_2;
          if (v_481_2_0) {
            v_481_3_0_1 = v_481_3;
          } else {
            v_481_3_0_0 = v_481_3;
          };
        };
        if (v_483_1) {
          v_483_2_1 = v_483_2;
          if (v_483_2_1) {
            v_483_3_1_1 = v_483_3;
          } else {
            v_483_3_1_0 = v_483_3;
          };
        } else {
          v_483_2_0 = v_483_2;
          if (v_483_2_0) {
            v_483_3_0_1 = v_483_3;
          } else {
            v_483_3_0_0 = v_483_3;
          };
        };
      } else {
        v_532 = !(cvh);
        if (v_532) {
          v_534 = true;
          v_533_1 = false;
          v_533_2 = false;
          v_533_3 = true;
        } else {
          v_534 = self->pnr_3;
          v_533_1 = false;
          v_533_2 = false;
          v_533_3 = false;
        };
        v_531 = !(chi);
        if (v_531) {
          v_536 = true;
          v_535_1 = true;
          v_535_2 = true;
          v_535_3 = true;
        } else {
          v_536 = v_534;
          v_535_1 = v_533_1;
          v_535_2 = v_533_2;
          v_535_3 = v_533_3;
        };
        v_530 = !(cmi);
        if (v_530) {
          v_538 = true;
          v_537_1 = true;
          v_537_2 = false;
          v_537_3 = false;
        } else {
          v_538 = v_536;
          v_537_1 = v_535_1;
          v_537_2 = v_535_2;
          v_537_3 = v_535_3;
        };
        v_528 = (up&&c_3);
        v_527 = !(clo);
        v_529 = (v_527||v_528);
        if (v_529) {
          r_3_St_7_Verylow = true;
          s_8_St_7_Verylow_1 = true;
          s_8_St_7_Verylow_2 = true;
          s_8_St_7_Verylow_3 = false;
        } else {
          r_3_St_7_Verylow = v_538;
          s_8_St_7_Verylow_1 = v_537_1;
          s_8_St_7_Verylow_2 = v_537_2;
          s_8_St_7_Verylow_3 = v_537_3;
        };
        v_1032 = r_3_St_7_Verylow;
        v_1020 = s_8_St_7_Verylow_1;
        v_1021 = s_8_St_7_Verylow_2;
        v_1022 = s_8_St_7_Verylow_3;
        if (v_533_1) {
          v_533_2_1 = v_533_2;
          if (v_533_2_1) {
            v_533_3_1_1 = v_533_3;
          } else {
            v_533_3_1_0 = v_533_3;
          };
        } else {
          v_533_2_0 = v_533_2;
          if (v_533_2_0) {
            v_533_3_0_1 = v_533_3;
          } else {
            v_533_3_0_0 = v_533_3;
          };
        };
        if (v_535_1) {
          v_535_2_1 = v_535_2;
          if (v_535_2_1) {
            v_535_3_1_1 = v_535_3;
          } else {
            v_535_3_1_0 = v_535_3;
          };
        } else {
          v_535_2_0 = v_535_2;
          if (v_535_2_0) {
            v_535_3_0_1 = v_535_3;
          } else {
            v_535_3_0_0 = v_535_3;
          };
        };
        if (v_537_1) {
          v_537_2_1 = v_537_2;
          if (v_537_2_1) {
            v_537_3_1_1 = v_537_3;
          } else {
            v_537_3_1_0 = v_537_3;
          };
        } else {
          v_537_2_0 = v_537_2;
          if (v_537_2_0) {
            v_537_3_0_1 = v_537_3;
          } else {
            v_537_3_0_0 = v_537_3;
          };
        };
      };
      v_1026 = v_1020;
      v_1027 = v_1021;
      v_1028 = v_1022;
      v_1033 = v_1032;
    };
    s_8_1 = v_1026;
    s_8_2 = v_1027;
    s_8_3 = v_1028;
    r_3 = v_1033;
  };
  ck_13_1 = s_8_1;
  ck_13_2 = s_8_2;
  ck_13_3 = s_8_3;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        s_St_7_High = 4;
        v_986 = s_St_7_High;
        nr_3_St_7_High = false;
        v_1006 = nr_3_St_7_High;
        ns_3_St_7_High_1 = true;
        v_991 = ns_3_St_7_High_1;
        ns_3_St_7_High_2 = true;
        v_992 = ns_3_St_7_High_2;
        ns_3_St_7_High_3 = true;
        v_993 = ns_3_St_7_High_3;
      } else {
        s_St_7_Low = 2;
        nr_3_St_7_Low = false;
        ns_3_St_7_Low_1 = true;
        ns_3_St_7_Low_2 = true;
        ns_3_St_7_Low_3 = false;
        v_986 = s_St_7_Low;
        v_1006 = nr_3_St_7_Low;
        v_991 = ns_3_St_7_Low_1;
        v_992 = ns_3_St_7_Low_2;
        v_993 = ns_3_St_7_Low_3;
      };
      v_988 = v_986;
      v_1000 = v_991;
      v_1001 = v_992;
      v_1002 = v_993;
      v_1008 = v_1006;
      if (ck_13_3_1_1) {
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
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_987 = 0;
        v_1007 = true;
        v_994 = true;
        v_995 = true;
        v_996 = true;
      } else {
        s_St_7_Mid = 3;
        v_987 = s_St_7_Mid;
        nr_3_St_7_Mid = false;
        v_1007 = nr_3_St_7_Mid;
        ns_3_St_7_Mid_1 = true;
        v_994 = ns_3_St_7_Mid_1;
        ns_3_St_7_Mid_2 = false;
        v_995 = ns_3_St_7_Mid_2;
        ns_3_St_7_Mid_3 = false;
        v_996 = ns_3_St_7_Mid_3;
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
      v_988 = v_987;
      v_1000 = v_994;
      v_1001 = v_995;
      v_1002 = v_996;
      v_1008 = v_1007;
    };
    s = v_988;
    ns_3_1 = v_1000;
    ns_3_2 = v_1001;
    ns_3_3 = v_1002;
    nr_3 = v_1008;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      v_990 = 0;
      v_1003 = true;
      v_1004 = true;
      v_1005 = true;
      v_1010 = true;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        s_St_7_Veryhigh = 5;
        v_989 = s_St_7_Veryhigh;
        nr_3_St_7_Veryhigh = false;
        v_1009 = nr_3_St_7_Veryhigh;
        ns_3_St_7_Veryhigh_1 = false;
        v_997 = ns_3_St_7_Veryhigh_1;
        ns_3_St_7_Veryhigh_2 = false;
        v_998 = ns_3_St_7_Veryhigh_2;
        ns_3_St_7_Veryhigh_3 = true;
        v_999 = ns_3_St_7_Veryhigh_3;
      } else {
        s_St_7_Verylow = 1;
        nr_3_St_7_Verylow = false;
        ns_3_St_7_Verylow_1 = false;
        ns_3_St_7_Verylow_2 = false;
        ns_3_St_7_Verylow_3 = false;
        v_989 = s_St_7_Verylow;
        v_1009 = nr_3_St_7_Verylow;
        v_997 = ns_3_St_7_Verylow_1;
        v_998 = ns_3_St_7_Verylow_2;
        v_999 = ns_3_St_7_Verylow_3;
      };
      v_990 = v_989;
      v_1003 = v_997;
      v_1004 = v_998;
      v_1005 = v_999;
      v_1010 = v_1009;
    };
    s = v_990;
    ns_3_1 = v_1003;
    ns_3_2 = v_1004;
    ns_3_3 = v_1005;
    nr_3 = v_1010;
  };
  _out->agudo = s;
  v_222 = (_out->agudo>=1);
  v_224 = (v_222&&v_223);
  v_226 = (v_224&&v_225);
  v_233 = (_out->agudo>=2);
  v_235 = (v_233&&v_234);
  v_237 = (v_235&&v_236);
  v_244 = (_out->agudo==1);
  v_246 = (v_244&&v_245);
  v_248 = (v_246&&v_247);
  v_255 = (_out->agudo==1);
  v_257 = (v_255&&v_256);
  v_259 = (v_257&&v_258);
  v_267 = (_out->agudo==1);
  v_269 = (v_267&&v_268);
  v_271 = (v_269&&v_270);
  v_279 = (_out->agudo==1);
  v_281 = (v_279&&v_280);
  v_283 = (v_281&&v_282);
  v_291 = (_out->agudo>=1);
  v_293 = (v_291&&v_292);
  v_295 = (v_293&&v_294);
  v_304 = (_out->agudo==1);
  v_306 = (v_304&&v_305);
  v_308 = (v_306&&v_307);
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
  if (!(ck_13_1)) {
    if (!(ck_13_2_0)) {
      if (ck_13_3_0_0) {
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
  if (!(ck_12_1)) {
    if (!(ck_12_2_0)) {
      if (ck_12_3_0_0) {
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
  if (self->ck_10_1) {
    if (c_2) {
      r_4_St_8_ON = true;
    } else {
      r_4_St_8_ON = self->pnr_4;
    };
    r_4 = r_4_St_8_ON;
    if (c_2) {
      s_9_St_8_ON_1 = false;
    } else {
      s_9_St_8_ON_1 = true;
    };
    s_9_1 = s_9_St_8_ON_1;
  } else {
    v_472 = !(c_2);
    if (v_472) {
      r_4_St_8_Off = true;
      s_9_St_8_Off_1 = true;
    } else {
      r_4_St_8_Off = self->pnr_4;
      s_9_St_8_Off_1 = false;
    };
    r_4 = r_4_St_8_Off;
    s_9_1 = s_9_St_8_Off_1;
  };
  ck_11_1 = s_9_1;
  if (ck_11_1) {
    ligado_2_St_8_ON = true;
    ligado_2 = ligado_2_St_8_ON;
    nr_4_St_8_ON = false;
    nr_4 = nr_4_St_8_ON;
    ns_4_St_8_ON_1 = true;
    ns_4_1 = ns_4_St_8_ON_1;
  } else {
    ligado_2_St_8_Off = false;
    nr_4_St_8_Off = false;
    ns_4_St_8_Off_1 = false;
    ligado_2 = ligado_2_St_8_Off;
    nr_4 = nr_4_St_8_Off;
    ns_4_1 = ns_4_St_8_Off_1;
  };
  _out->cx3 = ligado_2;
  v_231 = !(_out->cx3);
  v_277 = !(_out->cx3);
  v_289 = !(_out->cx3);
  v_302 = !(_out->cx3);
  if (self->ck_8_1) {
    if (c_1) {
      r_5_St_9_ON = true;
    } else {
      r_5_St_9_ON = self->pnr_5;
    };
    r_5 = r_5_St_9_ON;
    if (c_1) {
      s_10_St_9_ON_1 = false;
    } else {
      s_10_St_9_ON_1 = true;
    };
    s_10_1 = s_10_St_9_ON_1;
  } else {
    v_471 = !(c_1);
    if (v_471) {
      r_5_St_9_Off = true;
      s_10_St_9_Off_1 = true;
    } else {
      r_5_St_9_Off = self->pnr_5;
      s_10_St_9_Off_1 = false;
    };
    r_5 = r_5_St_9_Off;
    s_10_1 = s_10_St_9_Off_1;
  };
  ck_9_1 = s_10_1;
  if (ck_9_1) {
    ligado_1_St_9_ON = true;
    ligado_1 = ligado_1_St_9_ON;
    nr_5_St_9_ON = false;
    nr_5 = nr_5_St_9_ON;
    ns_5_St_9_ON_1 = true;
    ns_5_1 = ns_5_St_9_ON_1;
  } else {
    ligado_1_St_9_Off = false;
    nr_5_St_9_Off = false;
    ns_5_St_9_Off_1 = false;
    ligado_1 = ligado_1_St_9_Off;
    nr_5 = nr_5_St_9_Off;
    ns_5_1 = ns_5_St_9_Off_1;
  };
  _out->cx2 = ligado_1;
  v_241 = !(_out->cx2);
  v_264 = !(_out->cx2);
  v_287 = !(_out->cx2);
  v_300 = !(_out->cx2);
  if (self->ck_6_1) {
    if (c) {
      r_6_St_10_ON = true;
    } else {
      r_6_St_10_ON = self->pnr_6;
    };
    r_6 = r_6_St_10_ON;
    if (c) {
      s_11_St_10_ON_1 = false;
    } else {
      s_11_St_10_ON_1 = true;
    };
    s_11_1 = s_11_St_10_ON_1;
  } else {
    v_470 = !(c);
    if (v_470) {
      r_6_St_10_Off = true;
      s_11_St_10_Off_1 = true;
    } else {
      r_6_St_10_Off = self->pnr_6;
      s_11_St_10_Off_1 = false;
    };
    r_6 = r_6_St_10_Off;
    s_11_1 = s_11_St_10_Off_1;
  };
  ck_7_1 = s_11_1;
  if (ck_7_1) {
    ligado_St_10_ON = true;
    ligado = ligado_St_10_ON;
    nr_6_St_10_ON = false;
    nr_6 = nr_6_St_10_ON;
    ns_6_St_10_ON_1 = true;
    ns_6_1 = ns_6_St_10_ON_1;
  } else {
    ligado_St_10_Off = false;
    nr_6_St_10_Off = false;
    ns_6_St_10_Off_1 = false;
    ligado = ligado_St_10_Off;
    nr_6 = nr_6_St_10_Off;
    ns_6_1 = ns_6_St_10_Off_1;
  };
  _out->cx1 = ligado;
  v_220 = (_out->cx1&&_out->cx2);
  v_221 = (v_220&&_out->cx3);
  v_227 = (v_221&&v_226);
  v_230 = (_out->cx1&&_out->cx2);
  v_232 = (v_230&&v_231);
  v_238 = (v_232&&v_237);
  v_242 = (_out->cx1&&v_241);
  v_243 = (v_242&&_out->cx3);
  v_249 = (v_243&&v_248);
  v_252 = !(_out->cx1);
  v_253 = (v_252&&_out->cx2);
  v_254 = (v_253&&_out->cx3);
  v_260 = (v_254&&v_259);
  v_263 = !(_out->cx1);
  v_265 = (v_263&&v_264);
  v_266 = (v_265&&_out->cx3);
  v_272 = (v_266&&v_271);
  v_275 = !(_out->cx1);
  v_276 = (v_275&&_out->cx2);
  v_278 = (v_276&&v_277);
  v_284 = (v_278&&v_283);
  v_288 = (_out->cx1&&v_287);
  v_290 = (v_288&&v_289);
  v_296 = (v_290&&v_295);
  v_299 = !(_out->cx1);
  v_301 = (v_299&&v_300);
  v_303 = (v_301&&v_302);
  v_309 = (v_303&&v_308);
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        res_1_St_11_Classic = 1;
        nr_7_St_11_Classic = false;
        ns_7_St_11_Classic_1 = true;
        ns_7_St_11_Classic_2 = true;
        ns_7_St_11_Classic_3 = true;
        v_1034 = res_1_St_11_Classic;
        v_1058 = nr_7_St_11_Classic;
        v_1040 = ns_7_St_11_Classic_1;
        v_1041 = ns_7_St_11_Classic_2;
        v_1042 = ns_7_St_11_Classic_3;
        if (ns_7_St_11_Classic_1) {
          ns_7_St_11_Classic_2_1 = ns_7_St_11_Classic_2;
          if (ns_7_St_11_Classic_2_1) {
            ns_7_St_11_Classic_3_1_1 = ns_7_St_11_Classic_3;
          } else {
            ns_7_St_11_Classic_3_1_0 = ns_7_St_11_Classic_3;
          };
        } else {
          ns_7_St_11_Classic_2_0 = ns_7_St_11_Classic_2;
          if (ns_7_St_11_Classic_2_0) {
            ns_7_St_11_Classic_3_0_1 = ns_7_St_11_Classic_3;
          } else {
            ns_7_St_11_Classic_3_0_0 = ns_7_St_11_Classic_3;
          };
        };
      } else {
        res_1_St_11_Electronic = 2;
        v_1034 = res_1_St_11_Electronic;
        nr_7_St_11_Electronic = false;
        v_1058 = nr_7_St_11_Electronic;
        ns_7_St_11_Electronic_1 = true;
        v_1040 = ns_7_St_11_Electronic_1;
        ns_7_St_11_Electronic_2 = true;
        v_1041 = ns_7_St_11_Electronic_2;
        ns_7_St_11_Electronic_3 = false;
        v_1042 = ns_7_St_11_Electronic_3;
        if (ns_7_St_11_Electronic_1) {
          ns_7_St_11_Electronic_2_1 = ns_7_St_11_Electronic_2;
          if (ns_7_St_11_Electronic_2_1) {
            ns_7_St_11_Electronic_3_1_1 = ns_7_St_11_Electronic_3;
          } else {
            ns_7_St_11_Electronic_3_1_0 = ns_7_St_11_Electronic_3;
          };
        } else {
          ns_7_St_11_Electronic_2_0 = ns_7_St_11_Electronic_2;
          if (ns_7_St_11_Electronic_2_0) {
            ns_7_St_11_Electronic_3_0_1 = ns_7_St_11_Electronic_3;
          } else {
            ns_7_St_11_Electronic_3_0_0 = ns_7_St_11_Electronic_3;
          };
        };
      };
      v_1036 = v_1034;
      v_1052 = v_1040;
      v_1053 = v_1041;
      v_1054 = v_1042;
      v_1060 = v_1058;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        res_1_St_11_Funk = 3;
        nr_7_St_11_Funk = false;
        ns_7_St_11_Funk_1 = true;
        ns_7_St_11_Funk_2 = false;
        ns_7_St_11_Funk_3 = true;
        v_1035 = res_1_St_11_Funk;
        v_1059 = nr_7_St_11_Funk;
        v_1043 = ns_7_St_11_Funk_1;
        v_1044 = ns_7_St_11_Funk_2;
        v_1045 = ns_7_St_11_Funk_3;
      } else {
        res_1_St_11_Indie = 4;
        v_1035 = res_1_St_11_Indie;
        nr_7_St_11_Indie = false;
        v_1059 = nr_7_St_11_Indie;
        ns_7_St_11_Indie_1 = true;
        v_1043 = ns_7_St_11_Indie_1;
        ns_7_St_11_Indie_2 = false;
        v_1044 = ns_7_St_11_Indie_2;
        ns_7_St_11_Indie_3 = false;
        v_1045 = ns_7_St_11_Indie_3;
      };
      v_1036 = v_1035;
      v_1052 = v_1043;
      v_1053 = v_1044;
      v_1054 = v_1045;
      v_1060 = v_1059;
      if (ck_5_3_1_0) {
        if (ns_7_St_11_Funk_1) {
          ns_7_St_11_Funk_2_1 = ns_7_St_11_Funk_2;
          if (ns_7_St_11_Funk_2_1) {
            ns_7_St_11_Funk_3_1_1 = ns_7_St_11_Funk_3;
          } else {
            ns_7_St_11_Funk_3_1_0 = ns_7_St_11_Funk_3;
          };
        } else {
          ns_7_St_11_Funk_2_0 = ns_7_St_11_Funk_2;
          if (ns_7_St_11_Funk_2_0) {
            ns_7_St_11_Funk_3_0_1 = ns_7_St_11_Funk_3;
          } else {
            ns_7_St_11_Funk_3_0_0 = ns_7_St_11_Funk_3;
          };
        };
      } else {
        if (ns_7_St_11_Indie_1) {
          ns_7_St_11_Indie_2_1 = ns_7_St_11_Indie_2;
          if (ns_7_St_11_Indie_2_1) {
            ns_7_St_11_Indie_3_1_1 = ns_7_St_11_Indie_3;
          } else {
            ns_7_St_11_Indie_3_1_0 = ns_7_St_11_Indie_3;
          };
        } else {
          ns_7_St_11_Indie_2_0 = ns_7_St_11_Indie_2;
          if (ns_7_St_11_Indie_2_0) {
            ns_7_St_11_Indie_3_0_1 = ns_7_St_11_Indie_3;
          } else {
            ns_7_St_11_Indie_3_0_0 = ns_7_St_11_Indie_3;
          };
        };
      };
    };
    res_1 = v_1036;
    ns_7_1 = v_1052;
    ns_7_2 = v_1053;
    ns_7_3 = v_1054;
    nr_7 = v_1060;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      if (ck_5_3_0_1) {
        res_1_St_11_Off = 0;
        nr_7_St_11_Off = false;
        ns_7_St_11_Off_1 = false;
        ns_7_St_11_Off_2 = true;
        ns_7_St_11_Off_3 = true;
        v_1037 = res_1_St_11_Off;
        v_1061 = nr_7_St_11_Off;
        v_1046 = ns_7_St_11_Off_1;
        v_1047 = ns_7_St_11_Off_2;
        v_1048 = ns_7_St_11_Off_3;
        if (ns_7_St_11_Off_1) {
          ns_7_St_11_Off_2_1 = ns_7_St_11_Off_2;
          if (ns_7_St_11_Off_2_1) {
            ns_7_St_11_Off_3_1_1 = ns_7_St_11_Off_3;
          } else {
            ns_7_St_11_Off_3_1_0 = ns_7_St_11_Off_3;
          };
        } else {
          ns_7_St_11_Off_2_0 = ns_7_St_11_Off_2;
          if (ns_7_St_11_Off_2_0) {
            ns_7_St_11_Off_3_0_1 = ns_7_St_11_Off_3;
          } else {
            ns_7_St_11_Off_3_0_0 = ns_7_St_11_Off_3;
          };
        };
      } else {
        res_1_St_11_POP = 5;
        v_1037 = res_1_St_11_POP;
        nr_7_St_11_POP = false;
        v_1061 = nr_7_St_11_POP;
        ns_7_St_11_POP_1 = false;
        v_1046 = ns_7_St_11_POP_1;
        ns_7_St_11_POP_2 = true;
        v_1047 = ns_7_St_11_POP_2;
        ns_7_St_11_POP_3 = false;
        v_1048 = ns_7_St_11_POP_3;
        if (ns_7_St_11_POP_1) {
          ns_7_St_11_POP_2_1 = ns_7_St_11_POP_2;
          if (ns_7_St_11_POP_2_1) {
            ns_7_St_11_POP_3_1_1 = ns_7_St_11_POP_3;
          } else {
            ns_7_St_11_POP_3_1_0 = ns_7_St_11_POP_3;
          };
        } else {
          ns_7_St_11_POP_2_0 = ns_7_St_11_POP_2;
          if (ns_7_St_11_POP_2_0) {
            ns_7_St_11_POP_3_0_1 = ns_7_St_11_POP_3;
          } else {
            ns_7_St_11_POP_3_0_0 = ns_7_St_11_POP_3;
          };
        };
      };
      v_1039 = v_1037;
      v_1055 = v_1046;
      v_1056 = v_1047;
      v_1057 = v_1048;
      v_1063 = v_1061;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        res_1_St_11_Regue = 6;
        nr_7_St_11_Regue = false;
        ns_7_St_11_Regue_1 = false;
        ns_7_St_11_Regue_2 = false;
        ns_7_St_11_Regue_3 = true;
        v_1038 = res_1_St_11_Regue;
        v_1062 = nr_7_St_11_Regue;
        v_1049 = ns_7_St_11_Regue_1;
        v_1050 = ns_7_St_11_Regue_2;
        v_1051 = ns_7_St_11_Regue_3;
      } else {
        res_1_St_11_Rock = 7;
        v_1038 = res_1_St_11_Rock;
        nr_7_St_11_Rock = false;
        v_1062 = nr_7_St_11_Rock;
        ns_7_St_11_Rock_1 = false;
        v_1049 = ns_7_St_11_Rock_1;
        ns_7_St_11_Rock_2 = false;
        v_1050 = ns_7_St_11_Rock_2;
        ns_7_St_11_Rock_3 = false;
        v_1051 = ns_7_St_11_Rock_3;
      };
      v_1039 = v_1038;
      v_1055 = v_1049;
      v_1056 = v_1050;
      v_1057 = v_1051;
      v_1063 = v_1062;
    };
    res_1 = v_1039;
    ns_7_1 = v_1055;
    ns_7_2 = v_1056;
    ns_7_3 = v_1057;
    nr_7 = v_1063;
  };
  _out->res = res_1;
  v_218 = (_out->res==7);
  v_219 = !(v_218);
  ruleRock = (v_219||v_227);
  v_228 = (_out->res==6);
  v_229 = !(v_228);
  ruleRegue = (v_229||v_238);
  v_239 = (_out->res==5);
  v_240 = !(v_239);
  rulePOP = (v_240||v_249);
  v_250 = (_out->res==4);
  v_251 = !(v_250);
  ruleIndie = (v_251||v_260);
  v_261 = (_out->res==3);
  v_262 = !(v_261);
  ruleFunk = (v_262||v_272);
  v_273 = (_out->res==2);
  v_274 = !(v_273);
  ruleElectron = (v_274||v_284);
  v_285 = (_out->res==1);
  v_286 = !(v_285);
  ruleClassic = (v_286||v_296);
  v_297 = (_out->res==0);
  v_298 = !(v_297);
  ruleOff = (v_298||v_309);
  v_310 = (ruleOff&&ruleClassic);
  v_311 = (v_310&&ruleElectron);
  v_312 = (v_311&&ruleFunk);
  v_313 = (v_312&&ruleIndie);
  v_314 = (v_313&&rulePOP);
  v_315 = (v_314&&ruleRegue);
  v_316 = (v_315&&ruleRock);
  v_317 = (v_316&&ruleVol);
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
    if (ns_7_2_1) {
      ns_7_3_1_1 = ns_7_3;
    } else {
      ns_7_3_1_0 = ns_7_3;
    };
  } else {
    ns_7_2_0 = ns_7_2;
    if (ns_7_2_0) {
      ns_7_3_0_1 = ns_7_3;
    } else {
      ns_7_3_0_0 = ns_7_3;
    };
  };
  if (!(ck_5_1)) {
    if (!(ck_5_2_0)) {
      if (ck_5_3_0_0) {
        if (ns_7_St_11_Regue_1) {
          ns_7_St_11_Regue_2_1 = ns_7_St_11_Regue_2;
          if (ns_7_St_11_Regue_2_1) {
            ns_7_St_11_Regue_3_1_1 = ns_7_St_11_Regue_3;
          } else {
            ns_7_St_11_Regue_3_1_0 = ns_7_St_11_Regue_3;
          };
        } else {
          ns_7_St_11_Regue_2_0 = ns_7_St_11_Regue_2;
          if (ns_7_St_11_Regue_2_0) {
            ns_7_St_11_Regue_3_0_1 = ns_7_St_11_Regue_3;
          } else {
            ns_7_St_11_Regue_3_0_0 = ns_7_St_11_Regue_3;
          };
        };
      } else {
        if (ns_7_St_11_Rock_1) {
          ns_7_St_11_Rock_2_1 = ns_7_St_11_Rock_2;
          if (ns_7_St_11_Rock_2_1) {
            ns_7_St_11_Rock_3_1_1 = ns_7_St_11_Rock_3;
          } else {
            ns_7_St_11_Rock_3_1_0 = ns_7_St_11_Rock_3;
          };
        } else {
          ns_7_St_11_Rock_2_0 = ns_7_St_11_Rock_2;
          if (ns_7_St_11_Rock_2_0) {
            ns_7_St_11_Rock_3_0_1 = ns_7_St_11_Rock_3;
          } else {
            ns_7_St_11_Rock_3_0_0 = ns_7_St_11_Rock_3;
          };
        };
      };
    };
  };
  if (s_12_1) {
    s_12_2_1 = s_12_2;
    if (s_12_2_1) {
      s_12_3_1_1 = s_12_3;
    } else {
      s_12_3_1_0 = s_12_3;
    };
  } else {
    s_12_2_0 = s_12_2;
    if (s_12_2_0) {
      s_12_3_0_1 = s_12_3;
    } else {
      s_12_3_0_0 = s_12_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (v_344_1) {
          v_344_2_1 = v_344_2;
          if (v_344_2_1) {
            v_344_3_1_1 = v_344_3;
          } else {
            v_344_3_1_0 = v_344_3;
          };
        } else {
          v_344_2_0 = v_344_2;
          if (v_344_2_0) {
            v_344_3_0_1 = v_344_3;
          } else {
            v_344_3_0_0 = v_344_3;
          };
        };
        if (v_346_1) {
          v_346_2_1 = v_346_2;
          if (v_346_2_1) {
            v_346_3_1_1 = v_346_3;
          } else {
            v_346_3_1_0 = v_346_3;
          };
        } else {
          v_346_2_0 = v_346_2;
          if (v_346_2_0) {
            v_346_3_0_1 = v_346_3;
          } else {
            v_346_3_0_0 = v_346_3;
          };
        };
        if (v_348_1) {
          v_348_2_1 = v_348_2;
          if (v_348_2_1) {
            v_348_3_1_1 = v_348_3;
          } else {
            v_348_3_1_0 = v_348_3;
          };
        } else {
          v_348_2_0 = v_348_2;
          if (v_348_2_0) {
            v_348_3_0_1 = v_348_3;
          } else {
            v_348_3_0_0 = v_348_3;
          };
        };
        if (v_350_1) {
          v_350_2_1 = v_350_2;
          if (v_350_2_1) {
            v_350_3_1_1 = v_350_3;
          } else {
            v_350_3_1_0 = v_350_3;
          };
        } else {
          v_350_2_0 = v_350_2;
          if (v_350_2_0) {
            v_350_3_0_1 = v_350_3;
          } else {
            v_350_3_0_0 = v_350_3;
          };
        };
        if (v_352_1) {
          v_352_2_1 = v_352_2;
          if (v_352_2_1) {
            v_352_3_1_1 = v_352_3;
          } else {
            v_352_3_1_0 = v_352_3;
          };
        } else {
          v_352_2_0 = v_352_2;
          if (v_352_2_0) {
            v_352_3_0_1 = v_352_3;
          } else {
            v_352_3_0_0 = v_352_3;
          };
        };
        if (v_354_1) {
          v_354_2_1 = v_354_2;
          if (v_354_2_1) {
            v_354_3_1_1 = v_354_3;
          } else {
            v_354_3_1_0 = v_354_3;
          };
        } else {
          v_354_2_0 = v_354_2;
          if (v_354_2_0) {
            v_354_3_0_1 = v_354_3;
          } else {
            v_354_3_0_0 = v_354_3;
          };
        };
        if (s_12_St_11_Regue_1) {
          s_12_St_11_Regue_2_1 = s_12_St_11_Regue_2;
          if (s_12_St_11_Regue_2_1) {
            s_12_St_11_Regue_3_1_1 = s_12_St_11_Regue_3;
          } else {
            s_12_St_11_Regue_3_1_0 = s_12_St_11_Regue_3;
          };
        } else {
          s_12_St_11_Regue_2_0 = s_12_St_11_Regue_2;
          if (s_12_St_11_Regue_2_0) {
            s_12_St_11_Regue_3_0_1 = s_12_St_11_Regue_3;
          } else {
            s_12_St_11_Regue_3_0_0 = s_12_St_11_Regue_3;
          };
        };
      } else {
        if (v_325_1) {
          v_325_2_1 = v_325_2;
          if (v_325_2_1) {
            v_325_3_1_1 = v_325_3;
          } else {
            v_325_3_1_0 = v_325_3;
          };
        } else {
          v_325_2_0 = v_325_2;
          if (v_325_2_0) {
            v_325_3_0_1 = v_325_3;
          } else {
            v_325_3_0_0 = v_325_3;
          };
        };
        if (v_327_1) {
          v_327_2_1 = v_327_2;
          if (v_327_2_1) {
            v_327_3_1_1 = v_327_3;
          } else {
            v_327_3_1_0 = v_327_3;
          };
        } else {
          v_327_2_0 = v_327_2;
          if (v_327_2_0) {
            v_327_3_0_1 = v_327_3;
          } else {
            v_327_3_0_0 = v_327_3;
          };
        };
        if (v_329_1) {
          v_329_2_1 = v_329_2;
          if (v_329_2_1) {
            v_329_3_1_1 = v_329_3;
          } else {
            v_329_3_1_0 = v_329_3;
          };
        } else {
          v_329_2_0 = v_329_2;
          if (v_329_2_0) {
            v_329_3_0_1 = v_329_3;
          } else {
            v_329_3_0_0 = v_329_3;
          };
        };
        if (v_331_1) {
          v_331_2_1 = v_331_2;
          if (v_331_2_1) {
            v_331_3_1_1 = v_331_3;
          } else {
            v_331_3_1_0 = v_331_3;
          };
        } else {
          v_331_2_0 = v_331_2;
          if (v_331_2_0) {
            v_331_3_0_1 = v_331_3;
          } else {
            v_331_3_0_0 = v_331_3;
          };
        };
        if (v_333_1) {
          v_333_2_1 = v_333_2;
          if (v_333_2_1) {
            v_333_3_1_1 = v_333_3;
          } else {
            v_333_3_1_0 = v_333_3;
          };
        } else {
          v_333_2_0 = v_333_2;
          if (v_333_2_0) {
            v_333_3_0_1 = v_333_3;
          } else {
            v_333_3_0_0 = v_333_3;
          };
        };
        if (v_335_1) {
          v_335_2_1 = v_335_2;
          if (v_335_2_1) {
            v_335_3_1_1 = v_335_3;
          } else {
            v_335_3_1_0 = v_335_3;
          };
        } else {
          v_335_2_0 = v_335_2;
          if (v_335_2_0) {
            v_335_3_0_1 = v_335_3;
          } else {
            v_335_3_0_0 = v_335_3;
          };
        };
        if (s_12_St_11_Rock_1) {
          s_12_St_11_Rock_2_1 = s_12_St_11_Rock_2;
          if (s_12_St_11_Rock_2_1) {
            s_12_St_11_Rock_3_1_1 = s_12_St_11_Rock_3;
          } else {
            s_12_St_11_Rock_3_1_0 = s_12_St_11_Rock_3;
          };
        } else {
          s_12_St_11_Rock_2_0 = s_12_St_11_Rock_2;
          if (s_12_St_11_Rock_2_0) {
            s_12_St_11_Rock_3_0_1 = s_12_St_11_Rock_3;
          } else {
            s_12_St_11_Rock_3_0_0 = s_12_St_11_Rock_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_867 = ns_1_4;
  self->v_868 = ns_2_4;
  self->v_869 = ns_3_4;
  self->pnr_1 = nr_1;
  self->v_915 = ns_1_1;
  self->v_916 = ns_1_2;
  self->v_917 = ns_1_3;
  self->pnr_2 = nr_2;
  self->v_963 = ns_2_1;
  self->v_964 = ns_2_2;
  self->v_965 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_1011 = ns_3_1;
  self->v_1012 = ns_3_2;
  self->v_1013 = ns_3_3;
  self->pnr_4 = nr_4;
  self->ck_10_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_8_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_6_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->v_1064 = ns_7_1;
  self->v_1065 = ns_7_2;
  self->v_1066 = ns_7_3;;
}

