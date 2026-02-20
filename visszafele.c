#include <stdio.h>
int main(){

         printf("Adj meg egy pozitív egész számot!\n");
        int szam;
        scanf ("%d",&szam);
        printf("\n");
        for(int i=szam;i>=1;i--){
            if(i%2==1) printf("%d\n",i);
        }




    return 0;
}