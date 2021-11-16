#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double x0 = atof(argv[1]);
	double x = 0;
	int i =0;	
	while (x != x0){
		x = x0;
		x0 = (x0*x0 + 1)/3;
		i++;
	}

	printf("after %d iterations, x = %0.10f\n",i, x0);
	return 0;
}
