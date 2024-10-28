#include<stdio.h>
#include<math.h>
int main(){

    int begin,end;
    scanf("%d",&begin);
    scanf("%d",&end);
    for (;begin<end;begin++){
        for(int i=1;i<=3;i++){
            int res=(int)pow(begin,i);
            printf("%d ",res);
        }
        printf("\n");
    }
    return 0;
}