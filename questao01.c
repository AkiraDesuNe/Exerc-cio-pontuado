//questão 01
#include <stdio.h>

int main()
{
int t;
printf  ("Digite valor da temperatura: ");
scanf ("%d", &t);
if (t > 25)
printf ("clima ensolarado");
else if (t < 15)
printf ("clima chuvoso");
else
printf ("clima nublado");

    return 0;
}
