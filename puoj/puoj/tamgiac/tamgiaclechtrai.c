// Tam giác lệch trái

#include <stdio.h>
 
int main() {
   int n,i,j;
   n = 6;
   
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= i; j++){
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
