#include <stdio.h>
#include <stdlib.h>
void kiirat(int n, int tomb[]){
    for (int i = 0; i < n; ++i)
    {
        printf("%d ",tomb[i]);
    }
    printf("\n\n");
}
// Durstenfeld's shuffle algorithm
// helyben módosít
void shuffle(int n, int tomb[]){

for (int i = n-1; i > 0; --i)
{
    int j = rand() % i;

    int temp = tomb[j];
    tomb[j] = tomb[i];
    tomb[i] = temp;
}


}
int main(){

    int tomb[5] = {7, 3, 5, 1, 12};
    kiirat(5, tomb);
    shuffle(5, tomb);
    kiirat(5, tomb);
    return 0;
}