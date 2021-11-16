#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int usage(char*);

int main(int argc, char * argv[]){
	int n = 0;
	mpf_t ans, num;
	mpf_init_set_ui(num,1);
	mpf_init_set_ui(ans,1); 
	if(argc != 2) return usage(argv[0]);
  n = atoi(argv[1]);
  if( n < 0) return usage(argv[0]);

  mpf_t p,q,r;
  mpf_t a;
  mpf_init_set_ui(a,1);
  mpf_init_set_ui(p,1);
	mpf_init_set_ui(q,1);
	mpf_init_set_ui(r,1);
	mpf_add_ui(p,p,1);
 	for(int i=1; i <= n ; ++i){ 
	mpf_add(r,p,q);
	mpf_init_set(q,p);
	mpf_init_set(p,r);
 	mpf_mul_ui(a,a,i);
	mpf_div(num,r,a);
	mpf_add(ans,ans,num);
	}
	

/*  for(int i=1; i <= n ; ++i){
 mpf_mul_ui(a,a,i);
}*/

	mpf_out_str(stdout,1,10,ans);
	printf("\n");

	mpf_clear(p);
	mpf_clear(q);
	mpf_clear(r);
	mpf_clear(a);
	mpf_clear(num);
	mpf_clear(ans);
  return 0;
}
int usage(char* name){
    printf ("Usage: %s <positive number> \n", name);
    return 1;
}
