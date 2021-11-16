#include <stdio.h>
#include <stdlib.h>

int usage(char *name);
float usage(float i, float j);
int main(int argc, char **argv){
if(argc != 3) return usage(argv[0]);


float i,j;

 i = atof(argv[1]);
 j = atof(argv[2]);

//printf("Enter a number: ");
//scanf("%f",&i);

//printf("Enter another number: ");
//scanf("%f",&j);

printf("The bigger one is: %0.2f\n", max(i,j));

return 0;
}


float max(float i, float j){
if(i>j) return(i);
else return(j);
}

int usage(char *name) {
	fprintf(stderr,"Usage: %s num1 num2\n",name);
	return 1;
}
