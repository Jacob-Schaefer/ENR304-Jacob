#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char **argv)
{
	unsigned long long answer = 1;
	int n = 0;
	n = atoi(argv[1]);
	for (int k=1; k<=n; k++)
		answer=answer*k;
	printf("%d\t%lld\t%f\n", n, answer, log(answer));
	return 0;
}
