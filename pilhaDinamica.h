#ifndef PILHADINAMICA_H_INCLUDED
#define PILHADINAMICA_H_INCLUDED

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    //MAIS ELEMENTOS
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    PONT topo;
    int nroElem;
}PILHA;

void inicializar(PILHA *p);
void empilhar(PILHA *p, REGISTRO novoReg);
void desempilhar(PILHA *p);
void quantosElementos(PILHA* p);
void imprimir(PILHA* p);
#endif // PILHADINAMICA_H_INCLUDED
