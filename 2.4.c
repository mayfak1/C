#include<stdio.h>

int main(){
    float height;
    char name[20];
    printf("Введите свой рост: \n");
    scanf("%f",&height);
    printf("Введите ваше имя: ");
    scanf("%s",name);
    printf("%s,ваш рост составялет %.2f метров",name,height/100);
    return 0;
}