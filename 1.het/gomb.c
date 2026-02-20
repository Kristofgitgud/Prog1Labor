#include <stdio.h>
#include <math.h>
int main(){

            printf("Add meg a gömb sugarát cm-ben \n");
            float a;
            float pi=acos(-1);
            scanf("%f",&a);
            float terfogat=4*pi*a*a*a/3;
            float felszin=4*pi*a*a;
            printf("A kör felszine %f cm \nA kör terfogata %f cm\n",felszin,terfogat);
    return 0;
}