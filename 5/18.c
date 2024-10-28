#include<stdio.h>
int main(){
    int weeks=1,friends=5;
    while(friends<150){
        friends=(friends-weeks)*2;
        weeks++;
        printf("%d\n",friends);
    }
    return 0;
}