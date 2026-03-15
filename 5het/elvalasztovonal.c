#include <stdio.h>
void line(char c,int m){
    for (int i=0;i<m;i++){
        printf("%c",c);
    }
    printf("\n");
}
int main(){
    printf("hello\n");
    line('/',17);
    printf("world\n");
    return 0;
}
