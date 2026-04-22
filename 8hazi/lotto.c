#include <stdio.h>
#include <stdlib.h>
void bubblesort(int tomb[], int n){
    int temp;
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (tomb[i]>tomb[j])
            {
                temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}
void kiir_tomb(int n, int tomb[]){
    for (int i = 0; i < n; ++i){
        fprintf("%d ",tomb[i]);
    }
    puts("");
}
int contains(int n, int tomb[], int szam){
    for (int i = 0; i < n; ++i)
    {
        if (szam == tomb[i]) return 1;
    }
    return 0;
}
int main(){
    fprintf("Hány számot kérsz?\n");
    int db, also, felso, random;

    scanf("%d",&db);
    fprintf("Alsó határ: ");
    scanf("%d",&also);
    fprintf("Felső határ (zárt intervallum): ");
    scanf("%d",&felso);

    int tomb[db];
    for (int i = 0; i < db; ++i)
    {
        while(1)
        {
            int a = rand()%(felso-also+1)+also;
            if (!contains(db, tomb, a))
            {
                tomb[i] = a;
                break;
            }
        }
    }
    bubblesort(tomb, db);
    kiir_tomb(db, tomb);
    return 0;
}