#include<stdio.h>
#include<float.h>
int main(){
    double d = 1.0/0.3;
    float f = 1.0/0.3;
    printf("%.4f and %.4f\n",f,d);
    printf("%.12f and %.12f\n",f,d);
    printf("%.16f and %.16f\n",f,d);
    printf("%f=%d ? and %f=%d ?\n",f,FLT_DIG,d,DBL_DIG);
    return 0;
}