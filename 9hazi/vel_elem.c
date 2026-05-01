#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int choice(const int n, const int tomb[]){

    int elem = tomb[rand() % n];
    return elem;
}
int main(){
srand(time(NULL));
int tomb[5] = {2, 5, 3, 4, 1};

printf("%d\n",choice(5,tomb));

    return 0;
}