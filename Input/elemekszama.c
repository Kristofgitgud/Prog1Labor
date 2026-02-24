#include <stdio.h>
int main(){
 printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
 int db, a;
 db=0;
        //do-while-al
    do{
        printf("Egész szám(végjel=0): ");
            scanf("%d",&a);
            if(a==0){
                printf("\nElemek száma: %d\n",db);
                break;
            }
            else{
                    db=db+1;

            }
            




    }while (1);

                    //Ha a 0 literál kétszer is szerepel, az több memóriát foglal.

                //while-al

                int darab, b;
                darab=0;
                b=1;
                printf("Adj meg tetszőlegesen sok számot, '0' végjellel\n");
        while(b!=0){
            printf("Egész szám(végjel=0): ");
                scanf("%d",&a);
                if(a==0){
                printf("\nElemek száma: %d\n",darab);
                break;
                }
                else{
                    darab=darab+1;
                    }
                };






    return 0;
}