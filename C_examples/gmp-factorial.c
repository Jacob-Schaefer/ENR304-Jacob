#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

void factorial(int);
int usage(char*);

int main(int argc, char * argv[]){
  int n;
	if(argc != 2) return usage(argv[0]);
  n = atoi(argv[1]);
  if( n < 0) return usage(argv[0]);
  factorial(n);
  return 0;
}
int usage(char* name){
    printf ("Usage: %s <positive number> \n", name);
    return 1;
}
void factorial(int n){
  int i;
  mpz_t p;
  mpz_init_set_ui(p,1);
  for(i=1; i <= n ; ++i) mpz_mul_ui(p,p,i);
  printf ("%d! = ", n);
  mpz_out_str(stdout,10,p);
  printf ("\n");
  mpz_clear(p);
}
