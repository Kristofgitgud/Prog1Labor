#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    printf("Adj meg szavakat '*' végjelig!\n");

    char szavak[1000];
    int darab = 0;
    int legh = 0;

    while (1)
    {
        fgets (szavak, 1000, stdin);

        szavak[strlen(szavak)-1] = '\0';

        if (strcmp(szavak, "*") == 0) break;

        if (strlen(szavak) > legh) legh = strlen(szavak);
        darab++;

    }

    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből állt.\n", darab, legh);

    return 0;
}