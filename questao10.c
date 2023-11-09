//questão10
#include <stdio.h>

int main()
{
char x;
int num1;
int num2;
    printf("digite um número: ");
    scanf ("%d", &num1);
    printf("digite um número: ");
    scanf ("%d", &num2);
    
    printf("digite a operação desejada: ");
    scanf (" %c", &x);
    
switch (x) {
    
case '+' : 
printf ("resultado da operação é: %d", num1 + num2);
break;

case '-' :  
printf ("resultado da operação é: %d", num1 - num2);
break;

default:
printf ("operação inválida");
    
}


    return 0;
}
