#include "conjunto.h"

void CriaVazioConj(Tlista *plista){

(plista->primeiro) = Inicio;
(plista->ultimo) = Inicio;

}

void LerConj(Tlista *plista){

    Tlista l;
    Titen x;

}

void VerifVaziaConj(Tlista *plista){

    if(plista->ultimo == plista->primeiro){
        printf("Lista Vazia");
    }
    return 1;

}

int InsereConj(Tlista *plista, Titen x){

    int repetido = 0;

    Tlista aux;


    if(plista->ultimo == MaxTam){
        return -1;
        printf("Lista Cheia \n");
    }else

    for(int i = plista->primeiro; i < plista->ultimo;i++){
        if(plista->iten[i].chave == x.chave){
            repetido = 1;
        }

    }

    if(repetido == 0){
    plista->iten[plista->ultimo] = x;
    plista->ultimo++;
    }else{
        printf("Numero Repetido!");
        return -1;
    }


    return 1;
}

void ImprimiConj(Tlista *plista){
      for(int i = plista->primeiro; i < plista->ultimo;i++){
         if(i == plista->primeiro){
        printf("seu conjunto :(%i)", plista->iten[i].chave);
         }
        if(i >= plista->primeiro+1){
         printf("(%i)", plista->iten[i].chave);

        }

    }

}
