//questão13
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
int x;
int y;

printf ("digite dois números, sabendo que eles não podem ser iguais. \n");
sleep (2);
system ("clear");

do {
printf ("primeiro número: \n");
scanf ("%d", &x);
printf ("segundo número: \n");
scanf ("%d", &y);
} while ( x == y );

(x > y) ? printf (" primeiro número é o maior, e o segundo número é o menor\n %d > %d", x, y) :  printf ("o primeiro número é o menor  e o segundo número é o maior\n %d < %d ", x, y);

return 0; 
    
}