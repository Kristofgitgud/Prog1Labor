#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    if (argc < 2)
    {
        fprintf(stderr,"Hiba! nem adtál meg egyetlen szót sem.\n");
        return 1;
    } 
    int lrh = strlen(argv[1]);
    
    for (int i = 2; i < argc; ++i)
    {
        if (lrh > strlen(argv[i]))
        {
            lrh = strlen(argv[i]);
        }
    }
    for (int i = 1; i < argc; ++i)
    {
        if (strlen(argv[i]) == lrh)
        {
            fprintf(stdout,"%s\n",argv[i]);
        }
    }

    return 0;
}