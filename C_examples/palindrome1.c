#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// frequency to print out results
#define ITERATION 5
// number of digits we can handle
#define TOOBIG 19

unsigned long step;
int usage(char *name);
unsigned long long reverse(unsigned long long number);

int main(int argc, char **argv) {

	if (argc != 1) return usage(argv[0]);

	unsigned long long in[2];
	in[0] = 0;
	in[1] = 0;

	while(scanf("%llu", &in[0]) != EOF){
		step = 0;
		while(in[0] != 2*in[1]) {
			if(!(in[1] = reverse(in[0]))) break;
			printf("original = %llu, reversed = %llu, step = %lu\n",in[0],in[1],step);
			in[0] = in[0] + in[1];
		}
		if(in[1]) printf("Iteration = %lu\tPalindrome = %llu\n\n", step, in[1]);
	}
	return 0;
}

int usage(char *name){
	fprintf(stderr,"usage: in-file | %s >> out-file\n", name);
	return 1;
}

unsigned long long reverse(unsigned long long number){
	unsigned long length;
	char *tmp, *reversed;
	tmp = malloc(sizeof(unsigned long long));
	reversed = malloc(sizeof(unsigned long long));

	length = sprintf(tmp,"%llu", number);	
	if(length > TOOBIG){
		printf("\t\tNo solution!\n\n");
		return(0);
	}
	if((step++)%ITERATION == 0) 
		printf("Iteration = %lu,\t%llu\n", step, number);
	strcpy(reversed, tmp);
	while(*++reversed);
	*--reversed = *tmp;
	while(*++tmp) *--reversed = *tmp;
	return(strtoull(reversed, NULL, 10));
}
