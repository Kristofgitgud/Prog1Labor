#include <stdio.h>
#include <stdlib.h>
int main(){
long double osszeg = 0;
char szam[1000];
    FILE *fp = fopen("valos_szamok.txt", "r");
    while (fgets(szam,1000,fp) != NULL)
    {
        
        for (int j = 0; szam[j] != '\0'; ++j)
        {
            if (szam[j] == ',') szam[j] = '.';
        }
        
        long double a = atof(szam);

        osszeg += a;
    }
    fprintf("A számok összege: %.20Lf\n",osszeg);
    fclose(fp);
    return 0;
}