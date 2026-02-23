#include <stdio.h>
#include <math.h>
int main(){

        printf("Adja meg a testsúlyát kg-ban, majd a magasságát cm-ben!\n");
          float suly,mag;
          
            printf("Testsúly (kg):");
        scanf("%f",&suly);
            printf("Magasság (cm):");
        scanf("%f",&mag);
            mag=mag/100;
           float bmi=(suly/(mag*mag));
        printf("Az ön testtömegindexe: %.1f\n", bmi);
       if(bmi>=20.5 && bmi<26.6) printf("Az Ön BMI-je a normál kategóriában van.\n");
       else if(bmi>=26.6 && bmi<32) printf("Az Ön BMI-je a túlsúlyos kategóriában van.\n");
       else if(bmi>=32 && bmi<37) printf("Az Ön BMI-je az I. fokú elhízás kategóriában van.\n");
       else if(bmi>=37 && bmi<42) printf("Az Ön BMI-je a II. fokú elhízás kategóriában van.\n");
       else if(bmi>42) printf("Az Ön BMI-je a III. fokú elhízás kategóriában van.\n");

       float idealf,ideala;

       idealf=26.5*(mag*mag);
       ideala=20.5*(mag*mag);
       printf("\nAz Ön idális testsúlytartománya:%.1f - %.1f kg\n",ideala,idealf);
       


        

    return 0;
}