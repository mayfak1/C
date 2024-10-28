#include<stdio.h>
int main(){
    int end;
    scanf("%d",&end);
    while(end>0){
        double resSm,resRz=0;
        for(double i=1;i<end;i++){
            resSm+=1.0/i;
        }
        for(double i=1;i<end;i++){
            int k=i;

            if(k%2==0){
                resRz-=1.0/i;
            }
            resRz+=1.0/i;
        }
        printf("%.3lf , %.3lf\n",resSm,resRz);
        scanf("%d",&end);
        
    }
    
    return 0;
}