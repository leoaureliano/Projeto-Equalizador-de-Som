/* --- Generated the 17/11/2019 at 21:34 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s main som.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Som__main_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int tipo;
  int upa;
  int downa;
  int upm;
  int downm;
  int upg;
  int downg;
  int upv;
  int downv;
  Som__main_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Som__main_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("tipo ? ");
    scanf("%d", &tipo);;
    
    printf("upa ? ");
    scanf("%d", &upa);;
    
    printf("downa ? ");
    scanf("%d", &downa);;
    
    printf("upm ? ");
    scanf("%d", &upm);;
    
    printf("downm ? ");
    scanf("%d", &downm);;
    
    printf("upg ? ");
    scanf("%d", &upg);;
    
    printf("downg ? ");
    scanf("%d", &downg);;
    
    printf("upv ? ");
    scanf("%d", &upv);;
    
    printf("downv ? ");
    scanf("%d", &downv);;
    Som__main_step(tipo, upa, downa, upm, downm, upg, downg, upv, downv,
                   &_res, &mem);
    printf("=> ");
    printf("%d ", _res.cx1);
    printf("=> ");
    printf("%d ", _res.cx2);
    printf("=> ");
    printf("%d ", _res.cx3);
    printf("=> ");
    printf("%d ", _res.res);
    printf("=> ");
    printf("%d ", _res.agudo);
    printf("=> ");
    printf("%d ", _res.medio);
    printf("=> ");
    printf("%d ", _res.grave);
    printf("=> ");
    printf("%d ", _res.volume);
    puts("");
    fflush(stdout);
  };
  return 0;
}

