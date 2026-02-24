#include <stdio.h>
int main(){
 printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
 int darab, a, osszeg;
 osszeg=0;
 darab=0;
 
       
    do{
        printf("Egész szám(végjel=0): ");
            scanf("%d",&a);
            if(a==0 && darab==0){
                printf("Hiba: legalább egy számot meg kell adni!\n");
            }
                else if(a==0){
                    printf("\nA számok abszolútértékének összege: %d\n",osszeg);
                    break;
            }
                        else if(a>0){
                         darab++;
                          osszeg=osszeg+a;
                    }
                                    else{
                                darab++;
                                osszeg=osszeg-a;
                    }
            
        }while(1);
            
            
            
            return 0;
        }