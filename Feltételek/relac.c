#include <stdio.h>
int main(){

        printf("Adjon meg két pozitív egész számot!\n");
        int n1,n2;
        scanf("%d\n%d",&n1,&n2);
        if (n1==n2) printf("=\n");
        else if (n1>n2) printf(">\n");
        else printf("<\n");


    return 0;
}