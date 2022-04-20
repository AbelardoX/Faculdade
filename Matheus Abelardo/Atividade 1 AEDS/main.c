#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"


int main()
{
    Tlista l;
    Titen x;

    CriaVazioConj(&l);
    VerifVaziaConj(&l);


     for(int i = Inicio; i <= MaxTam;i++){
    printf("\n");
    printf("DIGITE 0 PARA PARAR E IMPRIMIR \n");
    printf("Digite os numeros do conjunto:");
    scanf("%d", &x.chave);
    InsereConj(&l, x);
    if( x.chave == 0){
    ImprimiConj(&l);
    return 1;
    }

    }


    }




