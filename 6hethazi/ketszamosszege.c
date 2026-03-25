#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
    if (argc != 3) fprintf (stderr,"Hiba! két számot adjon meg!\n");

    else
    { 
    int a = atoi (argv[1]);
    int b = atoi (argv[2]);
    printf ("%d\n",a+b);
    }

    return 0;
}