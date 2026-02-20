#include <stdio.h>
int main(){
    int n=0;
    int a1=0;
    int a2=0;
    int a3=0;
        printf("fájl beolvasása\n");
        scanf("%d\n",&n);
        for(int i=0;i<n;i++){
            scanf("%d %d %d\n",&a1,&a2,&a3);
            if(a1>a2 && a1>a3) printf("A legnagyobb szám %d\n",a1);
            if(a2>a1 && a2>a3) printf("A legnagyobb szám %d\n",a2);
            else printf("A legnagyobb szám %d\n",a3);
        }
       


    return 0;
}