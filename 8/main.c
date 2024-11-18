#include "myarryfunc.h"
#include <stdio.h>
#include <stddef.h>
void menu();
int main(){
    int size=0;
    int k,m,l;
    menu();
    char ch;
    while((ch=getchar())!='a'){
        menu();
    }
    scanf("%d",&size);
    int num[size];
    menu();
    while((getchar())!='\n'); 
    while((ch=getchar())!='g'){
        switch(ch){
            case 'b':
                for (int i=0;i<size;i++){
                    scanf("%d",&num[i]);
                }
                break;
            case 'c':
            for (int i=0;i<size;i++){
                printf("%d - %p\n",num[i],&num[i]);
            }
            break;
            case 'd':
                
                printf("Введите диапазон от k до m(не включительно)(макс знач: %d)\n",size);
                scanf("%d",&k);
                scanf("%d",&m);
                printf("ans: %d\n",min(num,sizeof(num)/sizeof(num[0]),k,m));
                break;
            case 'e':
               printf("ans: %d\n",quantity_between_equal_nums(num,sizeof(num)/sizeof(num[0])));
            case 'f':
            printf("Введите значение от которого нужно считать индексы меньших чисел:\n");
            scanf("%d",&l);
            int * link=index_of_elements(num,sizeof(num)/sizeof(num[0]),l);
            for (int i=0;i<size;i++){
                if(link[i]==0){break;}
                printf("index: %d\n",link[i]); 
            }
            
        }

        while((getchar())!='\n');
        menu();
    }
    return 0;
}
void menu(){
    printf("a. Задать размер массива.\nb. Заполнить массив\
    \nc. Представление массива (значения, адреса)\
    \nd. min\
    \ne. quantity_between_equal_nums\
    \nf. index_of_elements\
    \ng. Выход\n");
}