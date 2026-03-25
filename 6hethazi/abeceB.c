#include <stdio.h>
#include <string.h>
void feltolt(char T[]){
int j=0;
    for (int i = (int)'a'; i <= (int)'z'; i++)
    {
        T[j] = (char)i;
        j++;
    }
    T[j]='\0';
}
int main()
{
    char tomb [100];
    feltolt (tomb);
    printf ("%s\n",tomb);
    int i = 0;

    return 0;
}