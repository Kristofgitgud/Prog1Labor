#include <stdio.h>
int main(){
 printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
 int osszeg, a;
 osszeg=0;
       
    do{
        printf("Egész szám(végjel=0): ");
            scanf("%d",&a);
            if(a==0){
                printf("\nElemek összege: %d\n",osszeg);
                break;
            }
            else{
                    osszeg=osszeg+a;

            }
        }while(1);
            
            
            
            return 0;
        }