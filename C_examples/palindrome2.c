#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// default number of iterations
#define MAXSTEPS  50

int usage(char *name);
char *iterate(char *number, int max);
char *reverse(char *number);
char *add(char *number1, char *number2);

int main(int argc, char **argv) {
	int maxsteps = MAXSTEPS;
	char *in;
	in = malloc(BUFSIZ);

	if (argc == 2) maxsteps = atoi(argv[1]);
	else if (argc > 2) return usage(argv[0]);

	while(scanf("%s", in) != EOF){
		in = iterate(in, maxsteps);
		printf(" --> %s", in);
		printf("\n");
	}
	return 0;
}

int usage(char *name){
	fprintf(stderr,"usage: in-file | %s [iterations] >> out-file\n", name);
	return 1;
}

char *iterate(char *number, int max){
	int step = 0;
	char *reversed;
	reversed = malloc(BUFSIZ);

	printf("%s", number);
	strcpy(reversed, number);
	while( step++ < max) {
		reversed = reverse(number);
		if(!strcmp(number, reversed)) return(number);
		number = add(number,reversed);
	}
	printf(" (%d iterations, no solution)", step-1);
	return(number);
}

char *add(char *number1, char *number2) {
	int i, carry, digit;
	char *tmp;
	tmp = malloc(BUFSIZ);
	carry = 0;
	
	i = strlen(number2);
	while(--i >= 0){
		digit = (number1[i] - '0') + (number2[i] - '0') + carry;
		carry = 0;
		if ( digit < 10 ) number2[i] = (digit + '0');
		else if (i != 0) { 
			digit = digit - 10;
			number2[i] = (digit + '0');
			carry = 1;
		}
		else {
			digit = digit - 10;
			number2[i] = (digit + '0');
			strcpy(tmp, reverse(number2));
			strcat(tmp, "1");
			number2 = reverse(tmp);
		}
	}
	return(number2);
}

char *reverse(char *number) {
	char *reversed;
	reversed = malloc(BUFSIZ);

	strcpy(reversed, number);
	while(*++reversed);
	*--reversed = *number;
	while(*++number) *--reversed = *number;
	return(reversed);
}
