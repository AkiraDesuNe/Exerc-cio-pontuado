//questão 05
#include <stdio.h>

int main()
{
int cod;

printf ("idioma.....código\n"
        "inglês..... [1]\n"
        "espanhol... [2]\n"
        "francês.... [3]\n");
printf ("digite o código do idioma escolhido: ");
scanf ("%d",&cod);

switch (cod)
{
case 1:
printf ("Seu idioma escolhido é: inglês, Welcome!");
break;
case 2:
printf ("Seu idioma escolhido é: espanhol, ¡Bienvenido(a)!");
break;
case 3:
printf ("Seu idioma escolhido é: francês, Salut!");
break;
default:
printf ("inválido ");
break;
}
    return 0;
}