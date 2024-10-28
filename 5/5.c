#include<stdio.h>
int main(){
    char userVal;
    
    scanf("%c",&userVal);
    for(int i=5;i>0;i--){
        for(int q=0;q<i;q++){
            printf(" ");
        }
        int voz=userVal-4;
        for(int j=5;j>=i;j--){
            printf("%c",voz++);
        }
        int yb=--voz;
        for(int k =5;k>i;k--){
                printf("%c",--yb);
            }
        printf("\n");
    }
    return 0;
}