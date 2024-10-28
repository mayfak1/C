#include<stdio.h>
double calculations(double,double);
int main(){
    double one,two;
    
    
    while(scanf("%lf",&one)!=0&&scanf("%lf",&two)!=0){
        printf("%lf\n",calculations(one,two));
        
    }
    return 0;
}
double calculations(double a,double b){
    return (a-b)/(a*b);
}