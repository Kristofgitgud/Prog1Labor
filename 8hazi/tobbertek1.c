#include <stdio.h>
#include <stdlib.h>
void tobbertek(int tomb[],int n, int *p1, int *p2, float *p3){
    int min=tomb[0];
    int max=tomb[0];
    int db=0;
    int osszeg=0;
    for (int i = 0; i < n; ++i)
    {
        if (tomb[i] < min) min=tomb[i]; 
        else if (tomb[i] > max) max=tomb[i];
        ++db;
        osszeg+=tomb[i];
    }
    *p1 = max;
    *p2 = min;
    *p3 = osszeg/db;
}
int main(){
    int lnagyobb, lkisebb;
    float atlag;
    int tomb[10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        tomb[i] = rand()%90+10;
    }
    tobbertek(tomb, 10, &lnagyobb, &lkisebb, &atlag);
    for (int i = 0; i < 10; ++i)
    {
        fprintf("%d ", tomb[i]);
    }
    puts("");
    
    fprintf("\nLegnagyobb: %d\nLegkisebb: %d\nAtlag: %f\n",lnagyobb,lkisebb,atlag);
    return 0;
}