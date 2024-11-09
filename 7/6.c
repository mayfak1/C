#include<stdio.h>

void sort(double* n1,double*n2,double*n3);
int main(){
    double num1,num2,num3;
    scanf("%lf",&num1);
    scanf("%lf",&num2);
    scanf("%lf",&num3);
    sort(&num1,&num2,&num3);
    return 0;
}
void sort(double* n1,double*n2,double*n3){
    double per;
    
    if(*n1>*n2){
        per=*n2;
        *n2=*n1;
        *n1=per;
    }
    if(*n2>*n3){
        per=*n3;
        *n3=*n2;
        *n2=per;
    }
    if(*n1>*n2){
        per=*n2;
        *n2=*n1;
        *n1=per;
    }
    printf("1: %.2lf,2: %.2lf,3: %.2lf ",*n3,*n2,*n1);

}