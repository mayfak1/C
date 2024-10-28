#include<stdio.h>
int main(){
    double nums1[8],nums2[8];
     for(int i=0;i<8;i++){
        scanf("%lf",&nums1[i]);
         if(i==0){
            nums2[i]=nums1[i];
            continue;
        }
        nums2[i]=nums2[i-1]+nums1[i];
    }
    for(int i=0;i<8;i++){
        printf("%.3lf ",nums1[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%.3lf ",nums2[i]);
    }
    return 0;
}