#include<stdio.h>
int main(){
    double vk=1000000;
    int i=0;
    while(vk>0){
        vk-=100000;
        vk=vk*1.08;

        i++;
    }
    printf("%d",i);
    return 0;
}