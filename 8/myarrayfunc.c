#include "myarryfunc.h"
#include <stddef.h>
int* index_of_elements(int *nums,size_t size,int  num1){
    static int res[20];
    int k=0;
    for (int i=0;i<size;i++){
        if( nums[i]<num1){
            res[k]=i;
            k++;
        }
    }
    return res;
}
int quantity_between_equal_nums(int *nums,size_t size){
    int res=0;
    for (int i=0;i<size;i++){
        if (i+1==size){
            break;
        }
        for (int j=i+1;j<size;j++){
            if (nums[i]==nums[j]){
                res=j-i-1;
                break;
            }
            
        }
    }
    return res;
}
int min(int *nums,size_t size,int  num1,int num2){
    int min_nums=__INT_MAX__;
    for (int i=num1;i<num2;i++){
        if (nums[i]<min_nums){
            min_nums=nums[i];
        }
    }
    return min_nums;
}