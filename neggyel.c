#include <stdio.h>
int main(){

        printf("Adj meg egy pozitív egész számot!\n");
        int szam;
        scanf ("%d",&szam);

            for(int i=1;i<=szam;i++){
                if(i%4==0) printf("%d\n",i);
            }



    return 0;
}