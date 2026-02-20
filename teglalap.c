#include <stdio.h>
int main(){

    printf("Add meg a téglalap oldalhosszait cm-ben!\n");
    int a;
    int b;
    scanf("%d \n %d",&a ,&b);
    int kerulet=a*2+b*2;
    int terulet=a*b;
    printf("A téglalap területe %d négyzetcentiméter\n A téglalap kerülete %d centiméter\n",terulet, kerulet);

return 0;
}