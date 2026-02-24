#include <stdio.h>
#include <math.h>
int main(){

        printf("Adj meg egy egész számot, egy aritmetikai műveletet, majd még egy egész számot\n");
        int n1,n2,ossz;
        char jel;
        scanf("%d\n%c\n%d",&n1,&jel,&n2);
        float oszt1=n1;
        float oszt2=n2;
        float ossz2;
       
            if(jel=='+')ossz=n1+n2;
            else if(jel=='-')ossz=n1-n2;
            else if(jel=='*')ossz=n1*n2;
            else if(jel=='/')ossz2=oszt1/oszt2;
            else if(jel=='%')ossz=n1%n2;

            if(jel=='/')printf("Eredmény: %f\n",ossz2);
            else printf("Eredmény: %d\n",ossz);
            

    return 0;
}