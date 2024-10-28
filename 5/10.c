#include<stdio.h>
int main(){
    int one,two;
    scanf("%d %d",&one,&two);
    while(one<two){
        int res=0;
        for(int i=one;i<=two;i++){
            res+=i*i;
        }
        printf("Сумма квадратов целых чисел от %d до %d равна %d\n",one*one,two*two,res);
        scanf("%d %d",&one,&two);
    }
    return 0;
}