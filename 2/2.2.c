#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Введите свое имя : \n");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    int l=strlen(name)+3;
    printf("%-*s",l,name);
    return 0;
}