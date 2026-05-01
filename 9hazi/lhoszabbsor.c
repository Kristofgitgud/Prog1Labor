#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(int argc, char *argv[]){
    if (argc != 4)
    {
        fprintf(stderr,"Hiba! három egész számot adj meg!\n");
        return 1;
    }
    srand(time(NULL));
    FILE *fp = fopen("pelda.txt","w");
    char sor[atoi(argv[3])];
    int sorok_szama = atoi(argv[1]);
    int sormin = atoi(argv[2]);
    int sormax = atoi(argv[3]);
    for (int i = 0; i < sorok_szama; ++i)
    {
        for (int j = 0; j < rand()%(sormax-1)+sormin; ++j)
        {
            fprintf(fp,"%c",rand()%94+32);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
    fp = fopen("pelda.txt","r");
    int maxhossz = 0;
    int indexe = 0;
    for (int i = 1; i <= sorok_szama; ++i)
    {
        fgets(sor,atoi(argv[3])+1,fp);
        if (strlen(sor) > maxhossz) 
        {
        maxhossz = strlen(sor)-1;
        indexe = i;
        }
    }
    printf("A leghosszabb sor indexe: %d, hossza: %d\n",indexe,maxhossz);
    fclose(fp);
    return 0;
}
