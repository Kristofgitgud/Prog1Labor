#include <stdio.h>
int karcolo(int T[],int meret){
    int osszeg=0;
    for(int i=0;i<meret-1;i++){
        if(T[i]<T[i+1])osszeg=osszeg+(T[i+1]-T[i]);
        else osszeg=osszeg+(T[i]-T[i+1]);
    }
    return osszeg;
}
int index_(int T[],int meret,int elem){
    for(int i=0;i<meret;i++){
        if(elem==T[i])return i;

    }
    return -1;
}
int contains(int T[],int meret,int elem){
    for(int i=0;i<meret;i++){
        if(elem==T[i])return 1;

    }
    return 0;
}
void csere(int T[],int meret){
    for(int i=0;i<meret;i++){
        if(T[i]<0)T[i]=-T[i];
    }
}
void elemei(int T[],int meret){
    int i;
    if (meret>0){
    for(i=0;i<meret-1;i++){
        printf("%d, ",T[i]);
    }
    printf("%d\n",T[i]);
}
}
int Tmin(int T[],int m){
    int min=T[0];
    for (int i=0;i<m;++i){
        if(T[i]<min)min=T[i];
    }
    return min;
}
int Tmax(int T[],int m){
    int max=T[0];
    for (int i=0;i<m;++i){
        if(T[i]>max)max=T[i];
    }
    return max;
}
int rendezett(int T[], int m){
    if(m==0)return 1;
for(int i=0;i<m-1;++i){
    if(T[i]>T[i+1])return 0;
}
return 1;


}
int is_odd(int n){
    if(n%2==0)return 0;
    else return 1;
}
int is_even(int n){
    if(n%2==0)return 1;
    else return 0;
}
int valid_triangle(float a, float b, float c){
    if (a<0 || b<0 || c<0) return 0;
    else if (a+b>c && a+c>b && b+c>a) return 1;
    else return 0;
}
int main(){

//printf("%d\n",valid_triangle(-1,-1,-1));
//printf("%d\n",is_even(1));

//rendezett tömb
int tomb[]={1,-3,2,-5};
int meret=4;
//printf("%d\n",rendezett(tomb,meret));

//printf("%d\n",Tmin(tomb,meret));
//elemei(tomb,4);

//pozitiv
elemei(tomb,4);
csere(tomb,4);
elemei(tomb,4);
//printf("\n%d\n",contains(tomb,4,0));
printf("\n%d\n",index_(tomb,4,0));

        int ezhn[]={1, 7, 9, 7, 6, 9, 3, 1, 3, 4, 8, 6, 2, 3, 1, 5, 9, 0, 7, 7, 2, 9, 3, 0, 5, 1, 9, 0, 7, 8, 9, 0, 2, 4, 7, 3, 3, 6, 1, 7, 9, 7, 6, 9, 7, 8, 9, 4, 2, 3, 0, 6, 5, 7, 2, 7, 3, 4, 3, 0, 0, 8, 1, 1, 5, 7, 7, 3, 2, 6, 7, 5, 8, 0, 5, 5, 0, 0, 9, 6, 3, 1, 3, 2, 7, 0, 8, 4, 7, 7, 3, 2, 2, 4, 0, 7, 5, 3, 6, 0, 2, 1, 1, 2, 0, 1, 1, 3, 8, 7, 9, 8, 7, 1, 3, 9, 3, 3, 5, 7, 6, 5, 8, 7, 8, 9, 7, 6, 8, 8, 1, 4, 4, 1, 6, 6, 2, 2, 4, 9, 2, 8, 4, 7, 4, 3, 0, 6, 3, 9, 4, 7, 4, 1, 2, 4, 3, 7, 7, 7, 6, 7, 8, 9, 3, 4, 2, 4, 8, 6, 5, 4, 8, 5, 2, 7, 6, 3, 0, 2, 2, 1, 9, 6, 0, 1, 2, 4, 6, 0, 9, 4, 1, 1, 9, 4, 5, 3, 0, 8, 2, 9, 5, 2, 0, 8, 5, 0, 0, 5, 7, 6, 8, 8, 3, 8, 1, 5, 0, 6, 8, 2, 3, 4, 2, 4, 6, 2, 8, 8, 1, 4, 7, 3, 9, 1, 3, 1, 1, 0, 5, 4, 0, 8, 2, 7, 2, 3, 7, 1, 6, 3, 3, 5, 0, 5, 1, 0, 6, 8, 4, 5, 8, 6, 2, 9, 8, 2, 3, 9, 9, 4, 7, 2, 4, 5, 9, 3, 8, 4, 7, 9, 7, 1, 6, 3, 0, 4, 8, 3, 5, 3, 5, 6, 3, 2, 9, 6, 2, 4, 2, 2, 4, 1, 3, 7, 2, 1, 6};

        int meret2=309;
        printf("\n%d\n",karcolo(ezhn,meret2));
    return 0;
}