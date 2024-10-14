#include<stdio.h>

int main(){
    float speed,size;
    printf("Введите скорость загрузки: \n");
    scanf("%f",&speed);
    printf("Введите размер файла: \n");
    scanf("%f",&size);
    printf("файл загружается за %.3f\n",(size*8)/speed);
    return 0;
}