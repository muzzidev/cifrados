#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char* codigo_comun = argv[1];
  int desplazamiento = atoi(argv[2]);
  for (int i = 0; i < strlen(codigo_comun); i++){
    int caracter_desplazado = codigo_comun[i] + desplazamiento;
    
    // Si se pasa de la 'z' vuelve a 'A'
    if (caracter_desplazado > 122){
      caracter_desplazado -= 58;
    }
    if (codigo_comun[i] < 65 || codigo_comun[i] > 122){
      continue;
    }
    
    codigo_comun[i] = caracter_desplazado;
  }
  printf("%s\n", codigo_comun);
  return 0;
}