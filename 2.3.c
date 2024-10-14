#include<stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    printf("%.1f or %.1e\n",a,a);
    printf("+%.3f or %.3E\n",a);
    return 0;
}