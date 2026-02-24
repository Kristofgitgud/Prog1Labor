#include <stdio.h>
int main(){
 printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
 int pozitiv, a;
 pozitiv=0;;
    do{
        printf("Egész szám(végjel=0): ");
            scanf("%d",&a);
            if(a==0){
                printf("\nPozitív elemek száma: %d\n",pozitiv);
                break;
            }
            else if(a>0){
                    pozitiv++;

            }
        }while(1);
            
            
            
            return 0;
        }