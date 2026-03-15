#include <stdio.h>
#include "prog1.h"
int rfind_char(string s, char c){
    int i=0;
    int hely=-1;
    while(s[i]!='\0'){
        if(s[i]==c)hely=i;
        i++;
    }


    return hely;
}
int main(){

    printf("%d\n",rfind_char("kecske",'l'));
    return 0;
}