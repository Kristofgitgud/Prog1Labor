#include <stdio.h>
#include <stdlib.h>
int main(){
    int mennyiseg = 0;
    FILE *fp = fopen("in.txt","r");
    if (fp == NULL)
    {
        fprintf(stderr,"Hiba az állomány megnyitásakor.");
        return 1;
    }
    else
    {
        fprintf(stdout,"# in.txt sikeresen megnyitva\n");
    }
    fprintf(stdout,"# 0,5-nél nagyobb számok szűrése...\n");
    FILE *fp2 = fopen("out.txt","w");
    char szam[500];
    while (fgets(szam, 500, fp) != NULL)
    {
        if (atof(szam) > 0.5)
        {
        fprintf(fp2,"%s",szam);
        ++mennyiseg;
        }
    }
    fprintf(stdout,"# szűrés vége\n");
    fclose(fp);
    fclose(fp2);
    fprintf(stdout,"# out.txt bezárva\n# out.txt -be kiírt számok mennyisége: %d darab\n",mennyiseg);
    return 0;
}