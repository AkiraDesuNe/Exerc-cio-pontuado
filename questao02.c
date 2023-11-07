//questão 02
#include <stdio.h>

int main()
{
float C;
int dia_Semana;
float valor_desc;
float valor_Total;

printf (" dia da semana   cod \n"
        " Domingo...... [ 1 ]\n"
        " Segunda...... [ 2 ]\n"
        " Terça......   [ 3 ]\n"
        " Quarta......  [ 4 ]\n"
        " Quinta......  [ 5 ]\n"
        " Sexta......   [ 6 ]\n"
        " Sábado......  [ 7 ]\n");

printf ("Digite código equivalente ao dia da semana da compra: \n ");

scanf ("%d",&dia_Semana);

printf ("digite o valor inicial da compra");
scanf ("%f", &C); 



 valor_Total = 0;

    if (C <= 100) {
        valor_Total = C; // If C is less than or equal to 100, no discount applies
        printf("O valor da sua compra é: %.2f\n", C);
    } else {
        switch (dia_Semana) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                valor_desc = C * 0.10;
                valor_Total = C - valor_desc;
                printf("O valor da sua compra é: %.2f\n", valor_Total);
                break;

            case 1:
            case 7:
                valor_desc = C * 0.15;
                valor_Total = C - valor_desc;
                printf("O valor da sua compra é: %.2f\n", valor_Total);
                break;

            default:
                printf("Inválido\n");
                break;
        }
    }
    return 0;
}
