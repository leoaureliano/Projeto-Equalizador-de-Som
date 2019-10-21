/* --- Generated the 21/10/2019 at 10:51 --- */
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
    Som__main_step(tipo, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.cx1);
    printf("=> ");
    printf("%d ", _res.cx2);
    printf("=> ");
    printf("%d ", _res.cx3);
    printf("=> ");
    printf("%d ", _res.re);
    printf("=> ");
    printf("%d ", _res.agudo);
    printf("=> ");
    printf("%d ", _res.medio);
    printf("=> ");
    printf("%d ", _res.grave);
    puts("");
    fflush(stdout);
  };
  return 0;
}

