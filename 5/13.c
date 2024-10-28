#include<stdio.h>
int main(){
    int nums[8];
    int k=0;
    for(int i=0;i<8;i++){
        nums[i]=i;
    }
    do{
        
        printf("%d ",nums[k]);
        k++;
    }while (k<8);
   
    
    return 0;
}