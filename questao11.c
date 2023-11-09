//questão11
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
char x;
int cod1 = 413;
int cod2;

printf ("Esse é o seu código de acesso: %d\n", cod1);
sleep (5.);
system("clear");
do {
printf ("digite seu código de acesso: ");
scanf ("%d", &cod2);
}  while (cod2 != cod1);


return 0; 
    
}