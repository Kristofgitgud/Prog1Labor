#include <stdio.h>
int main(){
int szam=0;
  printf("Adj meg egy pozitív egész számot!\n");
    while (szam<1){

        scanf("%d",&szam);
            if(szam<1)printf("-->Ez nem pozitív egész szám\n");
    }

    printf("A pozitív egész szám: %d\n",szam);


    return 0;
}