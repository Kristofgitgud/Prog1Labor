#include <stdio.h>
#include <math.h>
int main(){

            printf("Add meg a kör sugarát cm-ben \n");
            float a;
            float pi=acos(-1);
            scanf("%f",&a);
            float terulet=a*a*pi;
            float kerulet=2*a*pi;
            printf("A kör kerülete %f cm \nA kör területe %f cm\n",kerulet,terulet);
    return 0;
}