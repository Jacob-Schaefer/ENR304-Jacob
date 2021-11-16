#include <stdio.h>

int main (int argc, char **argv)
{

	int a = 88;
	int *b;
	b = &a;

	printf( "b = %d\n", *b);

	return 0;
}
