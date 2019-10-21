/* --- Generated the 21/10/2019 at 10:51 --- */
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

void Som__equalisador_reset(Som__equalisador_mem* self) {
  self->pnr = false;
  self->v_466 = true;
  self->v_467 = false;
}

void Som__equalisador_step(int c1, int c2, Som__equalisador_out* _out,
                           Som__equalisador_mem* self) {
  
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int ns_St_1_High_2_0;
  int ns_St_1_High_2_1;
  int ns_St_1_Mid_2_0;
  int ns_St_1_Mid_2_1;
  int ns_St_1_Low_2_0;
  int ns_St_1_Low_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_High;
  int ns_St_1_High_2;
  int ns_St_1_High_1;
  int s_St_1_High;
  int nr_St_1_Mid;
  int ns_St_1_Mid_2;
  int ns_St_1_Mid_1;
  int s_St_1_Mid;
  int nr_St_1_Low;
  int ns_St_1_Low_2;
  int ns_St_1_Low_1;
  int s_St_1_Low;
  int ck_2_2;
  int ck_2_1;
  int v_13_2_0;
  int v_13_2_1;
  int v_14;
  int v_13_2;
  int v_13_1;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_7_2_0;
  int v_7_2_1;
  int v_8;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v_5;
  int v_4;
  int v_2_2_0;
  int v_2_2_1;
  int v_3;
  int v_2_2;
  int v_2_1;
  int v_1;
  int v;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int s_3_St_1_High_2_0;
  int s_3_St_1_High_2_1;
  int s_3_St_1_Mid_2_0;
  int s_3_St_1_Mid_2_1;
  int s_3_St_1_Low_2_0;
  int s_3_St_1_Low_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_High;
  int s_3_St_1_High_2;
  int s_3_St_1_High_1;
  int r_St_1_Mid;
  int s_3_St_1_Mid_2;
  int s_3_St_1_Mid_1;
  int r_St_1_Low;
  int s_3_St_1_Low_2;
  int s_3_St_1_Low_1;
  int ck_2_3;
  int ck_1;
  int s_3_2_0;
  int s_3_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_3_2;
  int s_3_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_466;
  ck_2_3 = self->v_467;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      v_1 = (c1==true);
      if (v_1) {
        v_3 = true;
        v_2_1 = false;
        v_2_2 = false;
      } else {
        v_3 = self->pnr;
        v_2_1 = true;
        v_2_2 = true;
      };
      v = (c2==true);
      if (v) {
        r_St_1_High = true;
      } else {
        r_St_1_High = v_3;
      };
      v_472 = r_St_1_High;
      if (v) {
        s_3_St_1_High_1 = true;
      } else {
        s_3_St_1_High_1 = v_2_1;
      };
      v_468 = s_3_St_1_High_1;
      if (v) {
        s_3_St_1_High_2 = false;
      } else {
        s_3_St_1_High_2 = v_2_2;
      };
      v_469 = s_3_St_1_High_2;
    } else {
      v_11 = !(c2);
      v_12 = (v_11==true);
      if (v_12) {
        v_14 = true;
        v_13_1 = true;
        v_13_2 = true;
      } else {
        v_14 = self->pnr;
        v_13_1 = true;
        v_13_2 = false;
      };
      v_9 = !(c1);
      v_10 = (v_9==true);
      if (v_10) {
        r_St_1_Low = true;
        s_3_St_1_Low_1 = false;
        s_3_St_1_Low_2 = false;
      } else {
        r_St_1_Low = v_14;
        s_3_St_1_Low_1 = v_13_1;
        s_3_St_1_Low_2 = v_13_2;
      };
      v_472 = r_St_1_Low;
      v_468 = s_3_St_1_Low_1;
      v_469 = s_3_St_1_Low_2;
      if (v_13_1) {
        v_13_2_1 = v_13_2;
      } else {
        v_13_2_0 = v_13_2;
      };
    };
    s_3_1 = v_468;
    s_3_2 = v_469;
    r = v_472;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_473 = true;
      v_470 = true;
      v_471 = true;
    } else {
      v_6 = (c1==true);
      if (v_6) {
        v_8 = true;
        v_7_1 = true;
        v_7_2 = false;
      } else {
        v_8 = self->pnr;
        v_7_1 = false;
        v_7_2 = false;
      };
      v_4 = !(c2);
      v_5 = (v_4==true);
      if (v_5) {
        r_St_1_Mid = true;
      } else {
        r_St_1_Mid = v_8;
      };
      v_473 = r_St_1_Mid;
      if (v_5) {
        s_3_St_1_Mid_1 = true;
      } else {
        s_3_St_1_Mid_1 = v_7_1;
      };
      v_470 = s_3_St_1_Mid_1;
      if (v_5) {
        s_3_St_1_Mid_2 = true;
      } else {
        s_3_St_1_Mid_2 = v_7_2;
      };
      v_471 = s_3_St_1_Mid_2;
      if (v_7_1) {
        v_7_2_1 = v_7_2;
      } else {
        v_7_2_0 = v_7_2;
      };
      if (s_3_St_1_Mid_1) {
        s_3_St_1_Mid_2_1 = s_3_St_1_Mid_2;
      } else {
        s_3_St_1_Mid_2_0 = s_3_St_1_Mid_2;
      };
    };
    s_3_1 = v_470;
    s_3_2 = v_471;
    r = v_473;
  };
  ck_2_1 = s_3_1;
  ck_2_2 = s_3_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      s_St_1_High = 100;
      v_458 = s_St_1_High;
      nr_St_1_High = false;
      v_464 = nr_St_1_High;
      ns_St_1_High_1 = true;
      v_460 = ns_St_1_High_1;
      ns_St_1_High_2 = true;
      v_461 = ns_St_1_High_2;
    } else {
      s_St_1_Low = 10;
      nr_St_1_Low = false;
      ns_St_1_Low_1 = true;
      ns_St_1_Low_2 = false;
      v_458 = s_St_1_Low;
      v_464 = nr_St_1_Low;
      v_460 = ns_St_1_Low_1;
      v_461 = ns_St_1_Low_2;
    };
    _out->s = v_458;
    ns_1 = v_460;
    ns_2 = v_461;
    nr = v_464;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_459 = 0;
      v_465 = true;
      v_462 = true;
      v_463 = true;
    } else {
      s_St_1_Mid = 50;
      v_459 = s_St_1_Mid;
      nr_St_1_Mid = false;
      v_465 = nr_St_1_Mid;
      ns_St_1_Mid_1 = false;
      v_462 = ns_St_1_Mid_1;
      ns_St_1_Mid_2 = false;
      v_463 = ns_St_1_Mid_2;
      if (ns_St_1_Mid_1) {
        ns_St_1_Mid_2_1 = ns_St_1_Mid_2;
      } else {
        ns_St_1_Mid_2_0 = ns_St_1_Mid_2;
      };
    };
    _out->s = v_459;
    ns_1 = v_462;
    ns_2 = v_463;
    nr = v_465;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_St_1_High_1) {
        ns_St_1_High_2_1 = ns_St_1_High_2;
      } else {
        ns_St_1_High_2_0 = ns_St_1_High_2;
      };
    } else {
      if (ns_St_1_Low_1) {
        ns_St_1_Low_2_1 = ns_St_1_Low_2;
      } else {
        ns_St_1_Low_2_0 = ns_St_1_Low_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (v_2_1) {
        v_2_2_1 = v_2_2;
      } else {
        v_2_2_0 = v_2_2;
      };
      if (s_3_St_1_High_1) {
        s_3_St_1_High_2_1 = s_3_St_1_High_2;
      } else {
        s_3_St_1_High_2_0 = s_3_St_1_High_2;
      };
    } else {
      if (s_3_St_1_Low_1) {
        s_3_St_1_Low_2_1 = s_3_St_1_Low_2;
      } else {
        s_3_St_1_Low_2_0 = s_3_St_1_Low_2;
      };
    };
  };
  self->pnr = nr;
  self->v_466 = ns_1;
  self->v_467 = ns_2;;
}

void Som__music_reset(Som__music_mem* self) {
  self->pnr = false;
  self->v_504 = false;
  self->v_505 = true;
  self->v_506 = true;
}

