#include "pilhaDinamica.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void inicializar(PILHA *p){
    p->topo = NULL;
    p->nroElem = 0;
}

void empilhar(PILHA *p, REGISTRO reg){
    PONT novo = NULL;

    novo = (PONT) malloc(sizeof(ELEMENTO));
    if(novo == NULL){
        printf("\nErro de alocacao de memoria\n");
        return;
    }

    novo->prox = p->topo;
    novo->reg = reg;
    p->topo = novo;
    p->nroElem ++;
}

void desempilhar(PILHA *p){
    PONT apagar = NULL;

    if (p->topo == NULL){
        printf("\nNao ha elemento para desempilhar\n");
        return;
    }

    apagar = p->topo;
    p->topo = p->topo->prox;
    p->nroElem --;

    free(apagar);
}

void quantosElementos(PILHA* p){
    printf("\n Quantos elementos %d", p->nroElem);
}

void imprimir(PILHA* p){
    PONT aux = NULL;

    for(aux=p->topo; aux!=NULL; aux = aux->prox){
        printf("\n %d", aux->reg.chave);
    }
}
