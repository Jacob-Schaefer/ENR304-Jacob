#include <stdio.h>

int main(int argc, char **argv) 
{ 
	char s;
	printf("My name is Jacob\n");
	printf("Whats your name?\n");
	scanf("%c", &s );
	printf("Your name is:");
	printf("%c", &s ); 
	printf("\n");
	return 0;
}
