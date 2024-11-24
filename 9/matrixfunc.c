#include"matrixfunc.h"
#include<stdio.h>
#include<limits.h>
void colls_from_bottom_to_top(int (*ar)[10]){
    for (int cols=0;cols<10;cols++){
        for(int rows=9;rows>=0;rows--){
            scanf("%d",&(*(*(ar+rows)+cols)));

        }
    }
}
void max_min(int (*ar)[10]){
    int res[2];
    res[0]=INT_MAX;
    res[1]=INT_MIN;
    for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if((*(*(ar+i)+j))>*(res+1)){
                *(res+1)=(*(*(ar+i)+j));
            }
            if((*(*(ar+i)+j))<*res){
                *res=(*(*(ar+i)+j));
            }
        }
    }
    printf("max: %d, min:%d\n",res[1],res[0]);
}
void sum_up_diagonal(int (*ar)[10]){
    int res=0;
    for(int i=0;i<10;i++){
        for (int j=i;j<10;j++){
            res+=(*(*(ar+i)+j));
        }
    }
    printf("%d\n",res);
}