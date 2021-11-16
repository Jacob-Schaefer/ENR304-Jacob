#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	float x0 = atof(argv[1]);
	float x = 0;
	int i =0;	
	while (x != x0){
		x = x0;
		x0 = 3-1/x0;
		i++;
	}

	printf("after %d iterations, x = %0.10f\n",i, x0);
	return 0;
}
