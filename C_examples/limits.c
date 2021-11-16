#include <stdio.h>
#include <assert.h>
#include <limits.h>

int main(int argc, char **argv){

   int k = INT_MAX;
   long int l = LONG_MAX;
   long long int m = LLONG_MAX;

   printf("\t  Sizes on your Computer:\n\n");
   printf("  int = %ld bits\n", sizeof(int)*8);
   printf("  unsigned int = %ld bits\n", sizeof(int)*8);
   printf("  float = %ld bits\n", sizeof(float)*8);
   printf("  char = %ld bits\n", sizeof(char)*8);
   printf("  long = %ld bits\n", sizeof(long)*8);
   printf("  unsigned long = %ld bits\n", sizeof(unsigned long)*8);
   printf("  double = %ld bits\n\n", sizeof(double)*8);
   printf("  Largest int representable = %d\n", INT_MAX);
   printf("  Smallest int representable = %d\n", INT_MIN);
   printf("  Add 1 to INT_MAX gives: ");
   printf("%d + 1 = %d\n\n", k,k+1);
   printf("  Largest long int representable = %ld\n", LONG_MAX);
   printf("  Smallest long int representable = %ld\n", LONG_MIN);
   printf("  Add 1 to LONG_MAX gives: ");
   printf("%ld + 1 = %ld\n\n", l,l+1);
   printf("  Largest long long int representable = %lld\n", LLONG_MAX);
   printf("  Smallest long long int representable = %lld\n", LLONG_MIN);
   printf("  Add 1 to LLONG_MAX gives: ");
   printf("%lld + 1 = %lld\n\n", m,m+1);

   return 0;
}
