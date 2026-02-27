#include <stdio.h>

int fibo(int a){
    int n1=0;
    int n2=1;
    int n3=0;
    if(a==1)return 0;
    else if(a==2)return 1;
    for(int i=0;i<a-2;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;

    }
return n3;

}

int main(){

for (int i=1;i<=100;i++){
    printf("%d\n",fibo(i));
}



    return 0;
}