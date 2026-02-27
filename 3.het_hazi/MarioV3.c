#include <stdio.h>
int main(){

        printf("Add meg a kirajzolandó háromszögek magasságát!\n");
        int a;
        scanf("%d",&a);
        printf("\n");
            for(int i=1;i<=a;i++){
                for(int k=a;k>i;k--){
                    printf(" ");
                }
                for(int j=0;j<i;j++){
                    printf("#");
                }
                printf("  ");
                        
                        for(int j=0;j<i;j++){
                        printf("#");
              
            }

                printf("\n");
            }

                    //WORK-IN-PROGRESS

    return 0;
}