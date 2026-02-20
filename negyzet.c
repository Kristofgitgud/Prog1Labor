#include <stdio.h>
int main(){

    printf("Add meg a négyzet oldalhosszát cm-ben!\n");
    int a;
    scanf("%d",&a);
    int kerulet=a*4;
    int terulet=a*a;
    printf("A négyzet területe %d négyzetcentiméter\n A négyzet kerülete %d centiméter\n",terulet, kerulet);

return 0;
}