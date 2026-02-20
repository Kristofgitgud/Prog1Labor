#include <stdio.h>
int main(){

    int i=0;
    int a1=0;
        printf("fájl beolvasása\n");;
        
            do{
                
                scanf("%d,\n",&a1);
               
                i++;



            }while(a1!=0);
            i--;
            printf("%d darab szám volt\n",i);


    return 0;
}