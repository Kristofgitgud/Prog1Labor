#include <stdio.h>
int main(){

        int a=0;
        int b=0;
        int c=1;
        printf("for-ral\n");
        for (int i=0;i<10;i++){
            printf("%d\n",a);
            a=b+c;
            c=b;
            b=a;
            
        };

            printf("while-al\n");
        int i=0;
        a=0;
        b=0;
        c=1;
        while(i<10){
            printf("%d\n",a);
            a=b+c;
            c=b;
            b=a;
            i++;
        }

    return 0;
}