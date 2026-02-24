#include <stdio.h>
int main(){
 printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
 int pozdarab, a, pozosszeg;
 pozosszeg=0;
 pozdarab=0;
 float pozatlag=0;
 
       
    do{
        printf("Egész szám(végjel=0): ");
            scanf("%d",&a);
            if(a==0 && pozdarab==0){
                printf("Hiba: legalább egy pozitív számot meg kell adni!\n");
            }
                else if(a==0){
                    printf("\nA pozitív számok átlaga: %.2f\n",pozatlag);
                    break;
            }
                        else if(a>0){
                            pozdarab++;
                            pozosszeg=pozosszeg+a;
                            pozatlag=(float)pozosszeg/(float)pozdarab;
                    }
            
        }while(1);
            
            
            
            return 0;
        }