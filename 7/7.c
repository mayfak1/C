#include<stdio.h>
#include<ctype.h>
int alfnum(char* ch);
int const asci=64;
int main(){
    char ch;
    while((ch=getchar())!=EOF){
        int a=alfnum(&ch);
        if(a>0){
            printf("порядковый номер: %d\n",a);
        }else{
            printf("не буква\n");
        }
    }
        
    return 0;
}
int alfnum(char* ch){
    if (isalpha(*ch)){
            *ch=toupper(*ch);
            return *ch-asci;
        }else{
            return -1;
        }
 }