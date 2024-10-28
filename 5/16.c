#include<stdio.h>
int main(){
    double vkDaf=100,vkDed=100;
    int i=0;
    while(vkDed<=vkDaf){
        vkDaf+=100*1.1;
        vkDed=vkDed*1.05;
        i++;
    }
    printf("Потребовалось %d. На счету Дафны : %lf , На счету Дейдры : %lf",i,vkDaf,vkDed);
    return 0;
}