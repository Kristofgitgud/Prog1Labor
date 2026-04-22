#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int lnagyobb;
    int lkisebb;
    float atlag;
} osszvissz;

osszvissz kiszamol(int tomb[], int n){
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
    osszvissz a;
    a.lnagyobb = max;
    a.lkisebb = min;
    a.atlag = osszeg / db;
    return a;
}

int main(){
    int tomb[10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        tomb[i] = rand()%90+10;
    }
    for (int i = 0; i < 10; ++i)
    {
        fprintf("%d ", tomb[i]);
    }
    puts("");
    osszvissz eredmeny = kiszamol(tomb,10);
    fprintf("Legnagyobb: %d\nLegkisebb: %d\nÁtlag: %f\n", eredmeny.lnagyobb, eredmeny.lkisebb, eredmeny.atlag);
    
    return 0;
}