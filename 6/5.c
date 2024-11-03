#include<stdio.h>
#include<string.h>

int main(){
    char ch[100]="";
    int count=0;
    for(int i=0;i<100;i++){
        ch[i]=getchar();
        if(ch[i]=='#'){
            ch[i]='\0';
            break;
        }
   }
    for(int i=0;i<strlen(ch);i++){
        switch(ch[i]){
            case '!':
                for(int n=strlen(ch);n>i;n--){
                    ch[n]=ch[n-1];
                }
                ++i;
                count++;
                break;
            case '.':
                ch[i]='!';

                count++;
                break;
        }
        
    }
    printf("%s,%d",ch,count);
    return 0;
}