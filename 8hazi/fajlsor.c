#include <stdio.h>
int get_number_of_lines(FILE *fp){
    int sorok = 0;
    char sor[100];
    while (fgets(sor, 100, fp) != NULL)
    {
        ++sorok;
    }
    return sorok;
}

int main(int argc, char* argv[]){
    if (argc != 2 || fopen(argv[1],"r") == NULL)
    {
        fprintf(stderr,"Hiba! add meg egy szöveges állomány nevét!\n");
        return 1;   
    }
    FILE *fp = fopen(argv[1],"r");
    
    fprintf("%d\n",get_number_of_lines(fp));

    fclose(fp);
    return 0;
}