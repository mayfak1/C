#include<stdio.h>
int main(){
    const int MIN_TO_HOUR=60;
    printf("Введите значение: ");
    int min;
    int h=0;
    scanf("%d",&min);
    while(min>0){
        if((min/MIN_TO_HOUR)>=1){
            h=min/MIN_TO_HOUR;
            min-=60*h;
        }
        printf("%d hour %d min\n",h,min);
        scanf("%d",&min);
        h=0;
    }
    return 0;
}