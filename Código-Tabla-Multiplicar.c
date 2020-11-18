/* Jhovanny Dnaiel Beltran Lugo 303 */
#include <stdio.h>

int main(){
  int i, numero;

  printf("\nDigite un numero entero: ");
  scanf("%i",&numero);

  printf("\n/// Tabla de multiplicar ///");

  for (i = 1; i <= 10; i++ ){
    printf("\n%i * %i = %i",i, numero, i * numero);
  }
  return 0;
}
