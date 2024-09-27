#include <stdio.h>

   float obsah_kruhu (float r) {
    float pi = 3.14;
    float obsah_kruhu = pi * r *r;
    return pi * r * r;
   }

   void vypis_obsah_kruhu(float r){
    printf("%.10f\n", obsah_kruhu(r));
   }

int main(){
    /*for (int i = 0; i < 100000000000; i++)
    {
        printf("196.168.2.65\n");
    }*/

   //obsah = pi*r2
    /*printf("%.10f\n", obsah_kruhu(1.23));
    printf("%.10f\n", obsah_kruhu(5.1));
    printf("%.10f\n", obsah_kruhu(9.9));*/
   /*float pi = 3.14;
   float r;
   printf("Zadej hodnotu: \n");
   scanf("%f", &r);
   float obsah = pi * r * r;
   printf("Váš kruh má obsah: %.1f\n", obsah);
   if (obsah >= 10)
   {
    printf("Tento kruh je hodně velkej\n");
   }*/
  vypis_obsah_kruhu(2.5);
    return 0;
}