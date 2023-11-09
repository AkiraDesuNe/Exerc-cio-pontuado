//questão15
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (void) {
  int cod;
  char o[200];
  float valor;
  

  int main (void) {
  int cod;
  char o[200];
  float valor;
  
  printf ("digite o valor a ser convertido: ");
  scanf (" %f ", &valor);
 
  printf ("    >>  Conversor de Medidas << \n "
	  "             cod  grandeza \n "
	  "             [1]   massa \n" 
	 "              [2] temperatura \n " 
	 "              [3] comprimento \n " 
	 "              [0]    sair \n ");
  
  printf ("Digite o código (cod) correspondente ao desejado: \n");
scanf ("%d", &cod);
  
  
  switch (cod) {
      
    case 1:
    printf ("kg ou lb?");
     scanf ("%s", o);
  if (strcmp (o,"kg") == 0) {
    printf ("A medida equivalente a %.2f libras\n", valor * 0.45);
  } else if (strcmp (o,"lb") == 0) {
    printf ("A medida equivalente a %.2f quilos\n", valor / 0.45);
 } else {
    printf ("inválido\n");
    
 }
  break;

case 2:
  printf ("celsius ou fahrenheit?");
  scanf ("%s", o);
  
  if (strcmp (o,"celsius") == 0) {
    printf ("A medida é equivalente a %.2fº fahrenheit\n", 9*(valor )/5 + 32);
 } else if (strcmp (o,"fahrenheit") == 0) {
    printf ("A medida é equivalente a %.2fº celsius\n", 5*(valor - 32) / 9);
 } else {
    printf ("inválido\n");
}
  break;

case 3:
  printf ("km ou milha?");
  scanf ("%s", o);
  if (strcmp (o,"km") == 0) {
    printf ("A medida é equivalente a aproximadamente %.2f milhas\n",valor / 1.6);
 } else if (strcmp (o,"milha") == 0) {
    printf ("A medida é equivalente a aproximadamente %.2f km\n", valor * 1.6);
 } else {
    printf ("inválido");
    
  }
  break;

case 0:
  system ("clear");
  break;
  
default:
  printf ("inválido");
  break;
   }
   
   
  return 0;
}
  
  
  printf ("    >>  Conversor de Medidas << \n "
	  "Digite o c Código (cod) correspondente ao desejado:\n"
	  "             cod  grandeza \n "
	  "             [1]   massa \n" 
	 "              [2] temperatura \n " 
	 "              [3] comprimento \n " 
	 "              [0]    sair \n ");

scanf ("%d", &cod);


  switch (cod) {
      
    case 1:
    printf ("kg ou lb?");
  scanf ("%s", o);
  if (strcmp (o,"kg") == 0) {
    printf ("A medida equivalente a %.2f libras\n", valor * 0.45);
  } else if (strcmp (o,"lb") == 0) {
    printf ("A medida equivalente a %.2f quilos\n", valor / 0.45);
 } else {
    printf ("inválido\n");
    
 }
  break;

case 2:
  printf ("celsius ou fahrenheit?");
  scanf ("%s", o);
  
  if (strcmp (o,"celsius") == 0) {
    printf ("A medida é equivalente a %.2fº fahrenheit\n",(valor * 9 / 5) + 32);
 } else if (strcmp (o,"fahrenheit") == 0) {
    printf ("A medida é equivalente a %.2fº celsius\n", (valor - 32) * 5 / 9);
 } else {
    printf ("inválido\n");
}
  break;

case 3:
  printf ("km ou milha?");
  scanf ("%s", o);
  if (strcmp (o,"km") == 0) {
    printf ("A medida é equivalente a aproximadamente %.2f milhas\n",valor / 1.6);
 } else if (strcmp (o,"milha") == 0) {
    printf ("A medida é equivalente a aproximadamente %.2f km\n", valor * 1.6);
 } else {
    printf ("inválido");
    
  }
  break;

case 0:
  system ("clear");
  break;
  
default:
  printf ("inválido");
  break;
   }
   
   
  return 0;
}
