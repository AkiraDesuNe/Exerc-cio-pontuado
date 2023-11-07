//questão 07
#include <stdio.h>

int main()
{
int op;

printf ("            menu    opções\n"
        "         novo jogo   [1]\n"
        "     carregar jogo   [2]\n"
        "     configurações   [3]\n");
printf ("digite o número da opção escolhida: ");
scanf ("%d",&op);

switch (op)
{
case 1:
printf ("novo jogo");
break;
case 2:
printf ("carregar jogo ");
break;
case 3:
printf ("configurações");
break;
default:
printf ("inválido ");
break;
}
    return 0;
}