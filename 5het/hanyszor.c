#include <stdio.h>
#include "prog1.h"
int char_count(string s, char c){
    int i=0;
    int db=0;
    while(s[i]!='\0'){
        if(s[i]==c)db++;
        i++;
    }


    return db;
}
int main(){

    printf("%d\n",char_count("kecske",'e'));
    return 0;
}