void Som__music_step(int tipo, Som__music_out* _out, Som__music_mem* self) {
  
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int ns_St_2_Rock_2_0;
  int ns_St_2_Rock_3_0_0;
  int ns_St_2_Rock_3_0_1;
  int ns_St_2_Rock_2_1;
  int ns_St_2_Rock_3_1_0;
  int ns_St_2_Rock_3_1_1;
  int ns_St_2_Regue_2_0;
  int ns_St_2_Regue_3_0_0;
  int ns_St_2_Regue_3_0_1;
  int ns_St_2_Regue_2_1;
  int ns_St_2_Regue_3_1_0;
  int ns_St_2_Regue_3_1_1;
  int ns_St_2_POP_2_0;
  int ns_St_2_POP_3_0_0;
  int ns_St_2_POP_3_0_1;
  int ns_St_2_POP_2_1;
  int ns_St_2_POP_3_1_0;
  int ns_St_2_POP_3_1_1;
  int ns_St_2_Indie_2_0;
  int ns_St_2_Indie_3_0_0;
  int ns_St_2_Indie_3_0_1;
  int ns_St_2_Indie_2_1;
  int ns_St_2_Indie_3_1_0;
  int ns_St_2_Indie_3_1_1;
  int ns_St_2_Funk_2_0;
  int ns_St_2_Funk_3_0_0;
  int ns_St_2_Funk_3_0_1;
  int ns_St_2_Funk_2_1;
  int ns_St_2_Funk_3_1_0;
  int ns_St_2_Funk_3_1_1;
  int ns_St_2_Electronic_2_0;
  int ns_St_2_Electronic_3_0_0;
  int ns_St_2_Electronic_3_0_1;
  int ns_St_2_Electronic_2_1;
  int ns_St_2_Electronic_3_1_0;
  int ns_St_2_Electronic_3_1_1;
  int ns_St_2_Classic_2_0;
  int ns_St_2_Classic_3_0_0;
  int ns_St_2_Classic_3_0_1;
  int ns_St_2_Classic_2_1;
  int ns_St_2_Classic_3_1_0;
  int ns_St_2_Classic_3_1_1;
  int ns_St_2_Off_2_0;
  int ns_St_2_Off_3_0_0;
  int ns_St_2_Off_3_0_1;
  int ns_St_2_Off_2_1;
  int ns_St_2_Off_3_1_0;
  int ns_St_2_Off_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_St_2_Rock;
  int ns_St_2_Rock_3;
  int ns_St_2_Rock_2;
  int ns_St_2_Rock_1;
  int res_St_2_Rock;
  int nr_St_2_Regue;
  int ns_St_2_Regue_3;
  int ns_St_2_Regue_2;
  int ns_St_2_Regue_1;
  int res_St_2_Regue;
  int nr_St_2_POP;
  int ns_St_2_POP_3;
  int ns_St_2_POP_2;
  int ns_St_2_POP_1;
  int res_St_2_POP;
  int nr_St_2_Indie;
  int ns_St_2_Indie_3;
  int ns_St_2_Indie_2;
  int ns_St_2_Indie_1;
  int res_St_2_Indie;
  int nr_St_2_Funk;
  int ns_St_2_Funk_3;
  int ns_St_2_Funk_2;
  int ns_St_2_Funk_1;
  int res_St_2_Funk;
  int nr_St_2_Electronic;
  int ns_St_2_Electronic_3;
  int ns_St_2_Electronic_2;
  int ns_St_2_Electronic_1;
  int res_St_2_Electronic;
  int nr_St_2_Classic;
  int ns_St_2_Classic_3;
  int ns_St_2_Classic_2;
  int ns_St_2_Classic_1;
  int res_St_2_Classic;
  int nr_St_2_Off;
  int ns_St_2_Off_3;
  int ns_St_2_Off_2;
  int ns_St_2_Off_1;
  int res_St_2_Off;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_164_2_0;
  int v_164_3_0_0;
  int v_164_3_0_1;
  int v_164_2_1;
  int v_164_3_1_0;
  int v_164_3_1_1;
  int v_162_2_0;
  int v_162_3_0_0;
  int v_162_3_0_1;
  int v_162_2_1;
  int v_162_3_1_0;
  int v_162_3_1_1;
  int v_160_2_0;
  int v_160_3_0_0;
  int v_160_3_0_1;
  int v_160_2_1;
  int v_160_3_1_0;
  int v_160_3_1_1;
  int v_158_2_0;
  int v_158_3_0_0;
  int v_158_3_0_1;
  int v_158_2_1;
  int v_158_3_1_0;
  int v_158_3_1_1;
  int v_156_2_0;
  int v_156_3_0_0;
  int v_156_3_0_1;
  int v_156_2_1;
  int v_156_3_1_0;
  int v_156_3_1_1;
  int v_154_2_0;
  int v_154_3_0_0;
  int v_154_3_0_1;
  int v_154_2_1;
  int v_154_3_1_0;
  int v_154_3_1_1;
  int v_165;
  int v_164_3;
  int v_164_2;
  int v_164_1;
  int v_163;
  int v_162_3;
  int v_162_2;
  int v_162_1;
  int v_161;
  int v_160_3;
  int v_160_2;
  int v_160_1;
  int v_159;
  int v_158_3;
  int v_158_2;
  int v_158_1;
  int v_157;
  int v_156_3;
  int v_156_2;
  int v_156_1;
  int v_155;
  int v_154_3;
  int v_154_2;
  int v_154_1;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_145_2_0;
  int v_145_3_0_0;
  int v_145_3_0_1;
  int v_145_2_1;
  int v_145_3_1_0;
  int v_145_3_1_1;
  int v_143_2_0;
  int v_143_3_0_0;
  int v_143_3_0_1;
  int v_143_2_1;
  int v_143_3_1_0;
  int v_143_3_1_1;
  int v_141_2_0;
  int v_141_3_0_0;
  int v_141_3_0_1;
  int v_141_2_1;
  int v_141_3_1_0;
  int v_141_3_1_1;
  int v_139_2_0;
  int v_139_3_0_0;
  int v_139_3_0_1;
  int v_139_2_1;
  int v_139_3_1_0;
  int v_139_3_1_1;
  int v_137_2_0;
  int v_137_3_0_0;
  int v_137_3_0_1;
  int v_137_2_1;
  int v_137_3_1_0;
  int v_137_3_1_1;
  int v_135_2_0;
  int v_135_3_0_0;
  int v_135_3_0_1;
  int v_135_2_1;
  int v_135_3_1_0;
  int v_135_3_1_1;
  int v_146;
  int v_145_3;
  int v_145_2;
  int v_145_1;
  int v_144;
  int v_143_3;
  int v_143_2;
  int v_143_1;
  int v_142;
  int v_141_3;
  int v_141_2;
  int v_141_1;
  int v_140;
  int v_139_3;
  int v_139_2;
  int v_139_1;
  int v_138;
  int v_137_3;
  int v_137_2;
  int v_137_1;
  int v_136;
  int v_135_3;
  int v_135_2;
  int v_135_1;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_126_2_0;
  int v_126_3_0_0;
  int v_126_3_0_1;
  int v_126_2_1;
  int v_126_3_1_0;
  int v_126_3_1_1;
  int v_124_2_0;
  int v_124_3_0_0;
  int v_124_3_0_1;
  int v_124_2_1;
  int v_124_3_1_0;
  int v_124_3_1_1;
  int v_122_2_0;
  int v_122_3_0_0;
  int v_122_3_0_1;
  int v_122_2_1;
  int v_122_3_1_0;
  int v_122_3_1_1;
  int v_120_2_0;
  int v_120_3_0_0;
  int v_120_3_0_1;
  int v_120_2_1;
  int v_120_3_1_0;
  int v_120_3_1_1;
  int v_118_2_0;
  int v_118_3_0_0;
  int v_118_3_0_1;
  int v_118_2_1;
  int v_118_3_1_0;
  int v_118_3_1_1;
  int v_116_2_0;
  int v_116_3_0_0;
  int v_116_3_0_1;
  int v_116_2_1;
  int v_116_3_1_0;
  int v_116_3_1_1;
  int v_127;
  int v_126_3;
  int v_126_2;
  int v_126_1;
  int v_125;
  int v_124_3;
  int v_124_2;
  int v_124_1;
  int v_123;
  int v_122_3;
  int v_122_2;
  int v_122_1;
  int v_121;
  int v_120_3;
  int v_120_2;
  int v_120_1;
  int v_119;
  int v_118_3;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_116_3;
  int v_116_2;
  int v_116_1;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_107_2_0;
  int v_107_3_0_0;
  int v_107_3_0_1;
  int v_107_2_1;
  int v_107_3_1_0;
  int v_107_3_1_1;
  int v_105_2_0;
  int v_105_3_0_0;
  int v_105_3_0_1;
  int v_105_2_1;
  int v_105_3_1_0;
  int v_105_3_1_1;
  int v_103_2_0;
  int v_103_3_0_0;
  int v_103_3_0_1;
  int v_103_2_1;
  int v_103_3_1_0;
  int v_103_3_1_1;
  int v_101_2_0;
  int v_101_3_0_0;
  int v_101_3_0_1;
  int v_101_2_1;
  int v_101_3_1_0;
  int v_101_3_1_1;
  int v_99_2_0;
  int v_99_3_0_0;
  int v_99_3_0_1;
  int v_99_2_1;
  int v_99_3_1_0;
  int v_99_3_1_1;
  int v_97_2_0;
  int v_97_3_0_0;
  int v_97_3_0_1;
  int v_97_2_1;
  int v_97_3_1_0;
  int v_97_3_1_1;
  int v_108;
  int v_107_3;
  int v_107_2;
  int v_107_1;
  int v_106;
  int v_105_3;
  int v_105_2;
  int v_105_1;
  int v_104;
  int v_103_3;
  int v_103_2;
  int v_103_1;
  int v_102;
  int v_101_3;
  int v_101_2;
  int v_101_1;
  int v_100;
  int v_99_3;
  int v_99_2;
  int v_99_1;
  int v_98;
  int v_97_3;
  int v_97_2;
  int v_97_1;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_88_2_0;
  int v_88_3_0_0;
  int v_88_3_0_1;
  int v_88_2_1;
  int v_88_3_1_0;
  int v_88_3_1_1;
  int v_86_2_0;
  int v_86_3_0_0;
  int v_86_3_0_1;
  int v_86_2_1;
  int v_86_3_1_0;
  int v_86_3_1_1;
  int v_84_2_0;
  int v_84_3_0_0;
  int v_84_3_0_1;
  int v_84_2_1;
  int v_84_3_1_0;
  int v_84_3_1_1;
  int v_82_2_0;
  int v_82_3_0_0;
  int v_82_3_0_1;
  int v_82_2_1;
  int v_82_3_1_0;
  int v_82_3_1_1;
  int v_80_2_0;
  int v_80_3_0_0;
  int v_80_3_0_1;
  int v_80_2_1;
  int v_80_3_1_0;
  int v_80_3_1_1;
  int v_78_2_0;
  int v_78_3_0_0;
  int v_78_3_0_1;
  int v_78_2_1;
  int v_78_3_1_0;
  int v_78_3_1_1;
  int v_89;
  int v_88_3;
  int v_88_2;
  int v_88_1;
  int v_87;
  int v_86_3;
  int v_86_2;
  int v_86_1;
  int v_85;
  int v_84_3;
  int v_84_2;
  int v_84_1;
  int v_83;
  int v_82_3;
  int v_82_2;
  int v_82_1;
  int v_81;
  int v_80_3;
  int v_80_2;
  int v_80_1;
  int v_79;
  int v_78_3;
  int v_78_2;
  int v_78_1;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_69_2_0;
  int v_69_3_0_0;
  int v_69_3_0_1;
  int v_69_2_1;
  int v_69_3_1_0;
  int v_69_3_1_1;
  int v_67_2_0;
  int v_67_3_0_0;
  int v_67_3_0_1;
  int v_67_2_1;
  int v_67_3_1_0;
  int v_67_3_1_1;
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
  int v_59_2_0;
  int v_59_3_0_0;
  int v_59_3_0_1;
  int v_59_2_1;
  int v_59_3_1_0;
  int v_59_3_1_1;
  int v_70;
  int v_69_3;
  int v_69_2;
  int v_69_1;
  int v_68;
  int v_67_3;
  int v_67_2;
  int v_67_1;
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
  int v_59_3;
  int v_59_2;
  int v_59_1;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_50_2_0;
  int v_50_3_0_0;
  int v_50_3_0_1;
  int v_50_2_1;
  int v_50_3_1_0;
  int v_50_3_1_1;
  int v_48_2_0;
  int v_48_3_0_0;
  int v_48_3_0_1;
  int v_48_2_1;
  int v_48_3_1_0;
  int v_48_3_1_1;
  int v_46_2_0;
  int v_46_3_0_0;
  int v_46_3_0_1;
  int v_46_2_1;
  int v_46_3_1_0;
  int v_46_3_1_1;
  int v_44_2_0;
  int v_44_3_0_0;
  int v_44_3_0_1;
  int v_44_2_1;
  int v_44_3_1_0;
  int v_44_3_1_1;
  int v_42_2_0;
  int v_42_3_0_0;
  int v_42_3_0_1;
  int v_42_2_1;
  int v_42_3_1_0;
  int v_42_3_1_1;
  int v_40_2_0;
  int v_40_3_0_0;
  int v_40_3_0_1;
  int v_40_2_1;
  int v_40_3_1_0;
  int v_40_3_1_1;
  int v_51;
  int v_50_3;
  int v_50_2;
  int v_50_1;
  int v_49;
  int v_48_3;
  int v_48_2;
  int v_48_1;
  int v_47;
  int v_46_3;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_44_3;
  int v_44_2;
  int v_44_1;
  int v_43;
  int v_42_3;
  int v_42_2;
  int v_42_1;
  int v_41;
  int v_40_3;
  int v_40_2;
  int v_40_1;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_31_2_0;
  int v_31_3_0_0;
  int v_31_3_0_1;
  int v_31_2_1;
  int v_31_3_1_0;
  int v_31_3_1_1;
  int v_29_2_0;
  int v_29_3_0_0;
  int v_29_3_0_1;
  int v_29_2_1;
  int v_29_3_1_0;
  int v_29_3_1_1;
  int v_27_2_0;
  int v_27_3_0_0;
  int v_27_3_0_1;
  int v_27_2_1;
  int v_27_3_1_0;
  int v_27_3_1_1;
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
  int v_32;
  int v_31_3;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29_3;
  int v_29_2;
  int v_29_1;
  int v_28;
  int v_27_3;
  int v_27_2;
  int v_27_1;
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
  int v;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int s_St_2_Rock_2_0;
  int s_St_2_Rock_3_0_0;
  int s_St_2_Rock_3_0_1;
  int s_St_2_Rock_2_1;
  int s_St_2_Rock_3_1_0;
  int s_St_2_Rock_3_1_1;
  int s_St_2_Regue_2_0;
  int s_St_2_Regue_3_0_0;
  int s_St_2_Regue_3_0_1;
  int s_St_2_Regue_2_1;
  int s_St_2_Regue_3_1_0;
  int s_St_2_Regue_3_1_1;
  int s_St_2_POP_2_0;
  int s_St_2_POP_3_0_0;
  int s_St_2_POP_3_0_1;
  int s_St_2_POP_2_1;
  int s_St_2_POP_3_1_0;
  int s_St_2_POP_3_1_1;
  int s_St_2_Indie_2_0;
  int s_St_2_Indie_3_0_0;
  int s_St_2_Indie_3_0_1;
  int s_St_2_Indie_2_1;
  int s_St_2_Indie_3_1_0;
  int s_St_2_Indie_3_1_1;
  int s_St_2_Funk_2_0;
  int s_St_2_Funk_3_0_0;
  int s_St_2_Funk_3_0_1;
  int s_St_2_Funk_2_1;
  int s_St_2_Funk_3_1_0;
  int s_St_2_Funk_3_1_1;
  int s_St_2_Electronic_2_0;
  int s_St_2_Electronic_3_0_0;
  int s_St_2_Electronic_3_0_1;
  int s_St_2_Electronic_2_1;
  int s_St_2_Electronic_3_1_0;
  int s_St_2_Electronic_3_1_1;
  int s_St_2_Classic_2_0;
  int s_St_2_Classic_3_0_0;
  int s_St_2_Classic_3_0_1;
  int s_St_2_Classic_2_1;
  int s_St_2_Classic_3_1_0;
  int s_St_2_Classic_3_1_1;
  int s_St_2_Off_2_0;
  int s_St_2_Off_3_0_0;
  int s_St_2_Off_3_0_1;
  int s_St_2_Off_2_1;
  int s_St_2_Off_3_1_0;
  int s_St_2_Off_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_St_2_Rock;
  int s_St_2_Rock_3;
  int s_St_2_Rock_2;
  int s_St_2_Rock_1;
  int r_St_2_Regue;
  int s_St_2_Regue_3;
  int s_St_2_Regue_2;
  int s_St_2_Regue_1;
  int r_St_2_POP;
  int s_St_2_POP_3;
  int s_St_2_POP_2;
  int s_St_2_POP_1;
  int r_St_2_Indie;
  int s_St_2_Indie_3;
  int s_St_2_Indie_2;
  int s_St_2_Indie_1;
  int r_St_2_Funk;
  int s_St_2_Funk_3;
  int s_St_2_Funk_2;
  int s_St_2_Funk_1;
  int r_St_2_Electronic;
  int s_St_2_Electronic_3;
  int s_St_2_Electronic_2;
  int s_St_2_Electronic_1;
  int r_St_2_Classic;
  int s_St_2_Classic_3;
  int s_St_2_Classic_2;
  int s_St_2_Classic_1;
  int r_St_2_Off;
  int s_St_2_Off_3;
  int s_St_2_Off_2;
  int s_St_2_Off_1;
  int ck_3_4;
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
  ck_1 = self->v_504;
  ck_2 = self->v_505;
  ck_3_4 = self->v_506;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        v_134 = (tipo==7);
        if (v_134) {
          v_136 = true;
          v_135_1 = false;
          v_135_2 = false;
          v_135_3 = false;
        } else {
          v_136 = self->pnr;
          v_135_1 = true;
          v_135_2 = true;
          v_135_3 = true;
        };
        v_133 = (tipo==6);
        if (v_133) {
          v_138 = true;
          v_137_1 = false;
          v_137_2 = false;
          v_137_3 = true;
        } else {
          v_138 = v_136;
          v_137_1 = v_135_1;
          v_137_2 = v_135_2;
          v_137_3 = v_135_3;
        };
        v_132 = (tipo==5);
        if (v_132) {
          v_140 = true;
          v_139_1 = false;
          v_139_2 = true;
          v_139_3 = false;
        } else {
          v_140 = v_138;
          v_139_1 = v_137_1;
          v_139_2 = v_137_2;
          v_139_3 = v_137_3;
        };
        v_131 = (tipo==4);
        if (v_131) {
          v_142 = true;
          v_141_1 = true;
          v_141_2 = false;
          v_141_3 = false;
        } else {
          v_142 = v_140;
          v_141_1 = v_139_1;
          v_141_2 = v_139_2;
          v_141_3 = v_139_3;
        };
        v_130 = (tipo==3);
        if (v_130) {
          v_144 = true;
          v_143_1 = true;
          v_143_2 = false;
          v_143_3 = true;
        } else {
          v_144 = v_142;
          v_143_1 = v_141_1;
          v_143_2 = v_141_2;
          v_143_3 = v_141_3;
        };
        v_129 = (tipo==2);
        if (v_129) {
          v_146 = true;
          v_145_1 = true;
          v_145_2 = true;
          v_145_3 = false;
        } else {
          v_146 = v_144;
          v_145_1 = v_143_1;
          v_145_2 = v_143_2;
          v_145_3 = v_143_3;
        };
        v_128 = (tipo==0);
        if (v_128) {
          r_St_2_Classic = true;
          s_St_2_Classic_1 = false;
          s_St_2_Classic_2 = true;
          s_St_2_Classic_3 = true;
        } else {
          r_St_2_Classic = v_146;
          s_St_2_Classic_1 = v_145_1;
          s_St_2_Classic_2 = v_145_2;
          s_St_2_Classic_3 = v_145_3;
        };
        v_525 = r_St_2_Classic;
        v_507 = s_St_2_Classic_1;
        v_508 = s_St_2_Classic_2;
        v_509 = s_St_2_Classic_3;
        if (v_135_1) {
          v_135_2_1 = v_135_2;
          if (v_135_2_1) {
            v_135_3_1_1 = v_135_3;
          } else {
            v_135_3_1_0 = v_135_3;
          };
        } else {
          v_135_2_0 = v_135_2;
          if (v_135_2_0) {
            v_135_3_0_1 = v_135_3;
          } else {
            v_135_3_0_0 = v_135_3;
          };
        };
        if (v_137_1) {
          v_137_2_1 = v_137_2;
          if (v_137_2_1) {
            v_137_3_1_1 = v_137_3;
          } else {
            v_137_3_1_0 = v_137_3;
          };
        } else {
          v_137_2_0 = v_137_2;
          if (v_137_2_0) {
            v_137_3_0_1 = v_137_3;
          } else {
            v_137_3_0_0 = v_137_3;
          };
        };
        if (v_139_1) {
          v_139_2_1 = v_139_2;
          if (v_139_2_1) {
            v_139_3_1_1 = v_139_3;
          } else {
            v_139_3_1_0 = v_139_3;
          };
        } else {
          v_139_2_0 = v_139_2;
          if (v_139_2_0) {
            v_139_3_0_1 = v_139_3;
          } else {
            v_139_3_0_0 = v_139_3;
          };
        };
        if (v_141_1) {
          v_141_2_1 = v_141_2;
          if (v_141_2_1) {
            v_141_3_1_1 = v_141_3;
          } else {
            v_141_3_1_0 = v_141_3;
          };
        } else {
          v_141_2_0 = v_141_2;
          if (v_141_2_0) {
            v_141_3_0_1 = v_141_3;
          } else {
            v_141_3_0_0 = v_141_3;
          };
        };
        if (v_143_1) {
          v_143_2_1 = v_143_2;
          if (v_143_2_1) {
            v_143_3_1_1 = v_143_3;
          } else {
            v_143_3_1_0 = v_143_3;
          };
        } else {
          v_143_2_0 = v_143_2;
          if (v_143_2_0) {
            v_143_3_0_1 = v_143_3;
          } else {
            v_143_3_0_0 = v_143_3;
          };
        };
        if (v_145_1) {
          v_145_2_1 = v_145_2;
          if (v_145_2_1) {
            v_145_3_1_1 = v_145_3;
          } else {
            v_145_3_1_0 = v_145_3;
          };
        } else {
          v_145_2_0 = v_145_2;
          if (v_145_2_0) {
            v_145_3_0_1 = v_145_3;
          } else {
            v_145_3_0_0 = v_145_3;
          };
        };
        if (s_St_2_Classic_1) {
          s_St_2_Classic_2_1 = s_St_2_Classic_2;
          if (s_St_2_Classic_2_1) {
            s_St_2_Classic_3_1_1 = s_St_2_Classic_3;
          } else {
            s_St_2_Classic_3_1_0 = s_St_2_Classic_3;
          };
        } else {
          s_St_2_Classic_2_0 = s_St_2_Classic_2;
          if (s_St_2_Classic_2_0) {
            s_St_2_Classic_3_0_1 = s_St_2_Classic_3;
          } else {
            s_St_2_Classic_3_0_0 = s_St_2_Classic_3;
          };
        };
      } else {
        v_115 = (tipo==7);
        if (v_115) {
          v_117 = true;
          v_116_1 = false;
          v_116_2 = false;
          v_116_3 = false;
        } else {
          v_117 = self->pnr;
          v_116_1 = true;
          v_116_2 = true;
          v_116_3 = false;
        };
        v_114 = (tipo==6);
        if (v_114) {
          v_119 = true;
          v_118_1 = false;
          v_118_2 = false;
          v_118_3 = true;
        } else {
          v_119 = v_117;
          v_118_1 = v_116_1;
          v_118_2 = v_116_2;
          v_118_3 = v_116_3;
        };
        v_113 = (tipo==5);
        if (v_113) {
          v_121 = true;
          v_120_1 = false;
          v_120_2 = true;
          v_120_3 = false;
        } else {
          v_121 = v_119;
          v_120_1 = v_118_1;
          v_120_2 = v_118_2;
          v_120_3 = v_118_3;
        };
        v_112 = (tipo==4);
        if (v_112) {
          v_123 = true;
          v_122_1 = true;
          v_122_2 = false;
          v_122_3 = false;
        } else {
          v_123 = v_121;
          v_122_1 = v_120_1;
          v_122_2 = v_120_2;
          v_122_3 = v_120_3;
        };
        v_111 = (tipo==3);
        if (v_111) {
          v_125 = true;
          v_124_1 = true;
          v_124_2 = false;
          v_124_3 = true;
        } else {
          v_125 = v_123;
          v_124_1 = v_122_1;
          v_124_2 = v_122_2;
          v_124_3 = v_122_3;
        };
        v_110 = (tipo==1);
        if (v_110) {
          v_127 = true;
          v_126_1 = true;
          v_126_2 = true;
          v_126_3 = true;
        } else {
          v_127 = v_125;
          v_126_1 = v_124_1;
          v_126_2 = v_124_2;
          v_126_3 = v_124_3;
        };
        v_109 = (tipo==0);
        if (v_109) {
          r_St_2_Electronic = true;
        } else {
          r_St_2_Electronic = v_127;
        };
        v_525 = r_St_2_Electronic;
        if (v_109) {
          s_St_2_Electronic_1 = false;
        } else {
          s_St_2_Electronic_1 = v_126_1;
        };
        v_507 = s_St_2_Electronic_1;
        if (v_109) {
          s_St_2_Electronic_2 = true;
        } else {
          s_St_2_Electronic_2 = v_126_2;
        };
        v_508 = s_St_2_Electronic_2;
        if (v_109) {
          s_St_2_Electronic_3 = true;
        } else {
          s_St_2_Electronic_3 = v_126_3;
        };
        v_509 = s_St_2_Electronic_3;
        if (v_116_1) {
          v_116_2_1 = v_116_2;
          if (v_116_2_1) {
            v_116_3_1_1 = v_116_3;
          } else {
            v_116_3_1_0 = v_116_3;
          };
        } else {
          v_116_2_0 = v_116_2;
          if (v_116_2_0) {
            v_116_3_0_1 = v_116_3;
          } else {
            v_116_3_0_0 = v_116_3;
          };
        };
        if (v_118_1) {
          v_118_2_1 = v_118_2;
          if (v_118_2_1) {
            v_118_3_1_1 = v_118_3;
          } else {
            v_118_3_1_0 = v_118_3;
          };
        } else {
          v_118_2_0 = v_118_2;
          if (v_118_2_0) {
            v_118_3_0_1 = v_118_3;
          } else {
            v_118_3_0_0 = v_118_3;
          };
        };
        if (v_120_1) {
          v_120_2_1 = v_120_2;
          if (v_120_2_1) {
            v_120_3_1_1 = v_120_3;
          } else {
            v_120_3_1_0 = v_120_3;
          };
        } else {
          v_120_2_0 = v_120_2;
          if (v_120_2_0) {
            v_120_3_0_1 = v_120_3;
          } else {
            v_120_3_0_0 = v_120_3;
          };
        };
        if (v_122_1) {
          v_122_2_1 = v_122_2;
          if (v_122_2_1) {
            v_122_3_1_1 = v_122_3;
          } else {
            v_122_3_1_0 = v_122_3;
          };
        } else {
          v_122_2_0 = v_122_2;
          if (v_122_2_0) {
            v_122_3_0_1 = v_122_3;
          } else {
            v_122_3_0_0 = v_122_3;
          };
        };
        if (v_124_1) {
          v_124_2_1 = v_124_2;
          if (v_124_2_1) {
            v_124_3_1_1 = v_124_3;
          } else {
            v_124_3_1_0 = v_124_3;
          };
        } else {
          v_124_2_0 = v_124_2;
          if (v_124_2_0) {
            v_124_3_0_1 = v_124_3;
          } else {
            v_124_3_0_0 = v_124_3;
          };
        };
        if (v_126_1) {
          v_126_2_1 = v_126_2;
          if (v_126_2_1) {
            v_126_3_1_1 = v_126_3;
          } else {
            v_126_3_1_0 = v_126_3;
          };
        } else {
          v_126_2_0 = v_126_2;
          if (v_126_2_0) {
            v_126_3_0_1 = v_126_3;
          } else {
            v_126_3_0_0 = v_126_3;
          };
        };
        if (s_St_2_Electronic_1) {
          s_St_2_Electronic_2_1 = s_St_2_Electronic_2;
          if (s_St_2_Electronic_2_1) {
            s_St_2_Electronic_3_1_1 = s_St_2_Electronic_3;
          } else {
            s_St_2_Electronic_3_1_0 = s_St_2_Electronic_3;
          };
        } else {
          s_St_2_Electronic_2_0 = s_St_2_Electronic_2;
          if (s_St_2_Electronic_2_0) {
            s_St_2_Electronic_3_0_1 = s_St_2_Electronic_3;
          } else {
            s_St_2_Electronic_3_0_0 = s_St_2_Electronic_3;
          };
        };
      };
      v_519 = v_507;
      v_520 = v_508;
      v_521 = v_509;
      v_527 = v_525;
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (ck_3_4_1_0) {
        v_96 = (tipo==7);
        if (v_96) {
          v_98 = true;
          v_97_1 = false;
          v_97_2 = false;
          v_97_3 = false;
        } else {
          v_98 = self->pnr;
          v_97_1 = true;
          v_97_2 = false;
          v_97_3 = true;
        };
        v_95 = (tipo==6);
        if (v_95) {
          v_100 = true;
          v_99_1 = false;
          v_99_2 = false;
          v_99_3 = true;
        } else {
          v_100 = v_98;
          v_99_1 = v_97_1;
          v_99_2 = v_97_2;
          v_99_3 = v_97_3;
        };
        v_94 = (tipo==5);
        if (v_94) {
          v_102 = true;
          v_101_1 = false;
          v_101_2 = true;
          v_101_3 = false;
        } else {
          v_102 = v_100;
          v_101_1 = v_99_1;
          v_101_2 = v_99_2;
          v_101_3 = v_99_3;
        };
        v_93 = (tipo==4);
        if (v_93) {
          v_104 = true;
          v_103_1 = true;
          v_103_2 = false;
          v_103_3 = false;
        } else {
          v_104 = v_102;
          v_103_1 = v_101_1;
          v_103_2 = v_101_2;
          v_103_3 = v_101_3;
        };
        v_92 = (tipo==2);
        if (v_92) {
          v_106 = true;
          v_105_1 = true;
          v_105_2 = true;
          v_105_3 = false;
        } else {
          v_106 = v_104;
          v_105_1 = v_103_1;
          v_105_2 = v_103_2;
          v_105_3 = v_103_3;
        };
        v_91 = (tipo==1);
        if (v_91) {
          v_108 = true;
          v_107_1 = true;
          v_107_2 = true;
          v_107_3 = true;
        } else {
          v_108 = v_106;
          v_107_1 = v_105_1;
          v_107_2 = v_105_2;
          v_107_3 = v_105_3;
        };
        v_90 = (tipo==0);
        if (v_90) {
          r_St_2_Funk = true;
          s_St_2_Funk_1 = false;
          s_St_2_Funk_2 = true;
          s_St_2_Funk_3 = true;
        } else {
          r_St_2_Funk = v_108;
          s_St_2_Funk_1 = v_107_1;
          s_St_2_Funk_2 = v_107_2;
          s_St_2_Funk_3 = v_107_3;
        };
        v_526 = r_St_2_Funk;
        v_510 = s_St_2_Funk_1;
        v_511 = s_St_2_Funk_2;
        v_512 = s_St_2_Funk_3;
      } else {
        v_77 = (tipo==7);
        if (v_77) {
          v_79 = true;
          v_78_1 = false;
          v_78_2 = false;
          v_78_3 = false;
        } else {
          v_79 = self->pnr;
          v_78_1 = true;
          v_78_2 = false;
          v_78_3 = false;
        };
        v_76 = (tipo==6);
        if (v_76) {
          v_81 = true;
          v_80_1 = false;
          v_80_2 = false;
          v_80_3 = true;
        } else {
          v_81 = v_79;
          v_80_1 = v_78_1;
          v_80_2 = v_78_2;
          v_80_3 = v_78_3;
        };
        v_75 = (tipo==5);
        if (v_75) {
          v_83 = true;
          v_82_1 = false;
          v_82_2 = true;
          v_82_3 = false;
        } else {
          v_83 = v_81;
          v_82_1 = v_80_1;
          v_82_2 = v_80_2;
          v_82_3 = v_80_3;
        };
        v_74 = (tipo==3);
        if (v_74) {
          v_85 = true;
          v_84_1 = true;
          v_84_2 = false;
          v_84_3 = true;
        } else {
          v_85 = v_83;
          v_84_1 = v_82_1;
          v_84_2 = v_82_2;
          v_84_3 = v_82_3;
        };
        v_73 = (tipo==2);
        if (v_73) {
          v_87 = true;
          v_86_1 = true;
          v_86_2 = true;
          v_86_3 = false;
        } else {
          v_87 = v_85;
          v_86_1 = v_84_1;
          v_86_2 = v_84_2;
          v_86_3 = v_84_3;
        };
        v_72 = (tipo==1);
        if (v_72) {
          v_89 = true;
          v_88_1 = true;
          v_88_2 = true;
          v_88_3 = true;
        } else {
          v_89 = v_87;
          v_88_1 = v_86_1;
          v_88_2 = v_86_2;
          v_88_3 = v_86_3;
        };
        v_71 = (tipo==0);
        if (v_71) {
          r_St_2_Indie = true;
        } else {
          r_St_2_Indie = v_89;
        };
        v_526 = r_St_2_Indie;
        if (v_71) {
          s_St_2_Indie_1 = false;
        } else {
          s_St_2_Indie_1 = v_88_1;
        };
        v_510 = s_St_2_Indie_1;
        if (v_71) {
          s_St_2_Indie_2 = true;
        } else {
          s_St_2_Indie_2 = v_88_2;
        };
        v_511 = s_St_2_Indie_2;
        if (v_71) {
          s_St_2_Indie_3 = true;
        } else {
          s_St_2_Indie_3 = v_88_3;
        };
        v_512 = s_St_2_Indie_3;
      };
      v_519 = v_510;
      v_520 = v_511;
      v_521 = v_512;
      v_527 = v_526;
      if (ck_3_4_1_0) {
        if (v_97_1) {
          v_97_2_1 = v_97_2;
          if (v_97_2_1) {
            v_97_3_1_1 = v_97_3;
          } else {
            v_97_3_1_0 = v_97_3;
          };
        } else {
          v_97_2_0 = v_97_2;
          if (v_97_2_0) {
            v_97_3_0_1 = v_97_3;
          } else {
            v_97_3_0_0 = v_97_3;
          };
        };
        if (v_99_1) {
          v_99_2_1 = v_99_2;
          if (v_99_2_1) {
            v_99_3_1_1 = v_99_3;
          } else {
            v_99_3_1_0 = v_99_3;
          };
        } else {
          v_99_2_0 = v_99_2;
          if (v_99_2_0) {
            v_99_3_0_1 = v_99_3;
          } else {
            v_99_3_0_0 = v_99_3;
          };
        };
        if (v_101_1) {
          v_101_2_1 = v_101_2;
          if (v_101_2_1) {
            v_101_3_1_1 = v_101_3;
          } else {
            v_101_3_1_0 = v_101_3;
          };
        } else {
          v_101_2_0 = v_101_2;
          if (v_101_2_0) {
            v_101_3_0_1 = v_101_3;
          } else {
            v_101_3_0_0 = v_101_3;
          };
        };
        if (v_103_1) {
          v_103_2_1 = v_103_2;
          if (v_103_2_1) {
            v_103_3_1_1 = v_103_3;
          } else {
            v_103_3_1_0 = v_103_3;
          };
        } else {
          v_103_2_0 = v_103_2;
          if (v_103_2_0) {
            v_103_3_0_1 = v_103_3;
          } else {
            v_103_3_0_0 = v_103_3;
          };
        };
        if (v_105_1) {
          v_105_2_1 = v_105_2;
          if (v_105_2_1) {
            v_105_3_1_1 = v_105_3;
          } else {
            v_105_3_1_0 = v_105_3;
          };
        } else {
          v_105_2_0 = v_105_2;
          if (v_105_2_0) {
            v_105_3_0_1 = v_105_3;
          } else {
            v_105_3_0_0 = v_105_3;
          };
        };
        if (v_107_1) {
          v_107_2_1 = v_107_2;
          if (v_107_2_1) {
            v_107_3_1_1 = v_107_3;
          } else {
            v_107_3_1_0 = v_107_3;
          };
        } else {
          v_107_2_0 = v_107_2;
          if (v_107_2_0) {
            v_107_3_0_1 = v_107_3;
          } else {
            v_107_3_0_0 = v_107_3;
          };
        };
        if (s_St_2_Funk_1) {
          s_St_2_Funk_2_1 = s_St_2_Funk_2;
          if (s_St_2_Funk_2_1) {
            s_St_2_Funk_3_1_1 = s_St_2_Funk_3;
          } else {
            s_St_2_Funk_3_1_0 = s_St_2_Funk_3;
          };
        } else {
          s_St_2_Funk_2_0 = s_St_2_Funk_2;
          if (s_St_2_Funk_2_0) {
            s_St_2_Funk_3_0_1 = s_St_2_Funk_3;
          } else {
            s_St_2_Funk_3_0_0 = s_St_2_Funk_3;
          };
        };
      } else {
        if (v_78_1) {
          v_78_2_1 = v_78_2;
          if (v_78_2_1) {
            v_78_3_1_1 = v_78_3;
          } else {
            v_78_3_1_0 = v_78_3;
          };
        } else {
          v_78_2_0 = v_78_2;
          if (v_78_2_0) {
            v_78_3_0_1 = v_78_3;
          } else {
            v_78_3_0_0 = v_78_3;
          };
        };
        if (v_80_1) {
          v_80_2_1 = v_80_2;
          if (v_80_2_1) {
            v_80_3_1_1 = v_80_3;
          } else {
            v_80_3_1_0 = v_80_3;
          };
        } else {
          v_80_2_0 = v_80_2;
          if (v_80_2_0) {
            v_80_3_0_1 = v_80_3;
          } else {
            v_80_3_0_0 = v_80_3;
          };
        };
        if (v_82_1) {
          v_82_2_1 = v_82_2;
          if (v_82_2_1) {
            v_82_3_1_1 = v_82_3;
          } else {
            v_82_3_1_0 = v_82_3;
          };
        } else {
          v_82_2_0 = v_82_2;
          if (v_82_2_0) {
            v_82_3_0_1 = v_82_3;
          } else {
            v_82_3_0_0 = v_82_3;
          };
        };
        if (v_84_1) {
          v_84_2_1 = v_84_2;
          if (v_84_2_1) {
            v_84_3_1_1 = v_84_3;
          } else {
            v_84_3_1_0 = v_84_3;
          };
        } else {
          v_84_2_0 = v_84_2;
          if (v_84_2_0) {
            v_84_3_0_1 = v_84_3;
          } else {
            v_84_3_0_0 = v_84_3;
          };
        };
        if (v_86_1) {
          v_86_2_1 = v_86_2;
          if (v_86_2_1) {
            v_86_3_1_1 = v_86_3;
          } else {
            v_86_3_1_0 = v_86_3;
          };
        } else {
          v_86_2_0 = v_86_2;
          if (v_86_2_0) {
            v_86_3_0_1 = v_86_3;
          } else {
            v_86_3_0_0 = v_86_3;
          };
        };
        if (v_88_1) {
          v_88_2_1 = v_88_2;
          if (v_88_2_1) {
            v_88_3_1_1 = v_88_3;
          } else {
            v_88_3_1_0 = v_88_3;
          };
        } else {
          v_88_2_0 = v_88_2;
          if (v_88_2_0) {
            v_88_3_0_1 = v_88_3;
          } else {
            v_88_3_0_0 = v_88_3;
          };
        };
        if (s_St_2_Indie_1) {
          s_St_2_Indie_2_1 = s_St_2_Indie_2;
          if (s_St_2_Indie_2_1) {
            s_St_2_Indie_3_1_1 = s_St_2_Indie_3;
          } else {
            s_St_2_Indie_3_1_0 = s_St_2_Indie_3;
          };
        } else {
          s_St_2_Indie_2_0 = s_St_2_Indie_2;
          if (s_St_2_Indie_2_0) {
            s_St_2_Indie_3_0_1 = s_St_2_Indie_3;
          } else {
            s_St_2_Indie_3_0_0 = s_St_2_Indie_3;
          };
        };
      };
    };
    s_1 = v_519;
    s_2 = v_520;
    s_3 = v_521;
    r = v_527;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      if (ck_3_4_0_1) {
        v_153 = (tipo==7);
        if (v_153) {
          v_155 = true;
          v_154_1 = false;
          v_154_2 = false;
          v_154_3 = false;
        } else {
          v_155 = self->pnr;
          v_154_1 = false;
          v_154_2 = true;
          v_154_3 = true;
        };
        v_152 = (tipo==6);
        if (v_152) {
          v_157 = true;
          v_156_1 = false;
          v_156_2 = false;
          v_156_3 = true;
        } else {
          v_157 = v_155;
          v_156_1 = v_154_1;
          v_156_2 = v_154_2;
          v_156_3 = v_154_3;
        };
        v_151 = (tipo==5);
        if (v_151) {
          v_159 = true;
          v_158_1 = false;
          v_158_2 = true;
          v_158_3 = false;
        } else {
          v_159 = v_157;
          v_158_1 = v_156_1;
          v_158_2 = v_156_2;
          v_158_3 = v_156_3;
        };
        v_150 = (tipo==4);
        if (v_150) {
          v_161 = true;
          v_160_1 = true;
          v_160_2 = false;
          v_160_3 = false;
        } else {
          v_161 = v_159;
          v_160_1 = v_158_1;
          v_160_2 = v_158_2;
          v_160_3 = v_158_3;
        };
        v_149 = (tipo==3);
        if (v_149) {
          v_163 = true;
          v_162_1 = true;
          v_162_2 = false;
          v_162_3 = true;
        } else {
          v_163 = v_161;
          v_162_1 = v_160_1;
          v_162_2 = v_160_2;
          v_162_3 = v_160_3;
        };
        v_148 = (tipo==2);
        if (v_148) {
          v_165 = true;
          v_164_1 = true;
          v_164_2 = true;
          v_164_3 = false;
        } else {
          v_165 = v_163;
          v_164_1 = v_162_1;
          v_164_2 = v_162_2;
          v_164_3 = v_162_3;
        };
        v_147 = (tipo==1);
        if (v_147) {
          r_St_2_Off = true;
          s_St_2_Off_1 = true;
          s_St_2_Off_2 = true;
          s_St_2_Off_3 = true;
        } else {
          r_St_2_Off = v_165;
          s_St_2_Off_1 = v_164_1;
          s_St_2_Off_2 = v_164_2;
          s_St_2_Off_3 = v_164_3;
        };
        v_528 = r_St_2_Off;
        v_513 = s_St_2_Off_1;
        v_514 = s_St_2_Off_2;
        v_515 = s_St_2_Off_3;
        if (v_154_1) {
          v_154_2_1 = v_154_2;
          if (v_154_2_1) {
            v_154_3_1_1 = v_154_3;
          } else {
            v_154_3_1_0 = v_154_3;
          };
        } else {
          v_154_2_0 = v_154_2;
          if (v_154_2_0) {
            v_154_3_0_1 = v_154_3;
          } else {
            v_154_3_0_0 = v_154_3;
          };
        };
        if (v_156_1) {
          v_156_2_1 = v_156_2;
          if (v_156_2_1) {
            v_156_3_1_1 = v_156_3;
          } else {
            v_156_3_1_0 = v_156_3;
          };
        } else {
          v_156_2_0 = v_156_2;
          if (v_156_2_0) {
            v_156_3_0_1 = v_156_3;
          } else {
            v_156_3_0_0 = v_156_3;
          };
        };
        if (v_158_1) {
          v_158_2_1 = v_158_2;
          if (v_158_2_1) {
            v_158_3_1_1 = v_158_3;
          } else {
            v_158_3_1_0 = v_158_3;
          };
        } else {
          v_158_2_0 = v_158_2;
          if (v_158_2_0) {
            v_158_3_0_1 = v_158_3;
          } else {
            v_158_3_0_0 = v_158_3;
          };
        };
        if (v_160_1) {
          v_160_2_1 = v_160_2;
          if (v_160_2_1) {
            v_160_3_1_1 = v_160_3;
          } else {
            v_160_3_1_0 = v_160_3;
          };
        } else {
          v_160_2_0 = v_160_2;
          if (v_160_2_0) {
            v_160_3_0_1 = v_160_3;
          } else {
            v_160_3_0_0 = v_160_3;
          };
        };
        if (v_162_1) {
          v_162_2_1 = v_162_2;
          if (v_162_2_1) {
            v_162_3_1_1 = v_162_3;
          } else {
            v_162_3_1_0 = v_162_3;
          };
        } else {
          v_162_2_0 = v_162_2;
          if (v_162_2_0) {
            v_162_3_0_1 = v_162_3;
          } else {
            v_162_3_0_0 = v_162_3;
          };
        };
        if (v_164_1) {
          v_164_2_1 = v_164_2;
          if (v_164_2_1) {
            v_164_3_1_1 = v_164_3;
          } else {
            v_164_3_1_0 = v_164_3;
          };
        } else {
          v_164_2_0 = v_164_2;
          if (v_164_2_0) {
            v_164_3_0_1 = v_164_3;
          } else {
            v_164_3_0_0 = v_164_3;
          };
        };
        if (s_St_2_Off_1) {
          s_St_2_Off_2_1 = s_St_2_Off_2;
          if (s_St_2_Off_2_1) {
            s_St_2_Off_3_1_1 = s_St_2_Off_3;
          } else {
            s_St_2_Off_3_1_0 = s_St_2_Off_3;
          };
        } else {
          s_St_2_Off_2_0 = s_St_2_Off_2;
          if (s_St_2_Off_2_0) {
            s_St_2_Off_3_0_1 = s_St_2_Off_3;
          } else {
            s_St_2_Off_3_0_0 = s_St_2_Off_3;
          };
        };
      } else {
        v_58 = (tipo==7);
        if (v_58) {
          v_60 = true;
          v_59_1 = false;
          v_59_2 = false;
          v_59_3 = false;
        } else {
          v_60 = self->pnr;
          v_59_1 = false;
          v_59_2 = true;
          v_59_3 = false;
        };
        v_57 = (tipo==6);
        if (v_57) {
          v_62 = true;
          v_61_1 = false;
          v_61_2 = false;
          v_61_3 = true;
        } else {
          v_62 = v_60;
          v_61_1 = v_59_1;
          v_61_2 = v_59_2;
          v_61_3 = v_59_3;
        };
        v_56 = (tipo==4);
        if (v_56) {
          v_64 = true;
          v_63_1 = true;
          v_63_2 = false;
          v_63_3 = false;
        } else {
          v_64 = v_62;
          v_63_1 = v_61_1;
          v_63_2 = v_61_2;
          v_63_3 = v_61_3;
        };
        v_55 = (tipo==3);
        if (v_55) {
          v_66 = true;
          v_65_1 = true;
          v_65_2 = false;
          v_65_3 = true;
        } else {
          v_66 = v_64;
          v_65_1 = v_63_1;
          v_65_2 = v_63_2;
          v_65_3 = v_63_3;
        };
        v_54 = (tipo==2);
        if (v_54) {
          v_68 = true;
          v_67_1 = true;
          v_67_2 = true;
          v_67_3 = false;
        } else {
          v_68 = v_66;
          v_67_1 = v_65_1;
          v_67_2 = v_65_2;
          v_67_3 = v_65_3;
        };
        v_53 = (tipo==1);
        if (v_53) {
          v_70 = true;
          v_69_1 = true;
          v_69_2 = true;
          v_69_3 = true;
        } else {
          v_70 = v_68;
          v_69_1 = v_67_1;
          v_69_2 = v_67_2;
          v_69_3 = v_67_3;
        };
        v_52 = (tipo==0);
        if (v_52) {
          r_St_2_POP = true;
        } else {
          r_St_2_POP = v_70;
        };
        v_528 = r_St_2_POP;
        if (v_52) {
          s_St_2_POP_1 = false;
        } else {
          s_St_2_POP_1 = v_69_1;
        };
        v_513 = s_St_2_POP_1;
        if (v_52) {
          s_St_2_POP_2 = true;
        } else {
          s_St_2_POP_2 = v_69_2;
        };
        v_514 = s_St_2_POP_2;
        if (v_52) {
          s_St_2_POP_3 = true;
        } else {
          s_St_2_POP_3 = v_69_3;
        };
        v_515 = s_St_2_POP_3;
        if (v_59_1) {
          v_59_2_1 = v_59_2;
          if (v_59_2_1) {
            v_59_3_1_1 = v_59_3;
          } else {
            v_59_3_1_0 = v_59_3;
          };
        } else {
          v_59_2_0 = v_59_2;
          if (v_59_2_0) {
            v_59_3_0_1 = v_59_3;
          } else {
            v_59_3_0_0 = v_59_3;
          };
        };
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
        if (v_67_1) {
          v_67_2_1 = v_67_2;
          if (v_67_2_1) {
            v_67_3_1_1 = v_67_3;
          } else {
            v_67_3_1_0 = v_67_3;
          };
        } else {
          v_67_2_0 = v_67_2;
          if (v_67_2_0) {
            v_67_3_0_1 = v_67_3;
          } else {
            v_67_3_0_0 = v_67_3;
          };
        };
        if (v_69_1) {
          v_69_2_1 = v_69_2;
          if (v_69_2_1) {
            v_69_3_1_1 = v_69_3;
          } else {
            v_69_3_1_0 = v_69_3;
          };
        } else {
          v_69_2_0 = v_69_2;
          if (v_69_2_0) {
            v_69_3_0_1 = v_69_3;
          } else {
            v_69_3_0_0 = v_69_3;
          };
        };
        if (s_St_2_POP_1) {
          s_St_2_POP_2_1 = s_St_2_POP_2;
          if (s_St_2_POP_2_1) {
            s_St_2_POP_3_1_1 = s_St_2_POP_3;
          } else {
            s_St_2_POP_3_1_0 = s_St_2_POP_3;
          };
        } else {
          s_St_2_POP_2_0 = s_St_2_POP_2;
          if (s_St_2_POP_2_0) {
            s_St_2_POP_3_0_1 = s_St_2_POP_3;
          } else {
            s_St_2_POP_3_0_0 = s_St_2_POP_3;
          };
        };
      };
      v_522 = v_513;
      v_523 = v_514;
      v_524 = v_515;
      v_530 = v_528;
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (ck_3_4_0_0) {
        v_39 = (tipo==7);
        if (v_39) {
          v_41 = true;
          v_40_1 = false;
          v_40_2 = false;
          v_40_3 = false;
        } else {
          v_41 = self->pnr;
          v_40_1 = false;
          v_40_2 = false;
          v_40_3 = true;
        };
        v_38 = (tipo==5);
        if (v_38) {
          v_43 = true;
          v_42_1 = false;
          v_42_2 = true;
          v_42_3 = false;
        } else {
          v_43 = v_41;
          v_42_1 = v_40_1;
          v_42_2 = v_40_2;
          v_42_3 = v_40_3;
        };
        v_37 = (tipo==4);
        if (v_37) {
          v_45 = true;
          v_44_1 = true;
          v_44_2 = false;
          v_44_3 = false;
        } else {
          v_45 = v_43;
          v_44_1 = v_42_1;
          v_44_2 = v_42_2;
          v_44_3 = v_42_3;
        };
        v_36 = (tipo==3);
        if (v_36) {
          v_47 = true;
          v_46_1 = true;
          v_46_2 = false;
          v_46_3 = true;
        } else {
          v_47 = v_45;
          v_46_1 = v_44_1;
          v_46_2 = v_44_2;
          v_46_3 = v_44_3;
        };
        v_35 = (tipo==2);
        if (v_35) {
          v_49 = true;
          v_48_1 = true;
          v_48_2 = true;
          v_48_3 = false;
        } else {
          v_49 = v_47;
          v_48_1 = v_46_1;
          v_48_2 = v_46_2;
          v_48_3 = v_46_3;
        };
        v_34 = (tipo==1);
        if (v_34) {
          v_51 = true;
          v_50_1 = true;
          v_50_2 = true;
          v_50_3 = true;
        } else {
          v_51 = v_49;
          v_50_1 = v_48_1;
          v_50_2 = v_48_2;
          v_50_3 = v_48_3;
        };
        v_33 = (tipo==0);
        if (v_33) {
          r_St_2_Regue = true;
          s_St_2_Regue_1 = false;
          s_St_2_Regue_2 = true;
          s_St_2_Regue_3 = true;
        } else {
          r_St_2_Regue = v_51;
          s_St_2_Regue_1 = v_50_1;
          s_St_2_Regue_2 = v_50_2;
          s_St_2_Regue_3 = v_50_3;
        };
        v_529 = r_St_2_Regue;
        v_516 = s_St_2_Regue_1;
        v_517 = s_St_2_Regue_2;
        v_518 = s_St_2_Regue_3;
      } else {
        v_20 = (tipo==6);
        if (v_20) {
          v_22 = true;
          v_21_1 = false;
          v_21_2 = false;
          v_21_3 = true;
        } else {
          v_22 = self->pnr;
          v_21_1 = false;
          v_21_2 = false;
          v_21_3 = false;
        };
        v_19 = (tipo==5);
        if (v_19) {
          v_24 = true;
          v_23_1 = false;
          v_23_2 = true;
          v_23_3 = false;
        } else {
          v_24 = v_22;
          v_23_1 = v_21_1;
          v_23_2 = v_21_2;
          v_23_3 = v_21_3;
        };
        v_18 = (tipo==4);
        if (v_18) {
          v_26 = true;
          v_25_1 = true;
          v_25_2 = false;
          v_25_3 = false;
        } else {
          v_26 = v_24;
          v_25_1 = v_23_1;
          v_25_2 = v_23_2;
          v_25_3 = v_23_3;
        };
        v_17 = (tipo==3);
        if (v_17) {
          v_28 = true;
          v_27_1 = true;
          v_27_2 = false;
          v_27_3 = true;
        } else {
          v_28 = v_26;
          v_27_1 = v_25_1;
          v_27_2 = v_25_2;
          v_27_3 = v_25_3;
        };
        v_16 = (tipo==2);
        if (v_16) {
          v_30 = true;
          v_29_1 = true;
          v_29_2 = true;
          v_29_3 = false;
        } else {
          v_30 = v_28;
          v_29_1 = v_27_1;
          v_29_2 = v_27_2;
          v_29_3 = v_27_3;
        };
        v_15 = (tipo==1);
        if (v_15) {
          v_32 = true;
          v_31_1 = true;
          v_31_2 = true;
          v_31_3 = true;
        } else {
          v_32 = v_30;
          v_31_1 = v_29_1;
          v_31_2 = v_29_2;
          v_31_3 = v_29_3;
        };
        v = (tipo==0);
        if (v) {
          r_St_2_Rock = true;
        } else {
          r_St_2_Rock = v_32;
        };
        v_529 = r_St_2_Rock;
        if (v) {
          s_St_2_Rock_1 = false;
        } else {
          s_St_2_Rock_1 = v_31_1;
        };
        v_516 = s_St_2_Rock_1;
        if (v) {
          s_St_2_Rock_2 = true;
        } else {
          s_St_2_Rock_2 = v_31_2;
        };
        v_517 = s_St_2_Rock_2;
        if (v) {
          s_St_2_Rock_3 = true;
        } else {
          s_St_2_Rock_3 = v_31_3;
        };
        v_518 = s_St_2_Rock_3;
      };
      v_522 = v_516;
      v_523 = v_517;
      v_524 = v_518;
      v_530 = v_529;
    };
    s_1 = v_522;
    s_2 = v_523;
    s_3 = v_524;
    r = v_530;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  ck_3_3 = s_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        res_St_2_Classic = 1;
        nr_St_2_Classic = false;
        ns_St_2_Classic_1 = true;
        ns_St_2_Classic_2 = true;
        ns_St_2_Classic_3 = true;
        v_474 = res_St_2_Classic;
        v_498 = nr_St_2_Classic;
        v_480 = ns_St_2_Classic_1;
        v_481 = ns_St_2_Classic_2;
        v_482 = ns_St_2_Classic_3;
        if (ns_St_2_Classic_1) {
          ns_St_2_Classic_2_1 = ns_St_2_Classic_2;
          if (ns_St_2_Classic_2_1) {
            ns_St_2_Classic_3_1_1 = ns_St_2_Classic_3;
          } else {
            ns_St_2_Classic_3_1_0 = ns_St_2_Classic_3;
          };
        } else {
          ns_St_2_Classic_2_0 = ns_St_2_Classic_2;
          if (ns_St_2_Classic_2_0) {
            ns_St_2_Classic_3_0_1 = ns_St_2_Classic_3;
          } else {
            ns_St_2_Classic_3_0_0 = ns_St_2_Classic_3;
          };
        };
      } else {
        res_St_2_Electronic = 2;
        v_474 = res_St_2_Electronic;
        nr_St_2_Electronic = false;
        v_498 = nr_St_2_Electronic;
        ns_St_2_Electronic_1 = true;
        v_480 = ns_St_2_Electronic_1;
        ns_St_2_Electronic_2 = true;
        v_481 = ns_St_2_Electronic_2;
        ns_St_2_Electronic_3 = false;
        v_482 = ns_St_2_Electronic_3;
        if (ns_St_2_Electronic_1) {
          ns_St_2_Electronic_2_1 = ns_St_2_Electronic_2;
          if (ns_St_2_Electronic_2_1) {
            ns_St_2_Electronic_3_1_1 = ns_St_2_Electronic_3;
          } else {
            ns_St_2_Electronic_3_1_0 = ns_St_2_Electronic_3;
          };
        } else {
          ns_St_2_Electronic_2_0 = ns_St_2_Electronic_2;
          if (ns_St_2_Electronic_2_0) {
            ns_St_2_Electronic_3_0_1 = ns_St_2_Electronic_3;
          } else {
            ns_St_2_Electronic_3_0_0 = ns_St_2_Electronic_3;
          };
        };
      };
      v_476 = v_474;
      v_492 = v_480;
      v_493 = v_481;
      v_494 = v_482;
      v_500 = v_498;
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        res_St_2_Funk = 3;
        nr_St_2_Funk = false;
        ns_St_2_Funk_1 = true;
        ns_St_2_Funk_2 = false;
        ns_St_2_Funk_3 = true;
        v_475 = res_St_2_Funk;
        v_499 = nr_St_2_Funk;
        v_483 = ns_St_2_Funk_1;
        v_484 = ns_St_2_Funk_2;
        v_485 = ns_St_2_Funk_3;
      } else {
        res_St_2_Indie = 4;
        v_475 = res_St_2_Indie;
        nr_St_2_Indie = false;
        v_499 = nr_St_2_Indie;
        ns_St_2_Indie_1 = true;
        v_483 = ns_St_2_Indie_1;
        ns_St_2_Indie_2 = false;
        v_484 = ns_St_2_Indie_2;
        ns_St_2_Indie_3 = false;
        v_485 = ns_St_2_Indie_3;
      };
      v_476 = v_475;
      v_492 = v_483;
      v_493 = v_484;
      v_494 = v_485;
      v_500 = v_499;
      if (ck_3_3_1_0) {
        if (ns_St_2_Funk_1) {
          ns_St_2_Funk_2_1 = ns_St_2_Funk_2;
          if (ns_St_2_Funk_2_1) {
            ns_St_2_Funk_3_1_1 = ns_St_2_Funk_3;
          } else {
            ns_St_2_Funk_3_1_0 = ns_St_2_Funk_3;
          };
        } else {
          ns_St_2_Funk_2_0 = ns_St_2_Funk_2;
          if (ns_St_2_Funk_2_0) {
            ns_St_2_Funk_3_0_1 = ns_St_2_Funk_3;
          } else {
            ns_St_2_Funk_3_0_0 = ns_St_2_Funk_3;
          };
        };
      } else {
        if (ns_St_2_Indie_1) {
          ns_St_2_Indie_2_1 = ns_St_2_Indie_2;
          if (ns_St_2_Indie_2_1) {
            ns_St_2_Indie_3_1_1 = ns_St_2_Indie_3;
          } else {
            ns_St_2_Indie_3_1_0 = ns_St_2_Indie_3;
          };
        } else {
          ns_St_2_Indie_2_0 = ns_St_2_Indie_2;
          if (ns_St_2_Indie_2_0) {
            ns_St_2_Indie_3_0_1 = ns_St_2_Indie_3;
          } else {
            ns_St_2_Indie_3_0_0 = ns_St_2_Indie_3;
          };
        };
      };
    };
    _out->res = v_476;
    ns_1 = v_492;
    ns_2 = v_493;
    ns_3 = v_494;
    nr = v_500;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      if (ck_3_3_0_1) {
        res_St_2_Off = 0;
        nr_St_2_Off = false;
        ns_St_2_Off_1 = false;
        ns_St_2_Off_2 = true;
        ns_St_2_Off_3 = true;
        v_477 = res_St_2_Off;
        v_501 = nr_St_2_Off;
        v_486 = ns_St_2_Off_1;
        v_487 = ns_St_2_Off_2;
        v_488 = ns_St_2_Off_3;
        if (ns_St_2_Off_1) {
          ns_St_2_Off_2_1 = ns_St_2_Off_2;
          if (ns_St_2_Off_2_1) {
            ns_St_2_Off_3_1_1 = ns_St_2_Off_3;
          } else {
            ns_St_2_Off_3_1_0 = ns_St_2_Off_3;
          };
        } else {
          ns_St_2_Off_2_0 = ns_St_2_Off_2;
          if (ns_St_2_Off_2_0) {
            ns_St_2_Off_3_0_1 = ns_St_2_Off_3;
          } else {
            ns_St_2_Off_3_0_0 = ns_St_2_Off_3;
          };
        };
      } else {
        res_St_2_POP = 5;
        v_477 = res_St_2_POP;
        nr_St_2_POP = false;
        v_501 = nr_St_2_POP;
        ns_St_2_POP_1 = false;
        v_486 = ns_St_2_POP_1;
        ns_St_2_POP_2 = true;
        v_487 = ns_St_2_POP_2;
        ns_St_2_POP_3 = false;
        v_488 = ns_St_2_POP_3;
        if (ns_St_2_POP_1) {
          ns_St_2_POP_2_1 = ns_St_2_POP_2;
          if (ns_St_2_POP_2_1) {
            ns_St_2_POP_3_1_1 = ns_St_2_POP_3;
          } else {
            ns_St_2_POP_3_1_0 = ns_St_2_POP_3;
          };
        } else {
          ns_St_2_POP_2_0 = ns_St_2_POP_2;
          if (ns_St_2_POP_2_0) {
            ns_St_2_POP_3_0_1 = ns_St_2_POP_3;
          } else {
            ns_St_2_POP_3_0_0 = ns_St_2_POP_3;
          };
        };
      };
      v_479 = v_477;
      v_495 = v_486;
      v_496 = v_487;
      v_497 = v_488;
      v_503 = v_501;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        res_St_2_Regue = 6;
        nr_St_2_Regue = false;
        ns_St_2_Regue_1 = false;
        ns_St_2_Regue_2 = false;
        ns_St_2_Regue_3 = true;
        v_478 = res_St_2_Regue;
        v_502 = nr_St_2_Regue;
        v_489 = ns_St_2_Regue_1;
        v_490 = ns_St_2_Regue_2;
        v_491 = ns_St_2_Regue_3;
      } else {
        res_St_2_Rock = 7;
        v_478 = res_St_2_Rock;
        nr_St_2_Rock = false;
        v_502 = nr_St_2_Rock;
        ns_St_2_Rock_1 = false;
        v_489 = ns_St_2_Rock_1;
        ns_St_2_Rock_2 = false;
        v_490 = ns_St_2_Rock_2;
        ns_St_2_Rock_3 = false;
        v_491 = ns_St_2_Rock_3;
      };
      v_479 = v_478;
      v_495 = v_489;
      v_496 = v_490;
      v_497 = v_491;
      v_503 = v_502;
    };
    _out->res = v_479;
    ns_1 = v_495;
    ns_2 = v_496;
    ns_3 = v_497;
    nr = v_503;
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
        if (ns_St_2_Regue_1) {
          ns_St_2_Regue_2_1 = ns_St_2_Regue_2;
          if (ns_St_2_Regue_2_1) {
            ns_St_2_Regue_3_1_1 = ns_St_2_Regue_3;
          } else {
            ns_St_2_Regue_3_1_0 = ns_St_2_Regue_3;
          };
        } else {
          ns_St_2_Regue_2_0 = ns_St_2_Regue_2;
          if (ns_St_2_Regue_2_0) {
            ns_St_2_Regue_3_0_1 = ns_St_2_Regue_3;
          } else {
            ns_St_2_Regue_3_0_0 = ns_St_2_Regue_3;
          };
        };
      } else {
        if (ns_St_2_Rock_1) {
          ns_St_2_Rock_2_1 = ns_St_2_Rock_2;
          if (ns_St_2_Rock_2_1) {
            ns_St_2_Rock_3_1_1 = ns_St_2_Rock_3;
          } else {
            ns_St_2_Rock_3_1_0 = ns_St_2_Rock_3;
          };
        } else {
          ns_St_2_Rock_2_0 = ns_St_2_Rock_2;
          if (ns_St_2_Rock_2_0) {
            ns_St_2_Rock_3_0_1 = ns_St_2_Rock_3;
          } else {
            ns_St_2_Rock_3_0_0 = ns_St_2_Rock_3;
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
      if (ck_3_4_0_0) {
        if (v_40_1) {
          v_40_2_1 = v_40_2;
          if (v_40_2_1) {
            v_40_3_1_1 = v_40_3;
          } else {
            v_40_3_1_0 = v_40_3;
          };
        } else {
          v_40_2_0 = v_40_2;
          if (v_40_2_0) {
            v_40_3_0_1 = v_40_3;
          } else {
            v_40_3_0_0 = v_40_3;
          };
        };
        if (v_42_1) {
          v_42_2_1 = v_42_2;
          if (v_42_2_1) {
            v_42_3_1_1 = v_42_3;
          } else {
            v_42_3_1_0 = v_42_3;
          };
        } else {
          v_42_2_0 = v_42_2;
          if (v_42_2_0) {
            v_42_3_0_1 = v_42_3;
          } else {
            v_42_3_0_0 = v_42_3;
          };
        };
        if (v_44_1) {
          v_44_2_1 = v_44_2;
          if (v_44_2_1) {
            v_44_3_1_1 = v_44_3;
          } else {
            v_44_3_1_0 = v_44_3;
          };
        } else {
          v_44_2_0 = v_44_2;
          if (v_44_2_0) {
            v_44_3_0_1 = v_44_3;
          } else {
            v_44_3_0_0 = v_44_3;
          };
        };
        if (v_46_1) {
          v_46_2_1 = v_46_2;
          if (v_46_2_1) {
            v_46_3_1_1 = v_46_3;
          } else {
            v_46_3_1_0 = v_46_3;
          };
        } else {
          v_46_2_0 = v_46_2;
          if (v_46_2_0) {
            v_46_3_0_1 = v_46_3;
          } else {
            v_46_3_0_0 = v_46_3;
          };
        };
        if (v_48_1) {
          v_48_2_1 = v_48_2;
          if (v_48_2_1) {
            v_48_3_1_1 = v_48_3;
          } else {
            v_48_3_1_0 = v_48_3;
          };
        } else {
          v_48_2_0 = v_48_2;
          if (v_48_2_0) {
            v_48_3_0_1 = v_48_3;
          } else {
            v_48_3_0_0 = v_48_3;
          };
        };
        if (v_50_1) {
          v_50_2_1 = v_50_2;
          if (v_50_2_1) {
            v_50_3_1_1 = v_50_3;
          } else {
            v_50_3_1_0 = v_50_3;
          };
        } else {
          v_50_2_0 = v_50_2;
          if (v_50_2_0) {
            v_50_3_0_1 = v_50_3;
          } else {
            v_50_3_0_0 = v_50_3;
          };
        };
        if (s_St_2_Regue_1) {
          s_St_2_Regue_2_1 = s_St_2_Regue_2;
          if (s_St_2_Regue_2_1) {
            s_St_2_Regue_3_1_1 = s_St_2_Regue_3;
          } else {
            s_St_2_Regue_3_1_0 = s_St_2_Regue_3;
          };
        } else {
          s_St_2_Regue_2_0 = s_St_2_Regue_2;
          if (s_St_2_Regue_2_0) {
            s_St_2_Regue_3_0_1 = s_St_2_Regue_3;
          } else {
            s_St_2_Regue_3_0_0 = s_St_2_Regue_3;
          };
        };
      } else {
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
        if (v_27_1) {
          v_27_2_1 = v_27_2;
          if (v_27_2_1) {
            v_27_3_1_1 = v_27_3;
          } else {
            v_27_3_1_0 = v_27_3;
          };
        } else {
          v_27_2_0 = v_27_2;
          if (v_27_2_0) {
            v_27_3_0_1 = v_27_3;
          } else {
            v_27_3_0_0 = v_27_3;
          };
        };
        if (v_29_1) {
          v_29_2_1 = v_29_2;
          if (v_29_2_1) {
            v_29_3_1_1 = v_29_3;
          } else {
            v_29_3_1_0 = v_29_3;
          };
        } else {
          v_29_2_0 = v_29_2;
          if (v_29_2_0) {
            v_29_3_0_1 = v_29_3;
          } else {
            v_29_3_0_0 = v_29_3;
          };
        };
        if (v_31_1) {
          v_31_2_1 = v_31_2;
          if (v_31_2_1) {
            v_31_3_1_1 = v_31_3;
          } else {
            v_31_3_1_0 = v_31_3;
          };
        } else {
          v_31_2_0 = v_31_2;
          if (v_31_2_0) {
            v_31_3_0_1 = v_31_3;
          } else {
            v_31_3_0_0 = v_31_3;
          };
        };
        if (s_St_2_Rock_1) {
          s_St_2_Rock_2_1 = s_St_2_Rock_2;
          if (s_St_2_Rock_2_1) {
            s_St_2_Rock_3_1_1 = s_St_2_Rock_3;
          } else {
            s_St_2_Rock_3_1_0 = s_St_2_Rock_3;
          };
        } else {
          s_St_2_Rock_2_0 = s_St_2_Rock_2;
          if (s_St_2_Rock_2_0) {
            s_St_2_Rock_3_0_1 = s_St_2_Rock_3;
          } else {
            s_St_2_Rock_3_0_0 = s_St_2_Rock_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_504 = ns_1;
  self->v_505 = ns_2;
  self->v_506 = ns_3;;
}

void Som__main_reset(Som__main_mem* self) {
  self->pnr = false;
  self->v_539 = true;
  self->v_540 = false;
  self->pnr_1 = false;
  self->v_555 = true;
  self->v_556 = false;
  self->pnr_2 = false;
  self->v_571 = true;
  self->v_572 = false;
  self->pnr_3 = false;
  self->ck_9_1 = false;
  self->pnr_4 = false;
  self->ck_7_1 = false;
  self->pnr_5 = false;
  self->ck_5_1 = false;
  self->pnr_6 = false;
  self->v_609 = false;
  self->v_610 = true;
  self->v_611 = true;
}

void Som__main_step(int tipo, Som__main_out* _out, Som__main_mem* self) {
  Main_controller__main_controller_out Main_controller__main_controller_out_st;
  
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int ns_St_3_High_2_0;
  int ns_St_3_High_2_1;
  int ns_St_3_Mid_2_0;
  int ns_St_3_Mid_2_1;
  int ns_St_3_Low_2_0;
  int ns_St_3_Low_2_1;
  int ck_16_2_0;
  int ck_16_2_1;
  int nr_St_3_High;
  int ns_St_3_High_2;
  int ns_St_3_High_1;
  int s_2_St_3_High;
  int nr_St_3_Mid;
  int ns_St_3_Mid_2;
  int ns_St_3_Mid_1;
  int s_2_St_3_Mid;
  int nr_St_3_Low;
  int ns_St_3_Low_2;
  int ns_St_3_Low_1;
  int s_2_St_3_Low;
  int ck_16_2;
  int ck_16_1;
  int v_456_2_0;
  int v_456_2_1;
  int v_457;
  int v_456_2;
  int v_456_1;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_450_2_0;
  int v_450_2_1;
  int v_451;
  int v_450_2;
  int v_450_1;
  int v_449;
  int v_448;
  int v_447;
  int v_445_2_0;
  int v_445_2_1;
  int v_446;
  int v_445_2;
  int v_445_1;
  int v_444;
  int v_443;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int s_4_St_3_High_2_0;
  int s_4_St_3_High_2_1;
  int s_4_St_3_Mid_2_0;
  int s_4_St_3_Mid_2_1;
  int s_4_St_3_Low_2_0;
  int s_4_St_3_Low_2_1;
  int ck_15_2_0;
  int ck_15_2_1;
  int r_St_3_High;
  int s_4_St_3_High_2;
  int s_4_St_3_High_1;
  int r_St_3_Mid;
  int s_4_St_3_Mid_2;
  int s_4_St_3_Mid_1;
  int r_St_3_Low;
  int s_4_St_3_Low_2;
  int s_4_St_3_Low_1;
  int ck_15_2;
  int ck_15_1;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int ns_1_St_4_High_2_0;
  int ns_1_St_4_High_2_1;
  int ns_1_St_4_Mid_2_0;
  int ns_1_St_4_Mid_2_1;
  int ns_1_St_4_Low_2_0;
  int ns_1_St_4_Low_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int nr_1_St_4_High;
  int ns_1_St_4_High_2;
  int ns_1_St_4_High_1;
  int s_1_St_4_High;
  int nr_1_St_4_Mid;
  int ns_1_St_4_Mid_2;
  int ns_1_St_4_Mid_1;
  int s_1_St_4_Mid;
  int nr_1_St_4_Low;
  int ns_1_St_4_Low_2;
  int ns_1_St_4_Low_1;
  int s_1_St_4_Low;
  int ck_14_2;
  int ck_14_1;
  int v_441_2_0;
  int v_441_2_1;
  int v_442;
  int v_441_2;
  int v_441_1;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_435_2_0;
  int v_435_2_1;
  int v_436;
  int v_435_2;
  int v_435_1;
  int v_434;
  int v_433;
  int v_432;
  int v_430_2_0;
  int v_430_2_1;
  int v_431;
  int v_430_2;
  int v_430_1;
  int v_429;
  int v_428;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int s_5_St_4_High_2_0;
  int s_5_St_4_High_2_1;
  int s_5_St_4_Mid_2_0;
  int s_5_St_4_Mid_2_1;
  int s_5_St_4_Low_2_0;
  int s_5_St_4_Low_2_1;
  int ck_13_2_0;
  int ck_13_2_1;
  int r_1_St_4_High;
  int s_5_St_4_High_2;
  int s_5_St_4_High_1;
  int r_1_St_4_Mid;
  int s_5_St_4_Mid_2;
  int s_5_St_4_Mid_1;
  int r_1_St_4_Low;
  int s_5_St_4_Low_2;
  int s_5_St_4_Low_1;
  int ck_13_2;
  int ck_13_1;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int ns_2_St_5_High_2_0;
  int ns_2_St_5_High_2_1;
  int ns_2_St_5_Mid_2_0;
  int ns_2_St_5_Mid_2_1;
  int ns_2_St_5_Low_2_0;
  int ns_2_St_5_Low_2_1;
  int ck_12_2_0;
  int ck_12_2_1;
  int nr_2_St_5_High;
  int ns_2_St_5_High_2;
  int ns_2_St_5_High_1;
  int s_St_5_High;
  int nr_2_St_5_Mid;
  int ns_2_St_5_Mid_2;
  int ns_2_St_5_Mid_1;
  int s_St_5_Mid;
  int nr_2_St_5_Low;
  int ns_2_St_5_Low_2;
  int ns_2_St_5_Low_1;
  int s_St_5_Low;
  int ck_12_2;
  int ck_12_1;
  int v_426_2_0;
  int v_426_2_1;
  int v_427;
  int v_426_2;
  int v_426_1;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_420_2_0;
  int v_420_2_1;
  int v_421;
  int v_420_2;
  int v_420_1;
  int v_419;
  int v_418;
  int v_417;
  int v_415_2_0;
  int v_415_2_1;
  int v_416;
  int v_415_2;
  int v_415_1;
  int v_414;
  int v_413;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int s_6_St_5_High_2_0;
  int s_6_St_5_High_2_1;
  int s_6_St_5_Mid_2_0;
  int s_6_St_5_Mid_2_1;
  int s_6_St_5_Low_2_0;
  int s_6_St_5_Low_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int r_2_St_5_High;
  int s_6_St_5_High_2;
  int s_6_St_5_High_1;
  int r_2_St_5_Mid;
  int s_6_St_5_Mid_2;
  int s_6_St_5_Mid_1;
  int r_2_St_5_Low;
  int s_6_St_5_Low_2;
  int s_6_St_5_Low_1;
  int ck_11_2;
  int ck_11_1;
  int nr_3_St_6_ON;
  int ns_3_St_6_ON_1;
  int ligado_2_St_6_ON;
  int nr_3_St_6_Off;
  int ns_3_St_6_Off_1;
  int ligado_2_St_6_Off;
  int ck_10_1;
  int v_412;
  int r_3_St_6_ON;
  int s_7_St_6_ON_1;
  int r_3_St_6_Off;
  int s_7_St_6_Off_1;
  int nr_4_St_7_ON;
  int ns_4_St_7_ON_1;
  int ligado_1_St_7_ON;
  int nr_4_St_7_Off;
  int ns_4_St_7_Off_1;
  int ligado_1_St_7_Off;
  int ck_8_1;
  int v_411;
  int r_4_St_7_ON;
  int s_8_St_7_ON_1;
  int r_4_St_7_Off;
  int s_8_St_7_Off_1;
  int nr_5_St_8_ON;
  int ns_5_St_8_ON_1;
  int ligado_St_8_ON;
  int nr_5_St_8_Off;
  int ns_5_St_8_Off_1;
  int ligado_St_8_Off;
  int ck_6_1;
  int v_410;
  int r_5_St_8_ON;
  int s_9_St_8_ON_1;
  int r_5_St_8_Off;
  int s_9_St_8_Off_1;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int ns_6_St_9_Rock_2_0;
  int ns_6_St_9_Rock_3_0_0;
  int ns_6_St_9_Rock_3_0_1;
  int ns_6_St_9_Rock_2_1;
  int ns_6_St_9_Rock_3_1_0;
  int ns_6_St_9_Rock_3_1_1;
  int ns_6_St_9_Regue_2_0;
  int ns_6_St_9_Regue_3_0_0;
  int ns_6_St_9_Regue_3_0_1;
  int ns_6_St_9_Regue_2_1;
  int ns_6_St_9_Regue_3_1_0;
  int ns_6_St_9_Regue_3_1_1;
  int ns_6_St_9_POP_2_0;
  int ns_6_St_9_POP_3_0_0;
  int ns_6_St_9_POP_3_0_1;
  int ns_6_St_9_POP_2_1;
  int ns_6_St_9_POP_3_1_0;
  int ns_6_St_9_POP_3_1_1;
  int ns_6_St_9_Indie_2_0;
  int ns_6_St_9_Indie_3_0_0;
  int ns_6_St_9_Indie_3_0_1;
  int ns_6_St_9_Indie_2_1;
  int ns_6_St_9_Indie_3_1_0;
  int ns_6_St_9_Indie_3_1_1;
  int ns_6_St_9_Funk_2_0;
  int ns_6_St_9_Funk_3_0_0;
  int ns_6_St_9_Funk_3_0_1;
  int ns_6_St_9_Funk_2_1;
  int ns_6_St_9_Funk_3_1_0;
  int ns_6_St_9_Funk_3_1_1;
  int ns_6_St_9_Electronic_2_0;
  int ns_6_St_9_Electronic_3_0_0;
  int ns_6_St_9_Electronic_3_0_1;
  int ns_6_St_9_Electronic_2_1;
  int ns_6_St_9_Electronic_3_1_0;
  int ns_6_St_9_Electronic_3_1_1;
  int ns_6_St_9_Classic_2_0;
  int ns_6_St_9_Classic_3_0_0;
  int ns_6_St_9_Classic_3_0_1;
  int ns_6_St_9_Classic_2_1;
  int ns_6_St_9_Classic_3_1_0;
  int ns_6_St_9_Classic_3_1_1;
  int ns_6_St_9_Off_2_0;
  int ns_6_St_9_Off_3_0_0;
  int ns_6_St_9_Off_3_0_1;
  int ns_6_St_9_Off_2_1;
  int ns_6_St_9_Off_3_1_0;
  int ns_6_St_9_Off_3_1_1;
  int ck_4_2_0;
  int ck_4_3_0_0;
  int ck_4_3_0_1;
  int ck_4_2_1;
  int ck_4_3_1_0;
  int ck_4_3_1_1;
  int nr_6_St_9_Rock;
  int ns_6_St_9_Rock_3;
  int ns_6_St_9_Rock_2;
  int ns_6_St_9_Rock_1;
  int res_St_9_Rock;
  int nr_6_St_9_Regue;
  int ns_6_St_9_Regue_3;
  int ns_6_St_9_Regue_2;
  int ns_6_St_9_Regue_1;
  int res_St_9_Regue;
  int nr_6_St_9_POP;
  int ns_6_St_9_POP_3;
  int ns_6_St_9_POP_2;
  int ns_6_St_9_POP_1;
  int res_St_9_POP;
  int nr_6_St_9_Indie;
  int ns_6_St_9_Indie_3;
  int ns_6_St_9_Indie_2;
  int ns_6_St_9_Indie_1;
  int res_St_9_Indie;
  int nr_6_St_9_Funk;
  int ns_6_St_9_Funk_3;
  int ns_6_St_9_Funk_2;
  int ns_6_St_9_Funk_1;
  int res_St_9_Funk;
  int nr_6_St_9_Electronic;
  int ns_6_St_9_Electronic_3;
  int ns_6_St_9_Electronic_2;
  int ns_6_St_9_Electronic_1;
  int res_St_9_Electronic;
  int nr_6_St_9_Classic;
  int ns_6_St_9_Classic_3;
  int ns_6_St_9_Classic_2;
  int ns_6_St_9_Classic_1;
  int res_St_9_Classic;
  int nr_6_St_9_Off;
  int ns_6_St_9_Off_3;
  int ns_6_St_9_Off_2;
  int ns_6_St_9_Off_1;
  int res_St_9_Off;
  int ck_4_3;
  int ck_4_2;
  int ck_4_1;
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
  int v_400_2_0;
  int v_400_3_0_0;
  int v_400_3_0_1;
  int v_400_2_1;
  int v_400_3_1_0;
  int v_400_3_1_1;
  int v_398_2_0;
  int v_398_3_0_0;
  int v_398_3_0_1;
  int v_398_2_1;
  int v_398_3_1_0;
  int v_398_3_1_1;
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
  int v_400_3;
  int v_400_2;
  int v_400_1;
  int v_399;
  int v_398_3;
  int v_398_2;
  int v_398_1;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
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
  int v_381_2_0;
  int v_381_3_0_0;
  int v_381_3_0_1;
  int v_381_2_1;
  int v_381_3_1_0;
  int v_381_3_1_1;
  int v_379_2_0;
  int v_379_3_0_0;
  int v_379_3_0_1;
  int v_379_2_1;
  int v_379_3_1_0;
  int v_379_3_1_1;
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
  int v_381_3;
  int v_381_2;
  int v_381_1;
  int v_380;
  int v_379_3;
  int v_379_2;
  int v_379_1;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
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
  int v_362_2_0;
  int v_362_3_0_0;
  int v_362_3_0_1;
  int v_362_2_1;
  int v_362_3_1_0;
  int v_362_3_1_1;
  int v_360_2_0;
  int v_360_3_0_0;
  int v_360_3_0_1;
  int v_360_2_1;
  int v_360_3_1_0;
  int v_360_3_1_1;
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
  int v_362_3;
  int v_362_2;
  int v_362_1;
  int v_361;
  int v_360_3;
  int v_360_2;
  int v_360_1;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
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
  int v_343_2_0;
  int v_343_3_0_0;
  int v_343_3_0_1;
  int v_343_2_1;
  int v_343_3_1_0;
  int v_343_3_1_1;
  int v_341_2_0;
  int v_341_3_0_0;
  int v_341_3_0_1;
  int v_341_2_1;
  int v_341_3_1_0;
  int v_341_3_1_1;
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
  int v_343_3;
  int v_343_2;
  int v_343_1;
  int v_342;
  int v_341_3;
  int v_341_2;
  int v_341_1;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
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
  int v_324_2_0;
  int v_324_3_0_0;
  int v_324_3_0_1;
  int v_324_2_1;
  int v_324_3_1_0;
  int v_324_3_1_1;
  int v_322_2_0;
  int v_322_3_0_0;
  int v_322_3_0_1;
  int v_322_2_1;
  int v_322_3_1_0;
  int v_322_3_1_1;
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
  int v_324_3;
  int v_324_2;
  int v_324_1;
  int v_323;
  int v_322_3;
  int v_322_2;
  int v_322_1;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_313_2_0;
  int v_313_3_0_0;
  int v_313_3_0_1;
  int v_313_2_1;
  int v_313_3_1_0;
  int v_313_3_1_1;
  int v_311_2_0;
  int v_311_3_0_0;
  int v_311_3_0_1;
  int v_311_2_1;
  int v_311_3_1_0;
  int v_311_3_1_1;
  int v_309_2_0;
  int v_309_3_0_0;
  int v_309_3_0_1;
  int v_309_2_1;
  int v_309_3_1_0;
  int v_309_3_1_1;
  int v_307_2_0;
  int v_307_3_0_0;
  int v_307_3_0_1;
  int v_307_2_1;
  int v_307_3_1_0;
  int v_307_3_1_1;
  int v_305_2_0;
  int v_305_3_0_0;
  int v_305_3_0_1;
  int v_305_2_1;
  int v_305_3_1_0;
  int v_305_3_1_1;
  int v_303_2_0;
  int v_303_3_0_0;
  int v_303_3_0_1;
  int v_303_2_1;
  int v_303_3_1_0;
  int v_303_3_1_1;
  int v_314;
  int v_313_3;
  int v_313_2;
  int v_313_1;
  int v_312;
  int v_311_3;
  int v_311_2;
  int v_311_1;
  int v_310;
  int v_309_3;
  int v_309_2;
  int v_309_1;
  int v_308;
  int v_307_3;
  int v_307_2;
  int v_307_1;
  int v_306;
  int v_305_3;
  int v_305_2;
  int v_305_1;
  int v_304;
  int v_303_3;
  int v_303_2;
  int v_303_1;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_294_2_0;
  int v_294_3_0_0;
  int v_294_3_0_1;
  int v_294_2_1;
  int v_294_3_1_0;
  int v_294_3_1_1;
  int v_292_2_0;
  int v_292_3_0_0;
  int v_292_3_0_1;
  int v_292_2_1;
  int v_292_3_1_0;
  int v_292_3_1_1;
  int v_290_2_0;
  int v_290_3_0_0;
  int v_290_3_0_1;
  int v_290_2_1;
  int v_290_3_1_0;
  int v_290_3_1_1;
  int v_288_2_0;
  int v_288_3_0_0;
  int v_288_3_0_1;
  int v_288_2_1;
  int v_288_3_1_0;
  int v_288_3_1_1;
  int v_286_2_0;
  int v_286_3_0_0;
  int v_286_3_0_1;
  int v_286_2_1;
  int v_286_3_1_0;
  int v_286_3_1_1;
  int v_284_2_0;
  int v_284_3_0_0;
  int v_284_3_0_1;
  int v_284_2_1;
  int v_284_3_1_0;
  int v_284_3_1_1;
  int v_295;
  int v_294_3;
  int v_294_2;
  int v_294_1;
  int v_293;
  int v_292_3;
  int v_292_2;
  int v_292_1;
  int v_291;
  int v_290_3;
  int v_290_2;
  int v_290_1;
  int v_289;
  int v_288_3;
  int v_288_2;
  int v_288_1;
  int v_287;
  int v_286_3;
  int v_286_2;
  int v_286_1;
  int v_285;
  int v_284_3;
  int v_284_2;
  int v_284_1;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_275_2_0;
  int v_275_3_0_0;
  int v_275_3_0_1;
  int v_275_2_1;
  int v_275_3_1_0;
  int v_275_3_1_1;
  int v_273_2_0;
  int v_273_3_0_0;
  int v_273_3_0_1;
  int v_273_2_1;
  int v_273_3_1_0;
  int v_273_3_1_1;
  int v_271_2_0;
  int v_271_3_0_0;
  int v_271_3_0_1;
  int v_271_2_1;
  int v_271_3_1_0;
  int v_271_3_1_1;
  int v_269_2_0;
  int v_269_3_0_0;
  int v_269_3_0_1;
  int v_269_2_1;
  int v_269_3_1_0;
  int v_269_3_1_1;
  int v_267_2_0;
  int v_267_3_0_0;
  int v_267_3_0_1;
  int v_267_2_1;
  int v_267_3_1_0;
  int v_267_3_1_1;
  int v_265_2_0;
  int v_265_3_0_0;
  int v_265_3_0_1;
  int v_265_2_1;
  int v_265_3_1_0;
  int v_265_3_1_1;
  int v_276;
  int v_275_3;
  int v_275_2;
  int v_275_1;
  int v_274;
  int v_273_3;
  int v_273_2;
  int v_273_1;
  int v_272;
  int v_271_3;
  int v_271_2;
  int v_271_1;
  int v_270;
  int v_269_3;
  int v_269_2;
  int v_269_1;
  int v_268;
  int v_267_3;
  int v_267_2;
  int v_267_1;
  int v_266;
  int v_265_3;
  int v_265_2;
  int v_265_1;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int s_10_St_9_Rock_2_0;
  int s_10_St_9_Rock_3_0_0;
  int s_10_St_9_Rock_3_0_1;
  int s_10_St_9_Rock_2_1;
  int s_10_St_9_Rock_3_1_0;
  int s_10_St_9_Rock_3_1_1;
  int s_10_St_9_Regue_2_0;
  int s_10_St_9_Regue_3_0_0;
  int s_10_St_9_Regue_3_0_1;
  int s_10_St_9_Regue_2_1;
  int s_10_St_9_Regue_3_1_0;
  int s_10_St_9_Regue_3_1_1;
  int s_10_St_9_POP_2_0;
  int s_10_St_9_POP_3_0_0;
  int s_10_St_9_POP_3_0_1;
  int s_10_St_9_POP_2_1;
  int s_10_St_9_POP_3_1_0;
  int s_10_St_9_POP_3_1_1;
  int s_10_St_9_Indie_2_0;
  int s_10_St_9_Indie_3_0_0;
  int s_10_St_9_Indie_3_0_1;
  int s_10_St_9_Indie_2_1;
  int s_10_St_9_Indie_3_1_0;
  int s_10_St_9_Indie_3_1_1;
  int s_10_St_9_Funk_2_0;
  int s_10_St_9_Funk_3_0_0;
  int s_10_St_9_Funk_3_0_1;
  int s_10_St_9_Funk_2_1;
  int s_10_St_9_Funk_3_1_0;
  int s_10_St_9_Funk_3_1_1;
  int s_10_St_9_Electronic_2_0;
  int s_10_St_9_Electronic_3_0_0;
  int s_10_St_9_Electronic_3_0_1;
  int s_10_St_9_Electronic_2_1;
  int s_10_St_9_Electronic_3_1_0;
  int s_10_St_9_Electronic_3_1_1;
  int s_10_St_9_Classic_2_0;
  int s_10_St_9_Classic_3_0_0;
  int s_10_St_9_Classic_3_0_1;
  int s_10_St_9_Classic_2_1;
  int s_10_St_9_Classic_3_1_0;
  int s_10_St_9_Classic_3_1_1;
  int s_10_St_9_Off_2_0;
  int s_10_St_9_Off_3_0_0;
  int s_10_St_9_Off_3_0_1;
  int s_10_St_9_Off_2_1;
  int s_10_St_9_Off_3_1_0;
  int s_10_St_9_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_6_St_9_Rock;
  int s_10_St_9_Rock_3;
  int s_10_St_9_Rock_2;
  int s_10_St_9_Rock_1;
  int r_6_St_9_Regue;
  int s_10_St_9_Regue_3;
  int s_10_St_9_Regue_2;
  int s_10_St_9_Regue_1;
  int r_6_St_9_POP;
  int s_10_St_9_POP_3;
  int s_10_St_9_POP_2;
  int s_10_St_9_POP_1;
  int r_6_St_9_Indie;
  int s_10_St_9_Indie_3;
  int s_10_St_9_Indie_2;
  int s_10_St_9_Indie_1;
  int r_6_St_9_Funk;
  int s_10_St_9_Funk_3;
  int s_10_St_9_Funk_2;
  int s_10_St_9_Funk_1;
  int r_6_St_9_Electronic;
  int s_10_St_9_Electronic_3;
  int s_10_St_9_Electronic_2;
  int s_10_St_9_Electronic_1;
  int r_6_St_9_Classic;
  int s_10_St_9_Classic_3;
  int s_10_St_9_Classic_2;
  int s_10_St_9_Classic_1;
  int r_6_St_9_Off;
  int s_10_St_9_Off_3;
  int s_10_St_9_Off_2;
  int s_10_St_9_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_10_2_0;
  int s_10_3_0_0;
  int s_10_3_0_1;
  int s_10_2_1;
  int s_10_3_1_0;
  int s_10_3_1_1;
  int ns_6_2_0;
  int ns_6_3_0_0;
  int ns_6_3_0_1;
  int ns_6_2_1;
  int ns_6_3_1_0;
  int ns_6_3_1_1;
  int s_6_2_0;
  int s_6_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_5_2_0;
  int s_5_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_2_3_0;
  int ns_2_3_1;
  int s_10_3;
  int s_10_2;
  int s_10_1;
  int ns_6_3;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_9_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_8_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_7_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_6_2;
  int s_6_1;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_5_2;
  int s_5_1;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_4_2;
  int s_4_1;
  int ns_2_3;
  int ns_1_3;
  int r;
  int nr;
  int c1_3;
  int c2_3;
  int s_2;
  int c1_2;
  int c2_2;
  int s_1;
  int c1_1;
  int c2_1;
  int s;
  int c_2;
  int ligado_2;
  int c_1;
  int ligado_1;
  int c;
  int ligado;
  int tipo_1;
  int res;
  int ruleRock;
  int ruleRegue;
  int rulePOP;
  int ruleIndie;
  int ruleFunk;
  int ruleElectron;
  int ruleClassic;
  int ruleOff;
  int v;
  int v_166;
  int v_167;
  int v_168;
  int v_169;
  int v_170;
  int v_171;
  int v_172;
  int v_173;
  int v_174;
  int v_175;
  int v_176;
  int v_177;
  int v_178;
  int v_179;
  int v_180;
  int v_181;
  int v_182;
  int v_183;
  int v_184;
  int v_185;
  int v_186;
  int v_187;
  int v_188;
  int v_189;
  int v_190;
  int v_191;
  int v_192;
  int v_193;
  int v_194;
  int v_195;
  int v_196;
  int v_197;
  int v_198;
  int v_199;
  int v_200;
  int v_201;
  int v_202;
  int v_203;
  int v_204;
  int v_205;
  int v_206;
  int v_207;
  int v_208;
  int v_209;
  int v_210;
  int v_211;
  int v_212;
  int v_213;
  int v_214;
  int v_215;
  int v_216;
  int v_217;
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
  int ceg2;
  int ceg1;
  int cem2;
  int cem1;
  int cea2;
  int cea1;
  int c3;
  int c2;
  int c1;
  ck_15_1 = self->v_539;
  ck_15_2 = self->v_540;
  ck_13_1 = self->v_555;
  ck_13_2 = self->v_556;
  ck_11_1 = self->v_571;
  ck_11_2 = self->v_572;
  tipo_1 = tipo;
  ck_1 = self->v_609;
  ck_2 = self->v_610;
  ck_3 = self->v_611;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
  } else {
    ck_15_2_0 = ck_15_2;
  };
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
  } else {
    ck_13_2_0 = ck_13_2;
  };
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
  } else {
    ck_11_2_0 = ck_11_2;
  };
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_378 = (tipo_1==7);
        if (v_378) {
          v_380 = true;
          v_379_1 = false;
          v_379_2 = false;
          v_379_3 = false;
        } else {
          v_380 = self->pnr_6;
          v_379_1 = true;
          v_379_2 = true;
          v_379_3 = true;
        };
        v_377 = (tipo_1==6);
        if (v_377) {
          v_382 = true;
          v_381_1 = false;
          v_381_2 = false;
          v_381_3 = true;
        } else {
          v_382 = v_380;
          v_381_1 = v_379_1;
          v_381_2 = v_379_2;
          v_381_3 = v_379_3;
        };
        v_376 = (tipo_1==5);
        if (v_376) {
          v_384 = true;
          v_383_1 = false;
          v_383_2 = true;
          v_383_3 = false;
        } else {
          v_384 = v_382;
          v_383_1 = v_381_1;
          v_383_2 = v_381_2;
          v_383_3 = v_381_3;
        };
        v_375 = (tipo_1==4);
        if (v_375) {
          v_386 = true;
          v_385_1 = true;
          v_385_2 = false;
          v_385_3 = false;
        } else {
          v_386 = v_384;
          v_385_1 = v_383_1;
          v_385_2 = v_383_2;
          v_385_3 = v_383_3;
        };
        v_374 = (tipo_1==3);
        if (v_374) {
          v_388 = true;
          v_387_1 = true;
          v_387_2 = false;
          v_387_3 = true;
        } else {
          v_388 = v_386;
          v_387_1 = v_385_1;
          v_387_2 = v_385_2;
          v_387_3 = v_385_3;
        };
        v_373 = (tipo_1==2);
        if (v_373) {
          v_390 = true;
          v_389_1 = true;
          v_389_2 = true;
          v_389_3 = false;
        } else {
          v_390 = v_388;
          v_389_1 = v_387_1;
          v_389_2 = v_387_2;
          v_389_3 = v_387_3;
        };
        v_372 = (tipo_1==0);
        if (v_372) {
          r_6_St_9_Classic = true;
          s_10_St_9_Classic_1 = false;
          s_10_St_9_Classic_2 = true;
          s_10_St_9_Classic_3 = true;
        } else {
          r_6_St_9_Classic = v_390;
          s_10_St_9_Classic_1 = v_389_1;
          s_10_St_9_Classic_2 = v_389_2;
          s_10_St_9_Classic_3 = v_389_3;
        };
        v_630 = r_6_St_9_Classic;
        v_612 = s_10_St_9_Classic_1;
        v_613 = s_10_St_9_Classic_2;
        v_614 = s_10_St_9_Classic_3;
        if (v_379_1) {
          v_379_2_1 = v_379_2;
          if (v_379_2_1) {
            v_379_3_1_1 = v_379_3;
          } else {
            v_379_3_1_0 = v_379_3;
          };
        } else {
          v_379_2_0 = v_379_2;
          if (v_379_2_0) {
            v_379_3_0_1 = v_379_3;
          } else {
            v_379_3_0_0 = v_379_3;
          };
        };
        if (v_381_1) {
          v_381_2_1 = v_381_2;
          if (v_381_2_1) {
            v_381_3_1_1 = v_381_3;
          } else {
            v_381_3_1_0 = v_381_3;
          };
        } else {
          v_381_2_0 = v_381_2;
          if (v_381_2_0) {
            v_381_3_0_1 = v_381_3;
          } else {
            v_381_3_0_0 = v_381_3;
          };
        };
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
        if (s_10_St_9_Classic_1) {
          s_10_St_9_Classic_2_1 = s_10_St_9_Classic_2;
          if (s_10_St_9_Classic_2_1) {
            s_10_St_9_Classic_3_1_1 = s_10_St_9_Classic_3;
          } else {
            s_10_St_9_Classic_3_1_0 = s_10_St_9_Classic_3;
          };
        } else {
          s_10_St_9_Classic_2_0 = s_10_St_9_Classic_2;
          if (s_10_St_9_Classic_2_0) {
            s_10_St_9_Classic_3_0_1 = s_10_St_9_Classic_3;
          } else {
            s_10_St_9_Classic_3_0_0 = s_10_St_9_Classic_3;
          };
        };
      } else {
        v_359 = (tipo_1==7);
        if (v_359) {
          v_361 = true;
          v_360_1 = false;
          v_360_2 = false;
          v_360_3 = false;
        } else {
          v_361 = self->pnr_6;
          v_360_1 = true;
          v_360_2 = true;
          v_360_3 = false;
        };
        v_358 = (tipo_1==6);
        if (v_358) {
          v_363 = true;
          v_362_1 = false;
          v_362_2 = false;
          v_362_3 = true;
        } else {
          v_363 = v_361;
          v_362_1 = v_360_1;
          v_362_2 = v_360_2;
          v_362_3 = v_360_3;
        };
        v_357 = (tipo_1==5);
        if (v_357) {
          v_365 = true;
          v_364_1 = false;
          v_364_2 = true;
          v_364_3 = false;
        } else {
          v_365 = v_363;
          v_364_1 = v_362_1;
          v_364_2 = v_362_2;
          v_364_3 = v_362_3;
        };
        v_356 = (tipo_1==4);
        if (v_356) {
          v_367 = true;
          v_366_1 = true;
          v_366_2 = false;
          v_366_3 = false;
        } else {
          v_367 = v_365;
          v_366_1 = v_364_1;
          v_366_2 = v_364_2;
          v_366_3 = v_364_3;
        };
        v_355 = (tipo_1==3);
        if (v_355) {
          v_369 = true;
          v_368_1 = true;
          v_368_2 = false;
          v_368_3 = true;
        } else {
          v_369 = v_367;
          v_368_1 = v_366_1;
          v_368_2 = v_366_2;
          v_368_3 = v_366_3;
        };
        v_354 = (tipo_1==1);
        if (v_354) {
          v_371 = true;
          v_370_1 = true;
          v_370_2 = true;
          v_370_3 = true;
        } else {
          v_371 = v_369;
          v_370_1 = v_368_1;
          v_370_2 = v_368_2;
          v_370_3 = v_368_3;
        };
        v_353 = (tipo_1==0);
        if (v_353) {
          r_6_St_9_Electronic = true;
        } else {
          r_6_St_9_Electronic = v_371;
        };
        v_630 = r_6_St_9_Electronic;
        if (v_353) {
          s_10_St_9_Electronic_1 = false;
        } else {
          s_10_St_9_Electronic_1 = v_370_1;
        };
        v_612 = s_10_St_9_Electronic_1;
        if (v_353) {
          s_10_St_9_Electronic_2 = true;
        } else {
          s_10_St_9_Electronic_2 = v_370_2;
        };
        v_613 = s_10_St_9_Electronic_2;
        if (v_353) {
          s_10_St_9_Electronic_3 = true;
        } else {
          s_10_St_9_Electronic_3 = v_370_3;
        };
        v_614 = s_10_St_9_Electronic_3;
        if (v_360_1) {
          v_360_2_1 = v_360_2;
          if (v_360_2_1) {
            v_360_3_1_1 = v_360_3;
          } else {
            v_360_3_1_0 = v_360_3;
          };
        } else {
          v_360_2_0 = v_360_2;
          if (v_360_2_0) {
            v_360_3_0_1 = v_360_3;
          } else {
            v_360_3_0_0 = v_360_3;
          };
        };
        if (v_362_1) {
          v_362_2_1 = v_362_2;
          if (v_362_2_1) {
            v_362_3_1_1 = v_362_3;
          } else {
            v_362_3_1_0 = v_362_3;
          };
        } else {
          v_362_2_0 = v_362_2;
          if (v_362_2_0) {
            v_362_3_0_1 = v_362_3;
          } else {
            v_362_3_0_0 = v_362_3;
          };
        };
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
        if (s_10_St_9_Electronic_1) {
          s_10_St_9_Electronic_2_1 = s_10_St_9_Electronic_2;
          if (s_10_St_9_Electronic_2_1) {
            s_10_St_9_Electronic_3_1_1 = s_10_St_9_Electronic_3;
          } else {
            s_10_St_9_Electronic_3_1_0 = s_10_St_9_Electronic_3;
          };
        } else {
          s_10_St_9_Electronic_2_0 = s_10_St_9_Electronic_2;
          if (s_10_St_9_Electronic_2_0) {
            s_10_St_9_Electronic_3_0_1 = s_10_St_9_Electronic_3;
          } else {
            s_10_St_9_Electronic_3_0_0 = s_10_St_9_Electronic_3;
          };
        };
      };
      v_624 = v_612;
      v_625 = v_613;
      v_626 = v_614;
      v_632 = v_630;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_340 = (tipo_1==7);
        if (v_340) {
          v_342 = true;
          v_341_1 = false;
          v_341_2 = false;
          v_341_3 = false;
        } else {
          v_342 = self->pnr_6;
          v_341_1 = true;
          v_341_2 = false;
          v_341_3 = true;
        };
        v_339 = (tipo_1==6);
        if (v_339) {
          v_344 = true;
          v_343_1 = false;
          v_343_2 = false;
          v_343_3 = true;
        } else {
          v_344 = v_342;
          v_343_1 = v_341_1;
          v_343_2 = v_341_2;
          v_343_3 = v_341_3;
        };
        v_338 = (tipo_1==5);
        if (v_338) {
          v_346 = true;
          v_345_1 = false;
          v_345_2 = true;
          v_345_3 = false;
        } else {
          v_346 = v_344;
          v_345_1 = v_343_1;
          v_345_2 = v_343_2;
          v_345_3 = v_343_3;
        };
        v_337 = (tipo_1==4);
        if (v_337) {
          v_348 = true;
          v_347_1 = true;
          v_347_2 = false;
          v_347_3 = false;
        } else {
          v_348 = v_346;
          v_347_1 = v_345_1;
          v_347_2 = v_345_2;
          v_347_3 = v_345_3;
        };
        v_336 = (tipo_1==2);
        if (v_336) {
          v_350 = true;
          v_349_1 = true;
          v_349_2 = true;
          v_349_3 = false;
        } else {
          v_350 = v_348;
          v_349_1 = v_347_1;
          v_349_2 = v_347_2;
          v_349_3 = v_347_3;
        };
        v_335 = (tipo_1==1);
        if (v_335) {
          v_352 = true;
          v_351_1 = true;
          v_351_2 = true;
          v_351_3 = true;
        } else {
          v_352 = v_350;
          v_351_1 = v_349_1;
          v_351_2 = v_349_2;
          v_351_3 = v_349_3;
        };
        v_334 = (tipo_1==0);
        if (v_334) {
          r_6_St_9_Funk = true;
          s_10_St_9_Funk_1 = false;
          s_10_St_9_Funk_2 = true;
          s_10_St_9_Funk_3 = true;
        } else {
          r_6_St_9_Funk = v_352;
          s_10_St_9_Funk_1 = v_351_1;
          s_10_St_9_Funk_2 = v_351_2;
          s_10_St_9_Funk_3 = v_351_3;
        };
        v_631 = r_6_St_9_Funk;
        v_615 = s_10_St_9_Funk_1;
        v_616 = s_10_St_9_Funk_2;
        v_617 = s_10_St_9_Funk_3;
      } else {
        v_321 = (tipo_1==7);
        if (v_321) {
          v_323 = true;
          v_322_1 = false;
          v_322_2 = false;
          v_322_3 = false;
        } else {
          v_323 = self->pnr_6;
          v_322_1 = true;
          v_322_2 = false;
          v_322_3 = false;
        };
        v_320 = (tipo_1==6);
        if (v_320) {
          v_325 = true;
          v_324_1 = false;
          v_324_2 = false;
          v_324_3 = true;
        } else {
          v_325 = v_323;
          v_324_1 = v_322_1;
          v_324_2 = v_322_2;
          v_324_3 = v_322_3;
        };
        v_319 = (tipo_1==5);
        if (v_319) {
          v_327 = true;
          v_326_1 = false;
          v_326_2 = true;
          v_326_3 = false;
        } else {
          v_327 = v_325;
          v_326_1 = v_324_1;
          v_326_2 = v_324_2;
          v_326_3 = v_324_3;
        };
        v_318 = (tipo_1==3);
        if (v_318) {
          v_329 = true;
          v_328_1 = true;
          v_328_2 = false;
          v_328_3 = true;
        } else {
          v_329 = v_327;
          v_328_1 = v_326_1;
          v_328_2 = v_326_2;
          v_328_3 = v_326_3;
        };
        v_317 = (tipo_1==2);
        if (v_317) {
          v_331 = true;
          v_330_1 = true;
          v_330_2 = true;
          v_330_3 = false;
        } else {
          v_331 = v_329;
          v_330_1 = v_328_1;
          v_330_2 = v_328_2;
          v_330_3 = v_328_3;
        };
        v_316 = (tipo_1==1);
        if (v_316) {
          v_333 = true;
          v_332_1 = true;
          v_332_2 = true;
          v_332_3 = true;
        } else {
          v_333 = v_331;
          v_332_1 = v_330_1;
          v_332_2 = v_330_2;
          v_332_3 = v_330_3;
        };
        v_315 = (tipo_1==0);
        if (v_315) {
          r_6_St_9_Indie = true;
        } else {
          r_6_St_9_Indie = v_333;
        };
        v_631 = r_6_St_9_Indie;
        if (v_315) {
          s_10_St_9_Indie_1 = false;
        } else {
          s_10_St_9_Indie_1 = v_332_1;
        };
        v_615 = s_10_St_9_Indie_1;
        if (v_315) {
          s_10_St_9_Indie_2 = true;
        } else {
          s_10_St_9_Indie_2 = v_332_2;
        };
        v_616 = s_10_St_9_Indie_2;
        if (v_315) {
          s_10_St_9_Indie_3 = true;
        } else {
          s_10_St_9_Indie_3 = v_332_3;
        };
        v_617 = s_10_St_9_Indie_3;
      };
      v_624 = v_615;
      v_625 = v_616;
      v_626 = v_617;
      v_632 = v_631;
      if (ck_3_1_0) {
        if (v_341_1) {
          v_341_2_1 = v_341_2;
          if (v_341_2_1) {
            v_341_3_1_1 = v_341_3;
          } else {
            v_341_3_1_0 = v_341_3;
          };
        } else {
          v_341_2_0 = v_341_2;
          if (v_341_2_0) {
            v_341_3_0_1 = v_341_3;
          } else {
            v_341_3_0_0 = v_341_3;
          };
        };
        if (v_343_1) {
          v_343_2_1 = v_343_2;
          if (v_343_2_1) {
            v_343_3_1_1 = v_343_3;
          } else {
            v_343_3_1_0 = v_343_3;
          };
        } else {
          v_343_2_0 = v_343_2;
          if (v_343_2_0) {
            v_343_3_0_1 = v_343_3;
          } else {
            v_343_3_0_0 = v_343_3;
          };
        };
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
        if (s_10_St_9_Funk_1) {
          s_10_St_9_Funk_2_1 = s_10_St_9_Funk_2;
          if (s_10_St_9_Funk_2_1) {
            s_10_St_9_Funk_3_1_1 = s_10_St_9_Funk_3;
          } else {
            s_10_St_9_Funk_3_1_0 = s_10_St_9_Funk_3;
          };
        } else {
          s_10_St_9_Funk_2_0 = s_10_St_9_Funk_2;
          if (s_10_St_9_Funk_2_0) {
            s_10_St_9_Funk_3_0_1 = s_10_St_9_Funk_3;
          } else {
            s_10_St_9_Funk_3_0_0 = s_10_St_9_Funk_3;
          };
        };
      } else {
        if (v_322_1) {
          v_322_2_1 = v_322_2;
          if (v_322_2_1) {
            v_322_3_1_1 = v_322_3;
          } else {
            v_322_3_1_0 = v_322_3;
          };
        } else {
          v_322_2_0 = v_322_2;
          if (v_322_2_0) {
            v_322_3_0_1 = v_322_3;
          } else {
            v_322_3_0_0 = v_322_3;
          };
        };
        if (v_324_1) {
          v_324_2_1 = v_324_2;
          if (v_324_2_1) {
            v_324_3_1_1 = v_324_3;
          } else {
            v_324_3_1_0 = v_324_3;
          };
        } else {
          v_324_2_0 = v_324_2;
          if (v_324_2_0) {
            v_324_3_0_1 = v_324_3;
          } else {
            v_324_3_0_0 = v_324_3;
          };
        };
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
        if (s_10_St_9_Indie_1) {
          s_10_St_9_Indie_2_1 = s_10_St_9_Indie_2;
          if (s_10_St_9_Indie_2_1) {
            s_10_St_9_Indie_3_1_1 = s_10_St_9_Indie_3;
          } else {
            s_10_St_9_Indie_3_1_0 = s_10_St_9_Indie_3;
          };
        } else {
          s_10_St_9_Indie_2_0 = s_10_St_9_Indie_2;
          if (s_10_St_9_Indie_2_0) {
            s_10_St_9_Indie_3_0_1 = s_10_St_9_Indie_3;
          } else {
            s_10_St_9_Indie_3_0_0 = s_10_St_9_Indie_3;
          };
        };
      };
    };
    s_10_1 = v_624;
    s_10_2 = v_625;
    s_10_3 = v_626;
    r_6 = v_632;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        v_397 = (tipo_1==7);
        if (v_397) {
          v_399 = true;
          v_398_1 = false;
          v_398_2 = false;
          v_398_3 = false;
        } else {
          v_399 = self->pnr_6;
          v_398_1 = false;
          v_398_2 = true;
          v_398_3 = true;
        };
        v_396 = (tipo_1==6);
        if (v_396) {
          v_401 = true;
          v_400_1 = false;
          v_400_2 = false;
          v_400_3 = true;
        } else {
          v_401 = v_399;
          v_400_1 = v_398_1;
          v_400_2 = v_398_2;
          v_400_3 = v_398_3;
        };
        v_395 = (tipo_1==5);
        if (v_395) {
          v_403 = true;
          v_402_1 = false;
          v_402_2 = true;
          v_402_3 = false;
        } else {
          v_403 = v_401;
          v_402_1 = v_400_1;
          v_402_2 = v_400_2;
          v_402_3 = v_400_3;
        };
        v_394 = (tipo_1==4);
        if (v_394) {
          v_405 = true;
          v_404_1 = true;
          v_404_2 = false;
          v_404_3 = false;
        } else {
          v_405 = v_403;
          v_404_1 = v_402_1;
          v_404_2 = v_402_2;
          v_404_3 = v_402_3;
        };
        v_393 = (tipo_1==3);
        if (v_393) {
          v_407 = true;
          v_406_1 = true;
          v_406_2 = false;
          v_406_3 = true;
        } else {
          v_407 = v_405;
          v_406_1 = v_404_1;
          v_406_2 = v_404_2;
          v_406_3 = v_404_3;
        };
        v_392 = (tipo_1==2);
        if (v_392) {
          v_409 = true;
          v_408_1 = true;
          v_408_2 = true;
          v_408_3 = false;
        } else {
          v_409 = v_407;
          v_408_1 = v_406_1;
          v_408_2 = v_406_2;
          v_408_3 = v_406_3;
        };
        v_391 = (tipo_1==1);
        if (v_391) {
          r_6_St_9_Off = true;
          s_10_St_9_Off_1 = true;
          s_10_St_9_Off_2 = true;
          s_10_St_9_Off_3 = true;
        } else {
          r_6_St_9_Off = v_409;
          s_10_St_9_Off_1 = v_408_1;
          s_10_St_9_Off_2 = v_408_2;
          s_10_St_9_Off_3 = v_408_3;
        };
        v_633 = r_6_St_9_Off;
        v_618 = s_10_St_9_Off_1;
        v_619 = s_10_St_9_Off_2;
        v_620 = s_10_St_9_Off_3;
        if (v_398_1) {
          v_398_2_1 = v_398_2;
          if (v_398_2_1) {
            v_398_3_1_1 = v_398_3;
          } else {
            v_398_3_1_0 = v_398_3;
          };
        } else {
          v_398_2_0 = v_398_2;
          if (v_398_2_0) {
            v_398_3_0_1 = v_398_3;
          } else {
            v_398_3_0_0 = v_398_3;
          };
        };
        if (v_400_1) {
          v_400_2_1 = v_400_2;
          if (v_400_2_1) {
            v_400_3_1_1 = v_400_3;
          } else {
            v_400_3_1_0 = v_400_3;
          };
        } else {
          v_400_2_0 = v_400_2;
          if (v_400_2_0) {
            v_400_3_0_1 = v_400_3;
          } else {
            v_400_3_0_0 = v_400_3;
          };
        };
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
        if (s_10_St_9_Off_1) {
          s_10_St_9_Off_2_1 = s_10_St_9_Off_2;
          if (s_10_St_9_Off_2_1) {
            s_10_St_9_Off_3_1_1 = s_10_St_9_Off_3;
          } else {
            s_10_St_9_Off_3_1_0 = s_10_St_9_Off_3;
          };
        } else {
          s_10_St_9_Off_2_0 = s_10_St_9_Off_2;
          if (s_10_St_9_Off_2_0) {
            s_10_St_9_Off_3_0_1 = s_10_St_9_Off_3;
          } else {
            s_10_St_9_Off_3_0_0 = s_10_St_9_Off_3;
          };
        };
      } else {
        v_302 = (tipo_1==7);
        if (v_302) {
          v_304 = true;
          v_303_1 = false;
          v_303_2 = false;
          v_303_3 = false;
        } else {
          v_304 = self->pnr_6;
          v_303_1 = false;
          v_303_2 = true;
          v_303_3 = false;
        };
        v_301 = (tipo_1==6);
        if (v_301) {
          v_306 = true;
          v_305_1 = false;
          v_305_2 = false;
          v_305_3 = true;
        } else {
          v_306 = v_304;
          v_305_1 = v_303_1;
          v_305_2 = v_303_2;
          v_305_3 = v_303_3;
        };
        v_300 = (tipo_1==4);
        if (v_300) {
          v_308 = true;
          v_307_1 = true;
          v_307_2 = false;
          v_307_3 = false;
        } else {
          v_308 = v_306;
          v_307_1 = v_305_1;
          v_307_2 = v_305_2;
          v_307_3 = v_305_3;
        };
        v_299 = (tipo_1==3);
        if (v_299) {
          v_310 = true;
          v_309_1 = true;
          v_309_2 = false;
          v_309_3 = true;
        } else {
          v_310 = v_308;
          v_309_1 = v_307_1;
          v_309_2 = v_307_2;
          v_309_3 = v_307_3;
        };
        v_298 = (tipo_1==2);
        if (v_298) {
          v_312 = true;
          v_311_1 = true;
          v_311_2 = true;
          v_311_3 = false;
        } else {
          v_312 = v_310;
          v_311_1 = v_309_1;
          v_311_2 = v_309_2;
          v_311_3 = v_309_3;
        };
        v_297 = (tipo_1==1);
        if (v_297) {
          v_314 = true;
          v_313_1 = true;
          v_313_2 = true;
          v_313_3 = true;
        } else {
          v_314 = v_312;
          v_313_1 = v_311_1;
          v_313_2 = v_311_2;
          v_313_3 = v_311_3;
        };
        v_296 = (tipo_1==0);
        if (v_296) {
          r_6_St_9_POP = true;
        } else {
          r_6_St_9_POP = v_314;
        };
        v_633 = r_6_St_9_POP;
        if (v_296) {
          s_10_St_9_POP_1 = false;
        } else {
          s_10_St_9_POP_1 = v_313_1;
        };
        v_618 = s_10_St_9_POP_1;
        if (v_296) {
          s_10_St_9_POP_2 = true;
        } else {
          s_10_St_9_POP_2 = v_313_2;
        };
        v_619 = s_10_St_9_POP_2;
        if (v_296) {
          s_10_St_9_POP_3 = true;
        } else {
          s_10_St_9_POP_3 = v_313_3;
        };
        v_620 = s_10_St_9_POP_3;
        if (v_303_1) {
          v_303_2_1 = v_303_2;
          if (v_303_2_1) {
            v_303_3_1_1 = v_303_3;
          } else {
            v_303_3_1_0 = v_303_3;
          };
        } else {
          v_303_2_0 = v_303_2;
          if (v_303_2_0) {
            v_303_3_0_1 = v_303_3;
          } else {
            v_303_3_0_0 = v_303_3;
          };
        };
        if (v_305_1) {
          v_305_2_1 = v_305_2;
          if (v_305_2_1) {
            v_305_3_1_1 = v_305_3;
          } else {
            v_305_3_1_0 = v_305_3;
          };
        } else {
          v_305_2_0 = v_305_2;
          if (v_305_2_0) {
            v_305_3_0_1 = v_305_3;
          } else {
            v_305_3_0_0 = v_305_3;
          };
        };
        if (v_307_1) {
          v_307_2_1 = v_307_2;
          if (v_307_2_1) {
            v_307_3_1_1 = v_307_3;
          } else {
            v_307_3_1_0 = v_307_3;
          };
        } else {
          v_307_2_0 = v_307_2;
          if (v_307_2_0) {
            v_307_3_0_1 = v_307_3;
          } else {
            v_307_3_0_0 = v_307_3;
          };
        };
        if (v_309_1) {
          v_309_2_1 = v_309_2;
          if (v_309_2_1) {
            v_309_3_1_1 = v_309_3;
          } else {
            v_309_3_1_0 = v_309_3;
          };
        } else {
          v_309_2_0 = v_309_2;
          if (v_309_2_0) {
            v_309_3_0_1 = v_309_3;
          } else {
            v_309_3_0_0 = v_309_3;
          };
        };
        if (v_311_1) {
          v_311_2_1 = v_311_2;
          if (v_311_2_1) {
            v_311_3_1_1 = v_311_3;
          } else {
            v_311_3_1_0 = v_311_3;
          };
        } else {
          v_311_2_0 = v_311_2;
          if (v_311_2_0) {
            v_311_3_0_1 = v_311_3;
          } else {
            v_311_3_0_0 = v_311_3;
          };
        };
        if (v_313_1) {
          v_313_2_1 = v_313_2;
          if (v_313_2_1) {
            v_313_3_1_1 = v_313_3;
          } else {
            v_313_3_1_0 = v_313_3;
          };
        } else {
          v_313_2_0 = v_313_2;
          if (v_313_2_0) {
            v_313_3_0_1 = v_313_3;
          } else {
            v_313_3_0_0 = v_313_3;
          };
        };
        if (s_10_St_9_POP_1) {
          s_10_St_9_POP_2_1 = s_10_St_9_POP_2;
          if (s_10_St_9_POP_2_1) {
            s_10_St_9_POP_3_1_1 = s_10_St_9_POP_3;
          } else {
            s_10_St_9_POP_3_1_0 = s_10_St_9_POP_3;
          };
        } else {
          s_10_St_9_POP_2_0 = s_10_St_9_POP_2;
          if (s_10_St_9_POP_2_0) {
            s_10_St_9_POP_3_0_1 = s_10_St_9_POP_3;
          } else {
            s_10_St_9_POP_3_0_0 = s_10_St_9_POP_3;
          };
        };
      };
      v_627 = v_618;
      v_628 = v_619;
      v_629 = v_620;
      v_635 = v_633;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_283 = (tipo_1==7);
        if (v_283) {
          v_285 = true;
          v_284_1 = false;
          v_284_2 = false;
          v_284_3 = false;
        } else {
          v_285 = self->pnr_6;
          v_284_1 = false;
          v_284_2 = false;
          v_284_3 = true;
        };
        v_282 = (tipo_1==5);
        if (v_282) {
          v_287 = true;
          v_286_1 = false;
          v_286_2 = true;
          v_286_3 = false;
        } else {
          v_287 = v_285;
          v_286_1 = v_284_1;
          v_286_2 = v_284_2;
          v_286_3 = v_284_3;
        };
        v_281 = (tipo_1==4);
        if (v_281) {
          v_289 = true;
          v_288_1 = true;
          v_288_2 = false;
          v_288_3 = false;
        } else {
          v_289 = v_287;
          v_288_1 = v_286_1;
          v_288_2 = v_286_2;
          v_288_3 = v_286_3;
        };
        v_280 = (tipo_1==3);
        if (v_280) {
          v_291 = true;
          v_290_1 = true;
          v_290_2 = false;
          v_290_3 = true;
        } else {
          v_291 = v_289;
          v_290_1 = v_288_1;
          v_290_2 = v_288_2;
          v_290_3 = v_288_3;
        };
        v_279 = (tipo_1==2);
        if (v_279) {
          v_293 = true;
          v_292_1 = true;
          v_292_2 = true;
          v_292_3 = false;
        } else {
          v_293 = v_291;
          v_292_1 = v_290_1;
          v_292_2 = v_290_2;
          v_292_3 = v_290_3;
        };
        v_278 = (tipo_1==1);
        if (v_278) {
          v_295 = true;
          v_294_1 = true;
          v_294_2 = true;
          v_294_3 = true;
        } else {
          v_295 = v_293;
          v_294_1 = v_292_1;
          v_294_2 = v_292_2;
          v_294_3 = v_292_3;
        };
        v_277 = (tipo_1==0);
        if (v_277) {
          r_6_St_9_Regue = true;
          s_10_St_9_Regue_1 = false;
          s_10_St_9_Regue_2 = true;
          s_10_St_9_Regue_3 = true;
        } else {
          r_6_St_9_Regue = v_295;
          s_10_St_9_Regue_1 = v_294_1;
          s_10_St_9_Regue_2 = v_294_2;
          s_10_St_9_Regue_3 = v_294_3;
        };
        v_634 = r_6_St_9_Regue;
        v_621 = s_10_St_9_Regue_1;
        v_622 = s_10_St_9_Regue_2;
        v_623 = s_10_St_9_Regue_3;
      } else {
        v_264 = (tipo_1==6);
        if (v_264) {
          v_266 = true;
          v_265_1 = false;
          v_265_2 = false;
          v_265_3 = true;
        } else {
          v_266 = self->pnr_6;
          v_265_1 = false;
          v_265_2 = false;
          v_265_3 = false;
        };
        v_263 = (tipo_1==5);
        if (v_263) {
          v_268 = true;
          v_267_1 = false;
          v_267_2 = true;
          v_267_3 = false;
        } else {
          v_268 = v_266;
          v_267_1 = v_265_1;
          v_267_2 = v_265_2;
          v_267_3 = v_265_3;
        };
        v_262 = (tipo_1==4);
        if (v_262) {
          v_270 = true;
          v_269_1 = true;
          v_269_2 = false;
          v_269_3 = false;
        } else {
          v_270 = v_268;
          v_269_1 = v_267_1;
          v_269_2 = v_267_2;
          v_269_3 = v_267_3;
        };
        v_261 = (tipo_1==3);
        if (v_261) {
          v_272 = true;
          v_271_1 = true;
          v_271_2 = false;
          v_271_3 = true;
        } else {
          v_272 = v_270;
          v_271_1 = v_269_1;
          v_271_2 = v_269_2;
          v_271_3 = v_269_3;
        };
        v_260 = (tipo_1==2);
        if (v_260) {
          v_274 = true;
          v_273_1 = true;
          v_273_2 = true;
          v_273_3 = false;
        } else {
          v_274 = v_272;
          v_273_1 = v_271_1;
          v_273_2 = v_271_2;
          v_273_3 = v_271_3;
        };
        v_259 = (tipo_1==1);
        if (v_259) {
          v_276 = true;
          v_275_1 = true;
          v_275_2 = true;
          v_275_3 = true;
        } else {
          v_276 = v_274;
          v_275_1 = v_273_1;
          v_275_2 = v_273_2;
          v_275_3 = v_273_3;
        };
        v_258 = (tipo_1==0);
        if (v_258) {
          r_6_St_9_Rock = true;
        } else {
          r_6_St_9_Rock = v_276;
        };
        v_634 = r_6_St_9_Rock;
        if (v_258) {
          s_10_St_9_Rock_1 = false;
        } else {
          s_10_St_9_Rock_1 = v_275_1;
        };
        v_621 = s_10_St_9_Rock_1;
        if (v_258) {
          s_10_St_9_Rock_2 = true;
        } else {
          s_10_St_9_Rock_2 = v_275_2;
        };
        v_622 = s_10_St_9_Rock_2;
        if (v_258) {
          s_10_St_9_Rock_3 = true;
        } else {
          s_10_St_9_Rock_3 = v_275_3;
        };
        v_623 = s_10_St_9_Rock_3;
      };
      v_627 = v_621;
      v_628 = v_622;
      v_629 = v_623;
      v_635 = v_634;
    };
    s_10_1 = v_627;
    s_10_2 = v_628;
    s_10_3 = v_629;
    r_6 = v_635;
  };
  ck_4_1 = s_10_1;
  ck_4_2 = s_10_2;
  ck_4_3 = s_10_3;
  Main_controller__main_controller_step(v_258, v_259, v_260, v_261, v_262,
                                        v_263, v_264, v_277, v_278, v_279,
                                        v_280, v_281, v_282, v_283, v_296,
                                        v_297, v_298, v_299, v_300, v_301,
                                        v_302, v_391, v_392, v_393, v_394,
                                        v_395, v_396, v_397, v_315, v_316,
                                        v_317, v_318, v_319, v_320, v_321,
                                        v_334, v_335, v_336, v_337, v_338,
                                        v_339, v_340, v_353, v_354, v_355,
                                        v_356, v_357, v_358, v_359, v_372,
                                        v_373, v_374, v_375, v_376, v_377,
                                        v_378, self->v_611, self->v_610,
                                        self->v_609, self->pnr_6,
                                        self->ck_5_1, self->pnr_5,
                                        self->ck_7_1, self->pnr_4,
                                        self->ck_9_1, self->pnr_3,
                                        self->v_572, self->v_571,
                                        self->pnr_2, self->v_556,
                                        self->v_555, self->pnr_1,
                                        self->v_540, self->v_539, self->pnr,
                                        true, true, true, true, true, true,
                                        true, true, true,
                                        &Main_controller__main_controller_out_st);
  ceg2 = Main_controller__main_controller_out_st.main_ceg2;
  ceg1 = Main_controller__main_controller_out_st.main_ceg1;
  cem2 = Main_controller__main_controller_out_st.main_cem2;
  cem1 = Main_controller__main_controller_out_st.main_cem1;
  cea2 = Main_controller__main_controller_out_st.main_cea2;
  cea1 = Main_controller__main_controller_out_st.main_cea1;
  c3 = Main_controller__main_controller_out_st.main_c3;
  c2 = Main_controller__main_controller_out_st.main_c2;
  c1 = Main_controller__main_controller_out_st.main_c1;
  c1_3 = ceg1;
  c2_3 = ceg2;
  c1_2 = cem1;
  c2_2 = cem2;
  c1_1 = cea1;
  c2_1 = cea2;
  c_2 = c3;
  c_1 = c2;
  c = c1;
  if (ck_15_1) {
    if (ck_15_2_1) {
      v_444 = (c1_3==true);
      if (v_444) {
        v_446 = true;
        v_445_1 = false;
        v_445_2 = false;
      } else {
        v_446 = self->pnr;
        v_445_1 = true;
        v_445_2 = true;
      };
      v_443 = (c2_3==true);
      if (v_443) {
        r_St_3_High = true;
      } else {
        r_St_3_High = v_446;
      };
      v_545 = r_St_3_High;
      if (v_443) {
        s_4_St_3_High_1 = true;
      } else {
        s_4_St_3_High_1 = v_445_1;
      };
      v_541 = s_4_St_3_High_1;
      if (v_443) {
        s_4_St_3_High_2 = false;
      } else {
        s_4_St_3_High_2 = v_445_2;
      };
      v_542 = s_4_St_3_High_2;
    } else {
      v_454 = !(c2_3);
      v_455 = (v_454==true);
      if (v_455) {
        v_457 = true;
        v_456_1 = true;
        v_456_2 = true;
      } else {
        v_457 = self->pnr;
        v_456_1 = true;
        v_456_2 = false;
      };
      v_452 = !(c1_3);
      v_453 = (v_452==true);
      if (v_453) {
        r_St_3_Low = true;
        s_4_St_3_Low_1 = false;
        s_4_St_3_Low_2 = false;
      } else {
        r_St_3_Low = v_457;
        s_4_St_3_Low_1 = v_456_1;
        s_4_St_3_Low_2 = v_456_2;
      };
      v_545 = r_St_3_Low;
      v_541 = s_4_St_3_Low_1;
      v_542 = s_4_St_3_Low_2;
      if (v_456_1) {
        v_456_2_1 = v_456_2;
      } else {
        v_456_2_0 = v_456_2;
      };
    };
    s_4_1 = v_541;
    s_4_2 = v_542;
    r = v_545;
  } else {
    if (ck_15_2_0) {
      v_546 = true;
      v_543 = true;
      v_544 = true;
    } else {
      v_449 = (c1_3==true);
      if (v_449) {
        v_451 = true;
        v_450_1 = true;
        v_450_2 = false;
      } else {
        v_451 = self->pnr;
        v_450_1 = false;
        v_450_2 = false;
      };
      v_447 = !(c2_3);
      v_448 = (v_447==true);
      if (v_448) {
        r_St_3_Mid = true;
      } else {
        r_St_3_Mid = v_451;
      };
      v_546 = r_St_3_Mid;
      if (v_448) {
        s_4_St_3_Mid_1 = true;
      } else {
        s_4_St_3_Mid_1 = v_450_1;
      };
      v_543 = s_4_St_3_Mid_1;
      if (v_448) {
        s_4_St_3_Mid_2 = true;
      } else {
        s_4_St_3_Mid_2 = v_450_2;
      };
      v_544 = s_4_St_3_Mid_2;
      if (v_450_1) {
        v_450_2_1 = v_450_2;
      } else {
        v_450_2_0 = v_450_2;
      };
      if (s_4_St_3_Mid_1) {
        s_4_St_3_Mid_2_1 = s_4_St_3_Mid_2;
      } else {
        s_4_St_3_Mid_2_0 = s_4_St_3_Mid_2;
      };
    };
    s_4_1 = v_543;
    s_4_2 = v_544;
    r = v_546;
  };
  ck_16_1 = s_4_1;
  ck_16_2 = s_4_2;
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      s_2_St_3_High = 100;
      v_531 = s_2_St_3_High;
      nr_St_3_High = false;
      v_537 = nr_St_3_High;
      ns_St_3_High_1 = true;
      v_533 = ns_St_3_High_1;
      ns_St_3_High_2 = true;
      v_534 = ns_St_3_High_2;
    } else {
      s_2_St_3_Low = 10;
      nr_St_3_Low = false;
      ns_St_3_Low_1 = true;
      ns_St_3_Low_2 = false;
      v_531 = s_2_St_3_Low;
      v_537 = nr_St_3_Low;
      v_533 = ns_St_3_Low_1;
      v_534 = ns_St_3_Low_2;
    };
    s_2 = v_531;
    ns_1_3 = v_533;
    ns_2_3 = v_534;
    nr = v_537;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      v_532 = 0;
      v_538 = true;
      v_535 = true;
      v_536 = true;
    } else {
      s_2_St_3_Mid = 50;
      v_532 = s_2_St_3_Mid;
      nr_St_3_Mid = false;
      v_538 = nr_St_3_Mid;
      ns_St_3_Mid_1 = false;
      v_535 = ns_St_3_Mid_1;
      ns_St_3_Mid_2 = false;
      v_536 = ns_St_3_Mid_2;
      if (ns_St_3_Mid_1) {
        ns_St_3_Mid_2_1 = ns_St_3_Mid_2;
      } else {
        ns_St_3_Mid_2_0 = ns_St_3_Mid_2;
      };
    };
    s_2 = v_532;
    ns_1_3 = v_535;
    ns_2_3 = v_536;
    nr = v_538;
  };
  _out->grave = s_2;
  v_172 = (_out->grave==100);
  v_183 = (_out->grave==100);
  v_194 = (_out->grave==100);
  v_205 = (_out->grave==100);
  v_217 = (_out->grave<30);
  v_229 = (_out->grave==10);
  v_241 = (_out->grave==10);
  if (ns_1_3) {
    ns_2_3_1 = ns_2_3;
  } else {
    ns_2_3_0 = ns_2_3;
  };
  if (ck_16_1) {
    if (ck_16_2_1) {
      if (ns_St_3_High_1) {
        ns_St_3_High_2_1 = ns_St_3_High_2;
      } else {
        ns_St_3_High_2_0 = ns_St_3_High_2;
      };
    } else {
      if (ns_St_3_Low_1) {
        ns_St_3_Low_2_1 = ns_St_3_Low_2;
      } else {
        ns_St_3_Low_2_0 = ns_St_3_Low_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (ck_15_1) {
    if (ck_15_2_1) {
      if (v_445_1) {
        v_445_2_1 = v_445_2;
      } else {
        v_445_2_0 = v_445_2;
      };
      if (s_4_St_3_High_1) {
        s_4_St_3_High_2_1 = s_4_St_3_High_2;
      } else {
        s_4_St_3_High_2_0 = s_4_St_3_High_2;
      };
    } else {
      if (s_4_St_3_Low_1) {
        s_4_St_3_Low_2_1 = s_4_St_3_Low_2;
      } else {
        s_4_St_3_Low_2_0 = s_4_St_3_Low_2;
      };
    };
  };
  if (ck_13_1) {
    if (ck_13_2_1) {
      v_429 = (c1_2==true);
      if (v_429) {
        v_431 = true;
        v_430_1 = false;
        v_430_2 = false;
      } else {
        v_431 = self->pnr_1;
        v_430_1 = true;
        v_430_2 = true;
      };
      v_428 = (c2_2==true);
      if (v_428) {
        r_1_St_4_High = true;
      } else {
        r_1_St_4_High = v_431;
      };
      v_561 = r_1_St_4_High;
      if (v_428) {
        s_5_St_4_High_1 = true;
      } else {
        s_5_St_4_High_1 = v_430_1;
      };
      v_557 = s_5_St_4_High_1;
      if (v_428) {
        s_5_St_4_High_2 = false;
      } else {
        s_5_St_4_High_2 = v_430_2;
      };
      v_558 = s_5_St_4_High_2;
    } else {
      v_439 = !(c2_2);
      v_440 = (v_439==true);
      if (v_440) {
        v_442 = true;
        v_441_1 = true;
        v_441_2 = true;
      } else {
        v_442 = self->pnr_1;
        v_441_1 = true;
        v_441_2 = false;
      };
      v_437 = !(c1_2);
      v_438 = (v_437==true);
      if (v_438) {
        r_1_St_4_Low = true;
        s_5_St_4_Low_1 = false;
        s_5_St_4_Low_2 = false;
      } else {
        r_1_St_4_Low = v_442;
        s_5_St_4_Low_1 = v_441_1;
        s_5_St_4_Low_2 = v_441_2;
      };
      v_561 = r_1_St_4_Low;
      v_557 = s_5_St_4_Low_1;
      v_558 = s_5_St_4_Low_2;
      if (v_441_1) {
        v_441_2_1 = v_441_2;
      } else {
        v_441_2_0 = v_441_2;
      };
    };
    s_5_1 = v_557;
    s_5_2 = v_558;
    r_1 = v_561;
  } else {
    if (ck_13_2_0) {
      v_562 = true;
      v_559 = true;
      v_560 = true;
    } else {
      v_434 = (c1_2==true);
      if (v_434) {
        v_436 = true;
        v_435_1 = true;
        v_435_2 = false;
      } else {
        v_436 = self->pnr_1;
        v_435_1 = false;
        v_435_2 = false;
      };
      v_432 = !(c2_2);
      v_433 = (v_432==true);
      if (v_433) {
        r_1_St_4_Mid = true;
      } else {
        r_1_St_4_Mid = v_436;
      };
      v_562 = r_1_St_4_Mid;
      if (v_433) {
        s_5_St_4_Mid_1 = true;
      } else {
        s_5_St_4_Mid_1 = v_435_1;
      };
      v_559 = s_5_St_4_Mid_1;
      if (v_433) {
        s_5_St_4_Mid_2 = true;
      } else {
        s_5_St_4_Mid_2 = v_435_2;
      };
      v_560 = s_5_St_4_Mid_2;
      if (v_435_1) {
        v_435_2_1 = v_435_2;
      } else {
        v_435_2_0 = v_435_2;
      };
      if (s_5_St_4_Mid_1) {
        s_5_St_4_Mid_2_1 = s_5_St_4_Mid_2;
      } else {
        s_5_St_4_Mid_2_0 = s_5_St_4_Mid_2;
      };
    };
    s_5_1 = v_559;
    s_5_2 = v_560;
    r_1 = v_562;
  };
  ck_14_1 = s_5_1;
  ck_14_2 = s_5_2;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      s_1_St_4_High = 100;
      v_547 = s_1_St_4_High;
      nr_1_St_4_High = false;
      v_553 = nr_1_St_4_High;
      ns_1_St_4_High_1 = true;
      v_549 = ns_1_St_4_High_1;
      ns_1_St_4_High_2 = true;
      v_550 = ns_1_St_4_High_2;
    } else {
      s_1_St_4_Low = 10;
      nr_1_St_4_Low = false;
      ns_1_St_4_Low_1 = true;
      ns_1_St_4_Low_2 = false;
      v_547 = s_1_St_4_Low;
      v_553 = nr_1_St_4_Low;
      v_549 = ns_1_St_4_Low_1;
      v_550 = ns_1_St_4_Low_2;
    };
    s_1 = v_547;
    ns_1_1 = v_549;
    ns_1_2 = v_550;
    nr_1 = v_553;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      v_548 = 0;
      v_554 = true;
      v_551 = true;
      v_552 = true;
    } else {
      s_1_St_4_Mid = 50;
      v_548 = s_1_St_4_Mid;
      nr_1_St_4_Mid = false;
      v_554 = nr_1_St_4_Mid;
      ns_1_St_4_Mid_1 = false;
      v_551 = ns_1_St_4_Mid_1;
      ns_1_St_4_Mid_2 = false;
      v_552 = ns_1_St_4_Mid_2;
      if (ns_1_St_4_Mid_1) {
        ns_1_St_4_Mid_2_1 = ns_1_St_4_Mid_2;
      } else {
        ns_1_St_4_Mid_2_0 = ns_1_St_4_Mid_2;
      };
    };
    s_1 = v_548;
    ns_1_1 = v_551;
    ns_1_2 = v_552;
    nr_1 = v_554;
  };
  _out->medio = s_1;
  v_170 = (_out->medio==100);
  v_181 = (_out->medio==100);
  v_192 = (_out->medio==100);
  v_203 = (_out->medio==50);
  v_215 = (_out->medio==50);
  v_227 = (_out->medio==10);
  v_239 = (_out->medio==10);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (ns_1_St_4_High_1) {
        ns_1_St_4_High_2_1 = ns_1_St_4_High_2;
      } else {
        ns_1_St_4_High_2_0 = ns_1_St_4_High_2;
      };
    } else {
      if (ns_1_St_4_Low_1) {
        ns_1_St_4_Low_2_1 = ns_1_St_4_Low_2;
      } else {
        ns_1_St_4_Low_2_0 = ns_1_St_4_Low_2;
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
  } else {
    s_5_2_0 = s_5_2;
  };
  if (ck_13_1) {
    if (ck_13_2_1) {
      if (v_430_1) {
        v_430_2_1 = v_430_2;
      } else {
        v_430_2_0 = v_430_2;
      };
      if (s_5_St_4_High_1) {
        s_5_St_4_High_2_1 = s_5_St_4_High_2;
      } else {
        s_5_St_4_High_2_0 = s_5_St_4_High_2;
      };
    } else {
      if (s_5_St_4_Low_1) {
        s_5_St_4_Low_2_1 = s_5_St_4_Low_2;
      } else {
        s_5_St_4_Low_2_0 = s_5_St_4_Low_2;
      };
    };
  };
  if (ck_11_1) {
    if (ck_11_2_1) {
      v_414 = (c1_1==true);
      if (v_414) {
        v_416 = true;
        v_415_1 = false;
        v_415_2 = false;
      } else {
        v_416 = self->pnr_2;
        v_415_1 = true;
        v_415_2 = true;
      };
      v_413 = (c2_1==true);
      if (v_413) {
        r_2_St_5_High = true;
      } else {
        r_2_St_5_High = v_416;
      };
      v_577 = r_2_St_5_High;
      if (v_413) {
        s_6_St_5_High_1 = true;
      } else {
        s_6_St_5_High_1 = v_415_1;
      };
      v_573 = s_6_St_5_High_1;
      if (v_413) {
        s_6_St_5_High_2 = false;
      } else {
        s_6_St_5_High_2 = v_415_2;
      };
      v_574 = s_6_St_5_High_2;
    } else {
      v_424 = !(c2_1);
      v_425 = (v_424==true);
      if (v_425) {
        v_427 = true;
        v_426_1 = true;
        v_426_2 = true;
      } else {
        v_427 = self->pnr_2;
        v_426_1 = true;
        v_426_2 = false;
      };
      v_422 = !(c1_1);
      v_423 = (v_422==true);
      if (v_423) {
        r_2_St_5_Low = true;
        s_6_St_5_Low_1 = false;
        s_6_St_5_Low_2 = false;
      } else {
        r_2_St_5_Low = v_427;
        s_6_St_5_Low_1 = v_426_1;
        s_6_St_5_Low_2 = v_426_2;
      };
      v_577 = r_2_St_5_Low;
      v_573 = s_6_St_5_Low_1;
      v_574 = s_6_St_5_Low_2;
      if (v_426_1) {
        v_426_2_1 = v_426_2;
      } else {
        v_426_2_0 = v_426_2;
      };
    };
    s_6_1 = v_573;
    s_6_2 = v_574;
    r_2 = v_577;
  } else {
    if (ck_11_2_0) {
      v_578 = true;
      v_575 = true;
      v_576 = true;
    } else {
      v_419 = (c1_1==true);
      if (v_419) {
        v_421 = true;
        v_420_1 = true;
        v_420_2 = false;
      } else {
        v_421 = self->pnr_2;
        v_420_1 = false;
        v_420_2 = false;
      };
      v_417 = !(c2_1);
      v_418 = (v_417==true);
      if (v_418) {
        r_2_St_5_Mid = true;
      } else {
        r_2_St_5_Mid = v_421;
      };
      v_578 = r_2_St_5_Mid;
      if (v_418) {
        s_6_St_5_Mid_1 = true;
      } else {
        s_6_St_5_Mid_1 = v_420_1;
      };
      v_575 = s_6_St_5_Mid_1;
      if (v_418) {
        s_6_St_5_Mid_2 = true;
      } else {
        s_6_St_5_Mid_2 = v_420_2;
      };
      v_576 = s_6_St_5_Mid_2;
      if (v_420_1) {
        v_420_2_1 = v_420_2;
      } else {
        v_420_2_0 = v_420_2;
      };
      if (s_6_St_5_Mid_1) {
        s_6_St_5_Mid_2_1 = s_6_St_5_Mid_2;
      } else {
        s_6_St_5_Mid_2_0 = s_6_St_5_Mid_2;
      };
    };
    s_6_1 = v_575;
    s_6_2 = v_576;
    r_2 = v_578;
  };
  ck_12_1 = s_6_1;
  ck_12_2 = s_6_2;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      s_St_5_High = 100;
      v_563 = s_St_5_High;
      nr_2_St_5_High = false;
      v_569 = nr_2_St_5_High;
      ns_2_St_5_High_1 = true;
      v_565 = ns_2_St_5_High_1;
      ns_2_St_5_High_2 = true;
      v_566 = ns_2_St_5_High_2;
    } else {
      s_St_5_Low = 10;
      nr_2_St_5_Low = false;
      ns_2_St_5_Low_1 = true;
      ns_2_St_5_Low_2 = false;
      v_563 = s_St_5_Low;
      v_569 = nr_2_St_5_Low;
      v_565 = ns_2_St_5_Low_1;
      v_566 = ns_2_St_5_Low_2;
    };
    s = v_563;
    ns_2_1 = v_565;
    ns_2_2 = v_566;
    nr_2 = v_569;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      v_564 = 0;
      v_570 = true;
      v_567 = true;
      v_568 = true;
    } else {
      s_St_5_Mid = 50;
      v_564 = s_St_5_Mid;
      nr_2_St_5_Mid = false;
      v_570 = nr_2_St_5_Mid;
      ns_2_St_5_Mid_1 = false;
      v_567 = ns_2_St_5_Mid_1;
      ns_2_St_5_Mid_2 = false;
      v_568 = ns_2_St_5_Mid_2;
      if (ns_2_St_5_Mid_1) {
        ns_2_St_5_Mid_2_1 = ns_2_St_5_Mid_2;
      } else {
        ns_2_St_5_Mid_2_0 = ns_2_St_5_Mid_2;
      };
    };
    s = v_564;
    ns_2_1 = v_567;
    ns_2_2 = v_568;
    nr_2 = v_570;
  };
  _out->agudo = s;
  v_169 = (_out->agudo==100);
  v_171 = (v_169&&v_170);
  v_173 = (v_171&&v_172);
  v_180 = (_out->agudo==100);
  v_182 = (v_180&&v_181);
  v_184 = (v_182&&v_183);
  v_191 = (_out->agudo==100);
  v_193 = (v_191&&v_192);
  v_195 = (v_193&&v_194);
  v_202 = (_out->agudo==50);
  v_204 = (v_202&&v_203);
  v_206 = (v_204&&v_205);
  v_214 = (_out->agudo==50);
  v_216 = (v_214&&v_215);
  v_218 = (v_216&&v_217);
  v_226 = (_out->agudo==50);
  v_228 = (v_226&&v_227);
  v_230 = (v_228&&v_229);
  v_238 = (_out->agudo==10);
  v_240 = (v_238&&v_239);
  v_242 = (v_240&&v_241);
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_12_1) {
    if (ck_12_2_1) {
      if (ns_2_St_5_High_1) {
        ns_2_St_5_High_2_1 = ns_2_St_5_High_2;
      } else {
        ns_2_St_5_High_2_0 = ns_2_St_5_High_2;
      };
    } else {
      if (ns_2_St_5_Low_1) {
        ns_2_St_5_Low_2_1 = ns_2_St_5_Low_2;
      } else {
        ns_2_St_5_Low_2_0 = ns_2_St_5_Low_2;
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
  } else {
    s_6_2_0 = s_6_2;
  };
  if (ck_11_1) {
    if (ck_11_2_1) {
      if (v_415_1) {
        v_415_2_1 = v_415_2;
      } else {
        v_415_2_0 = v_415_2;
      };
      if (s_6_St_5_High_1) {
        s_6_St_5_High_2_1 = s_6_St_5_High_2;
      } else {
        s_6_St_5_High_2_0 = s_6_St_5_High_2;
      };
    } else {
      if (s_6_St_5_Low_1) {
        s_6_St_5_Low_2_1 = s_6_St_5_Low_2;
      } else {
        s_6_St_5_Low_2_0 = s_6_St_5_Low_2;
      };
    };
  };
  if (self->ck_9_1) {
    if (c_2) {
      r_3_St_6_ON = true;
    } else {
      r_3_St_6_ON = self->pnr_3;
    };
    r_3 = r_3_St_6_ON;
    if (c_2) {
      s_7_St_6_ON_1 = false;
    } else {
      s_7_St_6_ON_1 = true;
    };
    s_7_1 = s_7_St_6_ON_1;
  } else {
    v_412 = !(c_2);
    if (v_412) {
      r_3_St_6_Off = true;
      s_7_St_6_Off_1 = true;
    } else {
      r_3_St_6_Off = self->pnr_3;
      s_7_St_6_Off_1 = false;
    };
    r_3 = r_3_St_6_Off;
    s_7_1 = s_7_St_6_Off_1;
  };
  ck_10_1 = s_7_1;
  if (ck_10_1) {
    ligado_2_St_6_ON = true;
    ligado_2 = ligado_2_St_6_ON;
    nr_3_St_6_ON = false;
    nr_3 = nr_3_St_6_ON;
    ns_3_St_6_ON_1 = true;
    ns_3_1 = ns_3_St_6_ON_1;
  } else {
    ligado_2_St_6_Off = false;
    nr_3_St_6_Off = false;
    ns_3_St_6_Off_1 = false;
    ligado_2 = ligado_2_St_6_Off;
    nr_3 = nr_3_St_6_Off;
    ns_3_1 = ns_3_St_6_Off_1;
  };
  _out->cx3 = ligado_2;
  v_178 = !(_out->cx3);
  v_224 = !(_out->cx3);
  v_236 = !(_out->cx3);
  v_249 = !(_out->cx3);
  if (self->ck_7_1) {
    if (c_1) {
      r_4_St_7_ON = true;
    } else {
      r_4_St_7_ON = self->pnr_4;
    };
    r_4 = r_4_St_7_ON;
    if (c_1) {
      s_8_St_7_ON_1 = false;
    } else {
      s_8_St_7_ON_1 = true;
    };
    s_8_1 = s_8_St_7_ON_1;
  } else {
    v_411 = !(c_1);
    if (v_411) {
      r_4_St_7_Off = true;
      s_8_St_7_Off_1 = true;
    } else {
      r_4_St_7_Off = self->pnr_4;
      s_8_St_7_Off_1 = false;
    };
    r_4 = r_4_St_7_Off;
    s_8_1 = s_8_St_7_Off_1;
  };
  ck_8_1 = s_8_1;
  if (ck_8_1) {
    ligado_1_St_7_ON = true;
    ligado_1 = ligado_1_St_7_ON;
    nr_4_St_7_ON = false;
    nr_4 = nr_4_St_7_ON;
    ns_4_St_7_ON_1 = true;
    ns_4_1 = ns_4_St_7_ON_1;
  } else {
    ligado_1_St_7_Off = false;
    nr_4_St_7_Off = false;
    ns_4_St_7_Off_1 = false;
    ligado_1 = ligado_1_St_7_Off;
    nr_4 = nr_4_St_7_Off;
    ns_4_1 = ns_4_St_7_Off_1;
  };
  _out->cx2 = ligado_1;
  v_188 = !(_out->cx2);
  v_211 = !(_out->cx2);
  v_234 = !(_out->cx2);
  v_247 = !(_out->cx2);
  if (self->ck_5_1) {
    if (c) {
      r_5_St_8_ON = true;
    } else {
      r_5_St_8_ON = self->pnr_5;
    };
    r_5 = r_5_St_8_ON;
    if (c) {
      s_9_St_8_ON_1 = false;
    } else {
      s_9_St_8_ON_1 = true;
    };
    s_9_1 = s_9_St_8_ON_1;
  } else {
    v_410 = !(c);
    if (v_410) {
      r_5_St_8_Off = true;
      s_9_St_8_Off_1 = true;
    } else {
      r_5_St_8_Off = self->pnr_5;
      s_9_St_8_Off_1 = false;
    };
    r_5 = r_5_St_8_Off;
    s_9_1 = s_9_St_8_Off_1;
  };
  ck_6_1 = s_9_1;
  if (ck_6_1) {
    ligado_St_8_ON = true;
    ligado = ligado_St_8_ON;
    nr_5_St_8_ON = false;
    nr_5 = nr_5_St_8_ON;
    ns_5_St_8_ON_1 = true;
    ns_5_1 = ns_5_St_8_ON_1;
  } else {
    ligado_St_8_Off = false;
    nr_5_St_8_Off = false;
    ns_5_St_8_Off_1 = false;
    ligado = ligado_St_8_Off;
    nr_5 = nr_5_St_8_Off;
    ns_5_1 = ns_5_St_8_Off_1;
  };
  _out->cx1 = ligado;
  v_167 = (_out->cx1&&_out->cx2);
  v_168 = (v_167&&_out->cx3);
  v_174 = (v_168&&v_173);
  v_177 = (_out->cx1&&_out->cx2);
  v_179 = (v_177&&v_178);
  v_185 = (v_179&&v_184);
  v_189 = (_out->cx1&&v_188);
  v_190 = (v_189&&_out->cx3);
  v_196 = (v_190&&v_195);
  v_199 = !(_out->cx1);
  v_200 = (v_199&&_out->cx2);
  v_201 = (v_200&&_out->cx3);
  v_207 = (v_201&&v_206);
  v_210 = !(_out->cx1);
  v_212 = (v_210&&v_211);
  v_213 = (v_212&&_out->cx3);
  v_219 = (v_213&&v_218);
  v_222 = !(_out->cx1);
  v_223 = (v_222&&_out->cx2);
  v_225 = (v_223&&v_224);
  v_231 = (v_225&&v_230);
  v_235 = (_out->cx1&&v_234);
  v_237 = (v_235&&v_236);
  v_243 = (v_237&&v_242);
  v_246 = !(_out->cx1);
  v_248 = (v_246&&v_247);
  v_250 = (v_248&&v_249);
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      ck_4_3_1_1 = ck_4_3;
      if (ck_4_3_1_1) {
        res_St_9_Classic = 1;
        nr_6_St_9_Classic = false;
        ns_6_St_9_Classic_1 = true;
        ns_6_St_9_Classic_2 = true;
        ns_6_St_9_Classic_3 = true;
        v_579 = res_St_9_Classic;
        v_603 = nr_6_St_9_Classic;
        v_585 = ns_6_St_9_Classic_1;
        v_586 = ns_6_St_9_Classic_2;
        v_587 = ns_6_St_9_Classic_3;
        if (ns_6_St_9_Classic_1) {
          ns_6_St_9_Classic_2_1 = ns_6_St_9_Classic_2;
          if (ns_6_St_9_Classic_2_1) {
            ns_6_St_9_Classic_3_1_1 = ns_6_St_9_Classic_3;
          } else {
            ns_6_St_9_Classic_3_1_0 = ns_6_St_9_Classic_3;
          };
        } else {
          ns_6_St_9_Classic_2_0 = ns_6_St_9_Classic_2;
          if (ns_6_St_9_Classic_2_0) {
            ns_6_St_9_Classic_3_0_1 = ns_6_St_9_Classic_3;
          } else {
            ns_6_St_9_Classic_3_0_0 = ns_6_St_9_Classic_3;
          };
        };
      } else {
        res_St_9_Electronic = 2;
        v_579 = res_St_9_Electronic;
        nr_6_St_9_Electronic = false;
        v_603 = nr_6_St_9_Electronic;
        ns_6_St_9_Electronic_1 = true;
        v_585 = ns_6_St_9_Electronic_1;
        ns_6_St_9_Electronic_2 = true;
        v_586 = ns_6_St_9_Electronic_2;
        ns_6_St_9_Electronic_3 = false;
        v_587 = ns_6_St_9_Electronic_3;
        if (ns_6_St_9_Electronic_1) {
          ns_6_St_9_Electronic_2_1 = ns_6_St_9_Electronic_2;
          if (ns_6_St_9_Electronic_2_1) {
            ns_6_St_9_Electronic_3_1_1 = ns_6_St_9_Electronic_3;
          } else {
            ns_6_St_9_Electronic_3_1_0 = ns_6_St_9_Electronic_3;
          };
        } else {
          ns_6_St_9_Electronic_2_0 = ns_6_St_9_Electronic_2;
          if (ns_6_St_9_Electronic_2_0) {
            ns_6_St_9_Electronic_3_0_1 = ns_6_St_9_Electronic_3;
          } else {
            ns_6_St_9_Electronic_3_0_0 = ns_6_St_9_Electronic_3;
          };
        };
      };
      v_581 = v_579;
      v_597 = v_585;
      v_598 = v_586;
      v_599 = v_587;
      v_605 = v_603;
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        res_St_9_Funk = 3;
        nr_6_St_9_Funk = false;
        ns_6_St_9_Funk_1 = true;
        ns_6_St_9_Funk_2 = false;
        ns_6_St_9_Funk_3 = true;
        v_580 = res_St_9_Funk;
        v_604 = nr_6_St_9_Funk;
        v_588 = ns_6_St_9_Funk_1;
        v_589 = ns_6_St_9_Funk_2;
        v_590 = ns_6_St_9_Funk_3;
      } else {
        res_St_9_Indie = 4;
        v_580 = res_St_9_Indie;
        nr_6_St_9_Indie = false;
        v_604 = nr_6_St_9_Indie;
        ns_6_St_9_Indie_1 = true;
        v_588 = ns_6_St_9_Indie_1;
        ns_6_St_9_Indie_2 = false;
        v_589 = ns_6_St_9_Indie_2;
        ns_6_St_9_Indie_3 = false;
        v_590 = ns_6_St_9_Indie_3;
      };
      v_581 = v_580;
      v_597 = v_588;
      v_598 = v_589;
      v_599 = v_590;
      v_605 = v_604;
      if (ck_4_3_1_0) {
        if (ns_6_St_9_Funk_1) {
          ns_6_St_9_Funk_2_1 = ns_6_St_9_Funk_2;
          if (ns_6_St_9_Funk_2_1) {
            ns_6_St_9_Funk_3_1_1 = ns_6_St_9_Funk_3;
          } else {
            ns_6_St_9_Funk_3_1_0 = ns_6_St_9_Funk_3;
          };
        } else {
          ns_6_St_9_Funk_2_0 = ns_6_St_9_Funk_2;
          if (ns_6_St_9_Funk_2_0) {
            ns_6_St_9_Funk_3_0_1 = ns_6_St_9_Funk_3;
          } else {
            ns_6_St_9_Funk_3_0_0 = ns_6_St_9_Funk_3;
          };
        };
      } else {
        if (ns_6_St_9_Indie_1) {
          ns_6_St_9_Indie_2_1 = ns_6_St_9_Indie_2;
          if (ns_6_St_9_Indie_2_1) {
            ns_6_St_9_Indie_3_1_1 = ns_6_St_9_Indie_3;
          } else {
            ns_6_St_9_Indie_3_1_0 = ns_6_St_9_Indie_3;
          };
        } else {
          ns_6_St_9_Indie_2_0 = ns_6_St_9_Indie_2;
          if (ns_6_St_9_Indie_2_0) {
            ns_6_St_9_Indie_3_0_1 = ns_6_St_9_Indie_3;
          } else {
            ns_6_St_9_Indie_3_0_0 = ns_6_St_9_Indie_3;
          };
        };
      };
    };
    res = v_581;
    ns_6_1 = v_597;
    ns_6_2 = v_598;
    ns_6_3 = v_599;
    nr_6 = v_605;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      ck_4_3_0_1 = ck_4_3;
      if (ck_4_3_0_1) {
        res_St_9_Off = 0;
        nr_6_St_9_Off = false;
        ns_6_St_9_Off_1 = false;
        ns_6_St_9_Off_2 = true;
        ns_6_St_9_Off_3 = true;
        v_582 = res_St_9_Off;
        v_606 = nr_6_St_9_Off;
        v_591 = ns_6_St_9_Off_1;
        v_592 = ns_6_St_9_Off_2;
        v_593 = ns_6_St_9_Off_3;
        if (ns_6_St_9_Off_1) {
          ns_6_St_9_Off_2_1 = ns_6_St_9_Off_2;
          if (ns_6_St_9_Off_2_1) {
            ns_6_St_9_Off_3_1_1 = ns_6_St_9_Off_3;
          } else {
            ns_6_St_9_Off_3_1_0 = ns_6_St_9_Off_3;
          };
        } else {
          ns_6_St_9_Off_2_0 = ns_6_St_9_Off_2;
          if (ns_6_St_9_Off_2_0) {
            ns_6_St_9_Off_3_0_1 = ns_6_St_9_Off_3;
          } else {
            ns_6_St_9_Off_3_0_0 = ns_6_St_9_Off_3;
          };
        };
      } else {
        res_St_9_POP = 5;
        v_582 = res_St_9_POP;
        nr_6_St_9_POP = false;
        v_606 = nr_6_St_9_POP;
        ns_6_St_9_POP_1 = false;
        v_591 = ns_6_St_9_POP_1;
        ns_6_St_9_POP_2 = true;
        v_592 = ns_6_St_9_POP_2;
        ns_6_St_9_POP_3 = false;
        v_593 = ns_6_St_9_POP_3;
        if (ns_6_St_9_POP_1) {
          ns_6_St_9_POP_2_1 = ns_6_St_9_POP_2;
          if (ns_6_St_9_POP_2_1) {
            ns_6_St_9_POP_3_1_1 = ns_6_St_9_POP_3;
          } else {
            ns_6_St_9_POP_3_1_0 = ns_6_St_9_POP_3;
          };
        } else {
          ns_6_St_9_POP_2_0 = ns_6_St_9_POP_2;
          if (ns_6_St_9_POP_2_0) {
            ns_6_St_9_POP_3_0_1 = ns_6_St_9_POP_3;
          } else {
            ns_6_St_9_POP_3_0_0 = ns_6_St_9_POP_3;
          };
        };
      };
      v_584 = v_582;
      v_600 = v_591;
      v_601 = v_592;
      v_602 = v_593;
      v_608 = v_606;
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (ck_4_3_0_0) {
        res_St_9_Regue = 6;
        nr_6_St_9_Regue = false;
        ns_6_St_9_Regue_1 = false;
        ns_6_St_9_Regue_2 = false;
        ns_6_St_9_Regue_3 = true;
        v_583 = res_St_9_Regue;
        v_607 = nr_6_St_9_Regue;
        v_594 = ns_6_St_9_Regue_1;
        v_595 = ns_6_St_9_Regue_2;
        v_596 = ns_6_St_9_Regue_3;
      } else {
        res_St_9_Rock = 7;
        v_583 = res_St_9_Rock;
        nr_6_St_9_Rock = false;
        v_607 = nr_6_St_9_Rock;
        ns_6_St_9_Rock_1 = false;
        v_594 = ns_6_St_9_Rock_1;
        ns_6_St_9_Rock_2 = false;
        v_595 = ns_6_St_9_Rock_2;
        ns_6_St_9_Rock_3 = false;
        v_596 = ns_6_St_9_Rock_3;
      };
      v_584 = v_583;
      v_600 = v_594;
      v_601 = v_595;
      v_602 = v_596;
      v_608 = v_607;
    };
    res = v_584;
    ns_6_1 = v_600;
    ns_6_2 = v_601;
    ns_6_3 = v_602;
    nr_6 = v_608;
  };
  _out->re = res;
  v = (_out->re==7);
  v_166 = !(v);
  ruleRock = (v_166||v_174);
  v_175 = (_out->re==6);
  v_176 = !(v_175);
  ruleRegue = (v_176||v_185);
  v_186 = (_out->re==5);
  v_187 = !(v_186);
  rulePOP = (v_187||v_196);
  v_197 = (_out->re==4);
  v_198 = !(v_197);
  ruleIndie = (v_198||v_207);
  v_208 = (_out->re==3);
  v_209 = !(v_208);
  ruleFunk = (v_209||v_219);
  v_220 = (_out->re==2);
  v_221 = !(v_220);
  ruleElectron = (v_221||v_231);
  v_232 = (_out->re==1);
  v_233 = !(v_232);
  ruleClassic = (v_233||v_243);
  v_244 = (_out->re==0);
  v_245 = !(v_244);
  ruleOff = (v_245||v_250);
  v_251 = (ruleOff&&ruleClassic);
  v_252 = (v_251&&ruleElectron);
  v_253 = (v_252&&ruleFunk);
  v_254 = (v_253&&ruleIndie);
  v_255 = (v_254&&rulePOP);
  v_256 = (v_255&&ruleRegue);
  v_257 = (v_256&&ruleRock);
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
    if (ns_6_2_1) {
      ns_6_3_1_1 = ns_6_3;
    } else {
      ns_6_3_1_0 = ns_6_3;
    };
  } else {
    ns_6_2_0 = ns_6_2;
    if (ns_6_2_0) {
      ns_6_3_0_1 = ns_6_3;
    } else {
      ns_6_3_0_0 = ns_6_3;
    };
  };
  if (!(ck_4_1)) {
    if (!(ck_4_2_0)) {
      if (ck_4_3_0_0) {
        if (ns_6_St_9_Regue_1) {
          ns_6_St_9_Regue_2_1 = ns_6_St_9_Regue_2;
          if (ns_6_St_9_Regue_2_1) {
            ns_6_St_9_Regue_3_1_1 = ns_6_St_9_Regue_3;
          } else {
            ns_6_St_9_Regue_3_1_0 = ns_6_St_9_Regue_3;
          };
        } else {
          ns_6_St_9_Regue_2_0 = ns_6_St_9_Regue_2;
          if (ns_6_St_9_Regue_2_0) {
            ns_6_St_9_Regue_3_0_1 = ns_6_St_9_Regue_3;
          } else {
            ns_6_St_9_Regue_3_0_0 = ns_6_St_9_Regue_3;
          };
        };
      } else {
        if (ns_6_St_9_Rock_1) {
          ns_6_St_9_Rock_2_1 = ns_6_St_9_Rock_2;
          if (ns_6_St_9_Rock_2_1) {
            ns_6_St_9_Rock_3_1_1 = ns_6_St_9_Rock_3;
          } else {
            ns_6_St_9_Rock_3_1_0 = ns_6_St_9_Rock_3;
          };
        } else {
          ns_6_St_9_Rock_2_0 = ns_6_St_9_Rock_2;
          if (ns_6_St_9_Rock_2_0) {
            ns_6_St_9_Rock_3_0_1 = ns_6_St_9_Rock_3;
          } else {
            ns_6_St_9_Rock_3_0_0 = ns_6_St_9_Rock_3;
          };
        };
      };
    };
  };
  if (s_10_1) {
    s_10_2_1 = s_10_2;
    if (s_10_2_1) {
      s_10_3_1_1 = s_10_3;
    } else {
      s_10_3_1_0 = s_10_3;
    };
  } else {
    s_10_2_0 = s_10_2;
    if (s_10_2_0) {
      s_10_3_0_1 = s_10_3;
    } else {
      s_10_3_0_0 = s_10_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (v_284_1) {
          v_284_2_1 = v_284_2;
          if (v_284_2_1) {
            v_284_3_1_1 = v_284_3;
          } else {
            v_284_3_1_0 = v_284_3;
          };
        } else {
          v_284_2_0 = v_284_2;
          if (v_284_2_0) {
            v_284_3_0_1 = v_284_3;
          } else {
            v_284_3_0_0 = v_284_3;
          };
        };
        if (v_286_1) {
          v_286_2_1 = v_286_2;
          if (v_286_2_1) {
            v_286_3_1_1 = v_286_3;
          } else {
            v_286_3_1_0 = v_286_3;
          };
        } else {
          v_286_2_0 = v_286_2;
          if (v_286_2_0) {
            v_286_3_0_1 = v_286_3;
          } else {
            v_286_3_0_0 = v_286_3;
          };
        };
        if (v_288_1) {
          v_288_2_1 = v_288_2;
          if (v_288_2_1) {
            v_288_3_1_1 = v_288_3;
          } else {
            v_288_3_1_0 = v_288_3;
          };
        } else {
          v_288_2_0 = v_288_2;
          if (v_288_2_0) {
            v_288_3_0_1 = v_288_3;
          } else {
            v_288_3_0_0 = v_288_3;
          };
        };
        if (v_290_1) {
          v_290_2_1 = v_290_2;
          if (v_290_2_1) {
            v_290_3_1_1 = v_290_3;
          } else {
            v_290_3_1_0 = v_290_3;
          };
        } else {
          v_290_2_0 = v_290_2;
          if (v_290_2_0) {
            v_290_3_0_1 = v_290_3;
          } else {
            v_290_3_0_0 = v_290_3;
          };
        };
        if (v_292_1) {
          v_292_2_1 = v_292_2;
          if (v_292_2_1) {
            v_292_3_1_1 = v_292_3;
          } else {
            v_292_3_1_0 = v_292_3;
          };
        } else {
          v_292_2_0 = v_292_2;
          if (v_292_2_0) {
            v_292_3_0_1 = v_292_3;
          } else {
            v_292_3_0_0 = v_292_3;
          };
        };
        if (v_294_1) {
          v_294_2_1 = v_294_2;
          if (v_294_2_1) {
            v_294_3_1_1 = v_294_3;
          } else {
            v_294_3_1_0 = v_294_3;
          };
        } else {
          v_294_2_0 = v_294_2;
          if (v_294_2_0) {
            v_294_3_0_1 = v_294_3;
          } else {
            v_294_3_0_0 = v_294_3;
          };
        };
        if (s_10_St_9_Regue_1) {
          s_10_St_9_Regue_2_1 = s_10_St_9_Regue_2;
          if (s_10_St_9_Regue_2_1) {
            s_10_St_9_Regue_3_1_1 = s_10_St_9_Regue_3;
          } else {
            s_10_St_9_Regue_3_1_0 = s_10_St_9_Regue_3;
          };
        } else {
          s_10_St_9_Regue_2_0 = s_10_St_9_Regue_2;
          if (s_10_St_9_Regue_2_0) {
            s_10_St_9_Regue_3_0_1 = s_10_St_9_Regue_3;
          } else {
            s_10_St_9_Regue_3_0_0 = s_10_St_9_Regue_3;
          };
        };
      } else {
        if (v_265_1) {
          v_265_2_1 = v_265_2;
          if (v_265_2_1) {
            v_265_3_1_1 = v_265_3;
          } else {
            v_265_3_1_0 = v_265_3;
          };
        } else {
          v_265_2_0 = v_265_2;
          if (v_265_2_0) {
            v_265_3_0_1 = v_265_3;
          } else {
            v_265_3_0_0 = v_265_3;
          };
        };
        if (v_267_1) {
          v_267_2_1 = v_267_2;
          if (v_267_2_1) {
            v_267_3_1_1 = v_267_3;
          } else {
            v_267_3_1_0 = v_267_3;
          };
        } else {
          v_267_2_0 = v_267_2;
          if (v_267_2_0) {
            v_267_3_0_1 = v_267_3;
          } else {
            v_267_3_0_0 = v_267_3;
          };
        };
        if (v_269_1) {
          v_269_2_1 = v_269_2;
          if (v_269_2_1) {
            v_269_3_1_1 = v_269_3;
          } else {
            v_269_3_1_0 = v_269_3;
          };
        } else {
          v_269_2_0 = v_269_2;
          if (v_269_2_0) {
            v_269_3_0_1 = v_269_3;
          } else {
            v_269_3_0_0 = v_269_3;
          };
        };
        if (v_271_1) {
          v_271_2_1 = v_271_2;
          if (v_271_2_1) {
            v_271_3_1_1 = v_271_3;
          } else {
            v_271_3_1_0 = v_271_3;
          };
        } else {
          v_271_2_0 = v_271_2;
          if (v_271_2_0) {
            v_271_3_0_1 = v_271_3;
          } else {
            v_271_3_0_0 = v_271_3;
          };
        };
        if (v_273_1) {
          v_273_2_1 = v_273_2;
          if (v_273_2_1) {
            v_273_3_1_1 = v_273_3;
          } else {
            v_273_3_1_0 = v_273_3;
          };
        } else {
          v_273_2_0 = v_273_2;
          if (v_273_2_0) {
            v_273_3_0_1 = v_273_3;
          } else {
            v_273_3_0_0 = v_273_3;
          };
        };
        if (v_275_1) {
          v_275_2_1 = v_275_2;
          if (v_275_2_1) {
            v_275_3_1_1 = v_275_3;
          } else {
            v_275_3_1_0 = v_275_3;
          };
        } else {
          v_275_2_0 = v_275_2;
          if (v_275_2_0) {
            v_275_3_0_1 = v_275_3;
          } else {
            v_275_3_0_0 = v_275_3;
          };
        };
        if (s_10_St_9_Rock_1) {
          s_10_St_9_Rock_2_1 = s_10_St_9_Rock_2;
          if (s_10_St_9_Rock_2_1) {
            s_10_St_9_Rock_3_1_1 = s_10_St_9_Rock_3;
          } else {
            s_10_St_9_Rock_3_1_0 = s_10_St_9_Rock_3;
          };
        } else {
          s_10_St_9_Rock_2_0 = s_10_St_9_Rock_2;
          if (s_10_St_9_Rock_2_0) {
            s_10_St_9_Rock_3_0_1 = s_10_St_9_Rock_3;
          } else {
            s_10_St_9_Rock_3_0_0 = s_10_St_9_Rock_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_539 = ns_1_3;
  self->v_540 = ns_2_3;
  self->pnr_1 = nr_1;
  self->v_555 = ns_1_1;
  self->v_556 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_571 = ns_2_1;
  self->v_572 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_9_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_7_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_5_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->v_609 = ns_6_1;
  self->v_610 = ns_6_2;
  self->v_611 = ns_6_3;;
}

