#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int mennyit, also, felso;

    printf("Hány db random számot kérsz?\n");

    scanf("%d",&mennyit);

    printf("Alsó határ: ");

    scanf("%d",&also);

    printf("Felső határ (zárt intervallum): ");

    scanf("%d",&felso);

    printf("A generált számok: ");

    srand(time(NULL));

    for (int i = 0; i < mennyit; ++i)
    {
        printf("%d ",also+rand()%(felso+1-also));
    }

    printf("\n");

    return 0;
}
