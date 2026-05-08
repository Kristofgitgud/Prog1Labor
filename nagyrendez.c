#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(a, bal, j);
    if (i < jobb) quicksort(a, i, jobb);
}

void kiir_tomb(int n, int tomb[]){
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n",tomb[i]);
    }
}

int main(int argc, char* argv[]){
    if (argc != 2)
    {
        fprintf(stderr,"Hiba! a program egy szöveges állomány nevét várta!\n");
        return 1;
    }
    FILE *fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        fprintf(stderr,"Hiba szöveges állomány megnyitása közben.\n");
        return 1;
    }

    char szamok[1000];
    int darab = 1;
    int* szamtomb = malloc(1*sizeof(int));

    while (fgets(szamok, 1000, fp) != NULL)
    {
        szamtomb = realloc(szamtomb, darab*sizeof(int));
        szamtomb[darab-1] = atoi(szamok);
        ++darab;
    }

    quicksort(szamtomb,0,darab-1);
    kiir_tomb(darab-1,szamtomb);

    fclose(fp);
    free(szamtomb);
    return 0;
}