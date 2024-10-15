#include<stdio.h>
#include<math.h>
int main(){
    float const VOLUME_M=3.0*pow(10,-23);
    int volume;
    printf("Введите значение объема воды в квартах : ");
    scanf("%i",&volume);
    float res =( volume*950)/VOLUME_M;
    printf("Количество молекул воды : %f",res);
    return 0;
}
