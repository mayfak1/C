#include<stdio.h>

int main(){
    float const VOLUME_D=2.54;
    int volume;
    printf("Введите значиние роста в дюймах : ");
    scanf("%i",&volume);
    float res =VOLUME_D*volume;
    printf("Рост в сантиметрах : %f",res);
    return 0;
}
