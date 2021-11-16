#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>

int usage(char *name){
	printf("Usage: %s <integer>\n", name);
	return 1;
}

int main(int argc, char **argv){


if (argc != 2) return usage(argv[0]);
int T = atoi(argv[1]);

//printf("Please enter in a value: ");
//scanf("%d", &T );

for(int i=0; i<=T; i++){
printf("%d %f\t",i,3.14*i*i);
//sleep(0.5);
}
printf("\n");
return 0;

}
