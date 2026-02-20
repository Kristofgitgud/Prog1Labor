#include <stdio.h>
int main(){
    int ossz=0;
        for(int i=1;i<1000;i++){
            if(i%3==0 || i%5==0) ossz=ossz+i;


        }

            printf("Az ezernél kisebb, 3-mal vagy 5-tel osztható számok összege: %d\n",ossz);
    return 0;
}