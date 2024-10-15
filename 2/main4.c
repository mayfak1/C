#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void){
    int i=INT_MAX;
    printf("Переполнение целого числа:\n");
    printf("a = %d, b = %d, a + b = %d\n", i,1, i+1);
    float b = FLT_MAX;
    float minB=FLT_MIN;
    printf("Переполнение числа с плавающей запятой:\n");
    printf("a = %e, b = 2, a * b = %e\n", b,b*2);
    printf("Потеря значимости числа с плвающей запятой: \n");
    printf("a = %e, b = 2, a / b = %e\n", minB, minB / 2);

return 0;
}

