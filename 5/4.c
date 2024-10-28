#include<stdio.h>
int main(){
    char l='A';
    for(int i=0;i<6;i++){
        
        for(int k=0;k<=i;k++){
            printf("%c",l++);
            if (k>i){l+k;}
        }
        printf("\n");
    }

    return 0;
}