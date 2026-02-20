#include <stdio.h>
int main(){

            printf("...\n");
            for (int i=32;i<=126;i++){
                    char code=(char)i;
                    printf("%d: %c\n",i,code);


            }
                printf("...\n");


                int osszeg=0;
                for(int i=65;i<=90;i++){

                    osszeg=osszeg+i;
                }

                    printf("Az angol ABC nagybetűihez tartozó ASCII értékek összege: %d\n",osszeg);

                //65-90ig
    return 0;
}