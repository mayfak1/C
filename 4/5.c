#include <stdio.h>
int main (void) 
{
int count, sum,userNum; 
count=0; 
sum = 0;
printf("Введите число:");
scanf("%d",&userNum);
while (count++ < userNum){
sum = sum + count; 
}
printf("sum = %d\n", sum); 
return 0; 
}