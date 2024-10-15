#include<stdio.h>

int main(){
    const float KM_IN_MILE=1.609;
    const float LITR_IN_GL=3.785;
    float mil,gl;
    
    printf("Введите количество преодоленных миль: \n");
    scanf("%f",&mil);
    printf("Введите количество израсходованныз галлонов: \n");
    scanf("%f",&gl);
    printf("пройдено на 1 галлоне горючего: %.1f миль",mil/gl);
    
    return 0;
}