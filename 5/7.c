#include<stdio.h>
#include<string.h>
int main(){
    char word[40];
    scanf("%s",word);
    for(int i=strlen(word);i>=0;i--){
        printf("%c",word[i]);
    }
    return 0;
}