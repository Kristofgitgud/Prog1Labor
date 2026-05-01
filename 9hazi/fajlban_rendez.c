#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    if (argc != 2) {
    fprintf(stderr,"Hiba! adja meg egy szöveges állomány nevét!\n");
    return 1;
    }
    int i = 0;
    char sor[10000000];
    int szamtomb[10000000]={0};
    FILE *fp = fopen(argv[1],"r");
    while(fgets(sor, 1000, fp) != NULL)
    {
        szamtomb[i] = atoi(sor);
        ++i;
    }

    for (int j = 0; j < i-1; ++j)
    {
        for (int l = j+1; l < i; ++l)
        {
            if (szamtomb[j] > szamtomb[l])
            {
                int temp = szamtomb[j];
                szamtomb[j] = szamtomb[l];
                szamtomb[l] = temp;
            }   
        }
    }

    for (int j = 0; j < i; ++j)
    {
        printf("%d\n",szamtomb[j]);
    }


    return 0;
}