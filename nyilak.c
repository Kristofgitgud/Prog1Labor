#include <stdio.h>
int main(){

        printf("Adj meg egy pozitív egész számot!\n");
        int szam;
        scanf ("%d",&szam);
        printf("\n");
        for (int i=1;i<=szam;i++){

                if(i!=szam) printf("%d -> ",i);
                else printf("%d\n",szam);

        }


    return 0;
}