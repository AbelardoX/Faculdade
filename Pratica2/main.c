#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"
#include <stddef.h>


int main()
{
    TConjunto l;
    TDado x ;
    int aux;

    Fvazia(&l);

  for(int i = 0; i < 10; i++){
    printf("DIGITE O NUMERO PARA COLOCAR NO CONJUNTO:");
    scanf("%d" , &aux);
    x.numero = aux;
    LinsereFin(&l, &x);


  }

    LimprimeConj(&l);


}
