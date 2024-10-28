#include<stdio.h>
int main(){
    char alf[27];
    alf[26]='\0';
    for(char i =97;i<=122;i++){
        int s=0;
        alf[s]=i;
        printf("%c ",alf[s]);
        s++;
        }

    return 0;
}