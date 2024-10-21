#include<stdio.h>
int main(){

    printf("Введите значение: ");
    int days;
    int weeks=0;
    int defDays=0;
    scanf("%d",&days);
    defDays=days;
    while(days>0){
        if((days/7)>=1){
            weeks=days/7;
            days-=7*weeks;
        }
        printf("%d дней составляет %d недели и %d дней\n",defDays,weeks,days);
        scanf("%d",&days);
        defDays=0;
        weeks=0;
    }
    return 0;
}