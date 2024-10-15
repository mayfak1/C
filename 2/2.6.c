#include<stdio.h>
#include<string.h>
int main(){
    char name[20],surname[20];
    printf("Введите свое имя и фамилию: \n");
    scanf("%s %s",name,surname);
    int lenName=strlen(name);
    int lenSrName=strlen(surname);
    printf("%*d %*d\n",lenName,lenName,lenSrName,lenSrName);
    printf("%s %s\n",name,surname);
    printf("%-*d %-*d",lenName,lenName,lenSrName,lenSrName);
    return 0;
}