#include <stdio.h>
int main(){

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    
    int a;
    int tomb[100];
    int mennyi = 0;
    

    while (1)
    {   
        int vane = 0;
        printf("Szám: ");
        scanf("%d",&a);

        if (a == 0) break;
        else if (a < 1 || a > 99)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        }
        else 
        {
            for (int i = 0; i < mennyi; ++i)
            {
                if (a == tomb[i]) vane = 1;
            }
            if (vane == 0)
            {
                tomb[mennyi] = a;
                ++mennyi;
            }
        }
    }
    
    printf("\n%d db különböző szám lett megadva.\nEzek (növekvő sorrendben): ",mennyi);

    if (mennyi >= 2)
    {
        for (int i = 0; i < mennyi-1; ++i)
        {
            for (int j = i+1; j < mennyi; ++j)
            {
                if (tomb[i] > tomb[j])
                {
                    int tmp = tomb[i];
                    tomb[i] = tomb[j];
                    tomb[j] = tmp;
                }
            }
        }
    }
    if (mennyi > 0)
    {
        for (int i = 0; i < mennyi-1; ++i) printf("%d, ",tomb[i]);

        printf("%d",tomb[mennyi-1]);
    }

    printf("\n");

    return 0;
}