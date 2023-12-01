#include <stdio.h>
#include <string.h>
int main(){
   int piramid;
   int p = 0;
   printf("Tinggi piramid = ");
   scanf("%d", &piramid);

   while (p < piramid){
      for (int q = 0; q <= p; q++){
         printf("#");
         }
   printf("\n");
  p++;
}
return 0;
}

