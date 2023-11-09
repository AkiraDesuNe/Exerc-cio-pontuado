//questão12
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
int i;
float nota;
float soma = 0;
float media;

printf ("A seguir, digite suas 5 notas para obter sua média: \n");


for (i = 1; i < 6; i++) {
    do {
printf ("digite sua %iª nota: ", i);
scanf ("%f", &nota);
    } while (nota < 0 || nota > 10 );
 soma += nota;
}

media = soma / 5;

printf ("sua média é: %.2f ", media);



return 0; 
    
}