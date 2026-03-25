#include <stdio.h>
int main(){

    int darab;
  
    printf("Hány db számot akarsz megadni?\n");
    
    scanf("%d",&darab);

    int tomb[darab];

    for(int i = 0;i < darab; ++i)
    {
        printf("%d. szám:",i+1);

        scanf("%d", &tomb[i]);
    }

    int absz[darab];
    
    for(int i = 0; i < darab; ++i)
    {
        if (tomb[i] < 0)
        {
            absz[i] = -tomb[i];
        }
        else
        {
            absz[i] = tomb[i];
        }
    }
    printf("A bevitt számok abszolutértékei: ");

    for (int i = 0; i < darab-1; ++i)
    {
        printf("%d, ",absz[i]);
    }
    printf("%d\n",absz[darab-1]);

    printf("A megadott számok: ");

    for (int i = 0; i < darab-1; ++i)
    {
        printf("%d, ",tomb[i]);
    }
    printf("%d\n",tomb[darab-1]);

    return 0;
}