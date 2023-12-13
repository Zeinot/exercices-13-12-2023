#include <stdio.h>

int main() {
   int i, j, rows=5;
   printf("*\n");
   for(i=1; i<=rows; ++i, printf("\n"))
       for(j=1; j<=2*i; ++j)
           printf("*");
   return 0;
}
