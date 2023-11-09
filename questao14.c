//questão14
#include <stdio.h>


int main(void)
{
int n;
int pares = 0;
int impares  = 0;
int soma_Pares  = 0;
int soma_Impares  = 0;
float media_Pares  = 0;
float media_Impares  = 0;

do {
printf ("digite um número: ");
scanf ("%d",&n);
if (n ==0) {
break;
}
else if (n%2==0) {
    pares++;
    soma_Pares = n + soma_Pares;
}
else {
    impares++;
    soma_Impares = n + soma_Impares ;
}
} while (1);

media_Pares = (soma_Pares / pares);
media_Impares = (soma_Impares / impares);

printf ("Há %d números pares e a média de números pares é:%.2f \n Há %d números ímpares, e a média de números ímpares é: %.2f  ",pares, media_Pares, impares, media_Impares );




    return 0;
}
