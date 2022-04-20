#define Inicio 0
#define MaxTam 1000
#include <stddef.h>


//estruturas de dados--Tipos de dados

typedef int Tnumero;

typedef struct{

Tnumero numero;

}TDado;

typedef struct Nodo{

TDado info;
struct Nodo* prox;

}TNodo;

typedef struct{

TNodo* primeiro;
TNodo* ultimo;

}TConjunto;
