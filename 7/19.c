#include<stdio.h>
// void userInt(char* ch);
int main(){

    printf("Выберите операцию:\na:Умножение\tb:Сложение\nc:Вычитание\td:Деление\ne:end\n");
    char ch;
    int i=0;
    // userInt(&ch);
    float num1,num2,res;
    
    
    while(((ch=getchar())!='e')&&((scanf("%f",&num1))==1)&&((scanf("%f",&num2))==1)){

        switch (ch)
        {
        case 'a':
            res=num1*num2;
            break;
        case 'b':
            res=num1+num2;
            break;
        case 'c':
            res=num1-num2;
            break;
         case 'd':
            while(num2==0){
                printf("Введите число отличное от 0");
                scanf("%f",&num2);
            }
            res=num1/num2;
            break;
        }
        printf("%.2f\n",res);
        // userInt(&ch);

        printf("Выберите операцию:\na:Умножение\tb:Сложение\nc:Вычитание\td:Деление\ne:end\n");
        while (getchar() != '\n');
    }
    return 0;
}
// void userInt(char* ch){
//     printf("Выберите операцию:\na:Умножение\tb:Сложение\nc:Вычитание\td:Деление\ne:end");
//     *ch=getchar();
// }