#include<stdio.h>

int main(){
    char name[20];
    printf("Введите свое имя : \n");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    return 0;
}