#include<stdio.h>

int main(){
    char name[20],surname[20];
    printf("Введите свое имя и фамилию: \n");
    scanf("%s %s",name,surname);
    printf("%s %s",surname,name);
    return 0;
}