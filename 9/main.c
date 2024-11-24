#include<stdio.h>
#include"matrixfunc.h"
void menu();
#define COL 10
#define ROW 10
int main(){
    int matrix[ROW][COL];
    char ch;
    menu(); 
    while((ch=getchar())!=EOF){
        switch(ch){
            case 'a':
                (colls_from_bottom_to_top(matrix));
                break;
            case 'b':
                for (int i=0;i<ROW;i++){
                    for (int j=0;j<COL;j++){
                        printf("%d ",(*(*(matrix+i)+j)));
                    }
                    printf("\n");
                }
                break;
            case 'c':
                max_min(matrix);
                break;
            case 'd':
                sum_up_diagonal(matrix);
                break;
                
        }
        while(getchar()!=' ');
        menu();
        
    }
    return 0;
}
void menu(){
    printf("a. Функция 1 (заменить названием типа ввода) (вводить матрицу из файла <)\n\
b. Представление массива (матрица значений) (указать индексы или номера)\n\
c. Функция 2 (заменить названием функции)\n\
d. Функция 3 (заменить названием функции)\n\
e. Выход\n");
}