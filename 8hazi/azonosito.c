#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_valid_c_identifier(const char* input){
    int hossz = strlen(input);
    if (hossz == 0) return 0;

    if (!(isalpha(input[0]) || (input[0] == '_'))) return 0;

    for (int i = 0; i < hossz; ++i)
    {
        if (!(isalnum(input[i]) || input[i] == '_'))
        {
            return 0;
        }
    }

    return 1;
}
int main(){
    fprintf("Adj meg stringeket * végjelig!\n");
    while (1)
    {
        fprintf("Input: ");
        char input[100];
        fgets(input, 100, stdin);
        input[strlen(input)-1] = '\0';
        if (strcmp(input, "*") == 0) break;
        if (is_valid_c_identifier(input))
        {
            fprintf("YES\n\n");
        }
        else
        {
            fprintf("NO\n\n");
        }
    }


    return 0;
}