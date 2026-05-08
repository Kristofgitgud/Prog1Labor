#include <stdio.h>

#define AJTOKSZAMA 600

int main() {
    int ajtok[AJTOKSZAMA + 1] = {0}; 

    for (int j = 1; j <= AJTOKSZAMA; ++j) {
        
        for (int i = j; i <= AJTOKSZAMA; i += j) {
            ajtok[i] = 1 - ajtok[i];
        }
    }

    printf("A nyitott cellak sorszamai:\n");
    for (int i = 1; i <= AJTOKSZAMA; ++i) {
        if (ajtok[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}