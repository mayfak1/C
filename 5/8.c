#include<stdio.h>

int main(){
    double one,two;
    
    
    while(scanf("%lf",&one)!=0&&scanf("%lf",&two)!=0){
        printf("%lf\n",(one-two)/(one*two));
        
    }
    return 0;
}