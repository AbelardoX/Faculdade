#define Inicio 0
#define MaxTam 100

//estruturas de dados--Tipos de dados

typedef struct{

int chave;

}Titen;

typedef struct{

Titen iten[MaxTam];
int primeiro;
int ultimo;

}Tlista;


//prototipos das funções

void CriaVazioConj(Tlista *plista);
void LerConj(Tlista *plista);
int InsereConj(Tlista *plista, Titen x);
void VerifVaziaConj(Tlista *plista);
void ImprimiConj(Tlista *plista);
