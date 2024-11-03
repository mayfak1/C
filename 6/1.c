#include<stdio.h>
#include<ctype.h>
int main(){
    char ch[100]="";
    int spaceCount=0,entCount=0,otherCount=0;
    for(int i=0;i<100;i++){
        ch[i]=getchar();
        if (ch[i]=='#'){
            ch[i]='\0';
            break;
        }else if(isalnum(ch[i])){
            otherCount++;
        }else if( ch[i]==10){entCount++;}
        else if( ch[i]==32){spaceCount++;}
    }
    printf("other %d, enter %d,space %d",otherCount,entCount,spaceCount);
    return 0;
}