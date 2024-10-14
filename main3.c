#include<stdio.h>

int main(){

    float volume;
    printf("Введите объем в чашках : ");
    scanf("%f",&volume);
    float volumePints;
    volumePints=volume/2;
    printf("Объем в пинтах: %.2f\n",volumePints);
    printf("Объем в чашках: %.2f\n",volume);
    printf("Объем в унциях: %.2f\n",volume*8);
    printf("Объем в столовых ложках: %.2f\n",volume*16);
    printf("Объем в чайных ложках: %.2f\n",volume*48);
    return 0;
}
