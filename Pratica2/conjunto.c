#include "conjunto.h"
#include <stddef.h>



void Fvazia(TConjunto *pConjunto){

    pConjunto->primeiro = (TNodo*) malloc(sizeof(TNodo));
    pConjunto->ultimo = pConjunto->primeiro;
    pConjunto->primeiro->prox = NULL;

}


void LinsereIni(TConjunto *pConjunto, TDado* pNumero){


    TNodo* nNodo = (TNodo*) malloc(sizeof(TNodo));
    nNodo->prox = pConjunto->primeiro->prox;
    nNodo->info = *pNumero;
    pConjunto->primeiro->prox = nNodo;



}

void LinsereFin(TConjunto *pConjunto, TDado* pNumero){

    int repetido = 0;


    TNodo *pAux;
    pAux = pConjunto->primeiro->prox;


    while(pAux != NULL){
        if((pNumero) == (pAux->info.numero)){
            repetido = 1;
        }
        pAux = pAux->prox;
    }


     if(repetido == 0){
    pConjunto->ultimo->prox = (TNodo*) malloc(sizeof(TNodo));
    pConjunto->ultimo = pConjunto->ultimo->prox;
    pConjunto->ultimo->info = *pNumero;
    pConjunto->ultimo->prox = NULL;
    }else{
        printf("Numero Repetido!");
        return -1;
    }

}

void LimprimeConj(TConjunto* pConjunto){

    TNodo *pAux;
    pAux = pConjunto->primeiro->prox;
    while(pAux != NULL){
    printf("(%d)", pAux->info.numero);
    pAux = pAux->prox;
    }

}
