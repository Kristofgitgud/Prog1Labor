#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffle(int n, char tomb[]){

for (int i = n-1; i > 0; --i)
{
    int j = rand() % i;

    int temp = tomb[j];
    tomb[j] = tomb[i];
    tomb[i] = temp;
}
}
//----------------8 karakter, kisbetű, nagybetű, számjegy, speckó karakter--------------------
int main(){
    srand(time(NULL));
    
    int n = rand() % 5 + 8;

    char jelszo[n];
    int maradek = n;
    int kis = rand()%(maradek-3)+1;
    maradek = maradek-kis;
    int nagy = rand()%(maradek-2)+1;
    maradek = maradek-nagy;
    int szamj = rand()%(maradek-1)+1;
    maradek = maradek-szamj;
    int spec = maradek;
    //for (int i = 0; i < 40; ++i) printf("%d ",rand()%5+8);
    //printf("\n");
    char special[4] = {'.',',', ';', '\''};
    //printf("n=%d %d %d %d %d\n",n,kis,nagy,szamj,spec);
int i = 0; 
    for (int j = 0; j < kis; ++j)
    {
        jelszo[i] = rand() % 26 + 97;
        ++i;
    }
    for (int j = 0; j < nagy; ++j)
    {
        jelszo[i] = rand() % 26 + 65;
        ++i;
    }
    for (int j = 0; j < szamj; ++j)
    {
        jelszo[i] = rand() % 10 + 48;
        ++i;
    }
    for (int j = 0; j < spec; ++j)
    {
        jelszo[i] = special[rand() % 4];
        ++i;
    }
    shuffle(i,jelszo);
    jelszo[i] = '\0';
    printf("%s\n",jelszo);
    return 0;
}