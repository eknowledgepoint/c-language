#include <stdio.h>
int main() {
   int i;

   for (i = 1; i <= 10; ++i) {
      if (i == 5) {
         break;
      }
      printf("The Number Print:%d\n",i);
   }
   return 0;
}
