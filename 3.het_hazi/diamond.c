#include <stdio.h>
int main(){

    printf("Add meg a gyémánt magasságát: ");
    int a;
    scanf("%d",&a);
    if(a%2==0 || a<0)printf("Hiba:a program csak pozitív páratlan szám lehet.\n");
    else{

            int spacek=a/2;
            int csillagok=1;
            for(int i=0;i<a;i++){
                for(int j=0;j<spacek;j++){
                    printf(" ");
                }
                for(int j=0;j<csillagok;j++){
                    printf("*");
                }
                for(int j=0;j<spacek;j++){
                    printf(" ");
                }
                printf("\n");
                    if(i<(a/2)){
                        spacek--;
                        csillagok=csillagok+2;
                    }
                    else{
                        spacek++;
                        csillagok=csillagok-2;
                    }
            }







    }




    return 0;
}