#include<stdio.h>
int main(){
    int num;

    scanf("%d",&num);
    if(num>0){
        for(int i=1;i<=num;i++){
            int count =0;
            for(int n=2;n*n<=i;n++){
                if (i%n==0){
                    count=1;
                    break;
                }
            }
            if (count==0){
                printf("%d ",i);
            }
        }
    }
    return 0;
}