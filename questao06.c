//questão 06
#include <stdio.h>

int main()
{
int cod;

printf ("produto.....código....preço\n"
        "camiseta..... [1].....R$50\n"
        "calça........ [2].....R$230\n"
        "sapato....... [3].....R$150\n");
printf ("digite o código do produto escolhido: ");
scanf ("%d",&cod);

switch (cod)
{
case 1:
printf ("Seu produto escolhido é: camiseta, preço: R$50 ");
break;
case 2:
printf ("Seu produto escolhido é: calça, preço: R$230 ");
break;
case 3:
printf ("Seu produto escolhido é: sapato, preço: R$150 ");
break;
default:
printf ("inválido ");
break;
}
    return 0;
}