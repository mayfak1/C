#include<stdio.h>
int main(){
    printf("Введите число:");
    int num;
    scanf("%d",&num);
    for (int i = num; i <= num+10; i++)
    {
        printf("%d ",i);
    }
    
    return 0;
}