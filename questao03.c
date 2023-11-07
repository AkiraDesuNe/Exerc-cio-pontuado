//questão 03
#include <stdio.h>

int main()
{
float Nota;

printf ("Digite sua nota: ");
scanf ("%f",&Nota);

if (Nota >=9)
{
printf ("Nota excelente");
}
else if (Nota>=7.0 && Nota<= 8.9) 
{
printf ("Nota bom");
}
else if (Nota>=5.0 && Nota<=6.9)
{
printf ("Nota razoável");
}
else
{
printf ("Nota insuficiente");
}
    return 0;
}