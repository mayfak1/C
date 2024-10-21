#include<stdio.h>
int main(){
    printf("Введите высоту в сантиметрах: ");
    float centimeters,feet,inches;
    scanf("%f",&centimeters);
    printf("%f см = %f футов, %f дюймов\n",centimeters,centimeters/30.48,centimeters/2.54);
    while(centimeters>0){
        printf("Введите высоту в сантиметрах (<=О для выхода из программы): ");
        scanf("%f",&centimeters);
        if(centimeters<=0){
            printf("Работа завершена");
            break;}
        printf("%f см = %f футов, %f дюймов\n",centimeters,centimeters/30.48,centimeters/2.54);
    }
   // printf("Работа завершена");
    return 0;
}