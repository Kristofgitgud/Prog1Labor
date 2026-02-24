#include <stdio.h>
int main(){
 printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
 int darab, a, osszeg;
 osszeg=0;
 darab=0;
 float atlag=0;
 
       
    do{
        printf("Egész szám(végjel=0): ");
            scanf("%d",&a);
            if(a==0 && darab==0){
                printf("Hiba: legalább egy számot meg kell adni!\n");
            }
                else if(a==0){
                    printf("\nA számok átlaga: %.2f\n",atlag);
                    break;
            }
                        else{
                         darab++;
                          osszeg=osszeg+a;
                          atlag=(float)osszeg/(float)darab;
                    }
            
        }while(1);
            
            
            
            return 0;
        }