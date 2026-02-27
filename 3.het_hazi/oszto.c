#include <stdio.h>

int oszto(int a){

    for(int i=a-1;i>0;i--){
        if(a%i==0)return i;
    }
}
int main(){
    for(int i=1;i<=50;i++){
        printf("%d\n",oszto(i));

    }


    return 0;
}