#include "prog1.h"
#include <stdio.h>
#include <string.h>

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):
*/

int match_ends(int n, string words[]){
    int j;
    int hossz;
    int elemek_szama=0;
    for (int i=0;i<n;++i){
        j=0;
        while(words[i][j]!='\0'){
            j++;

        }
        if(j>=2 && words[i][0]==words[i][j-1])elemek_szama++;
    }
return elemek_szama;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    // match_ends() meghívása itt...
   printf("%d\n",match_ends(szavak1_meret,szavak1)); 

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}