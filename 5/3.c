#include<stdio.h>
int main(){
    for(int i=0;i<6;i++){
        char l='F';
        for(int k=0;k<=i;k++){
            printf("%c",l--);
        }
        printf("\n");
    }

    return 0;
}