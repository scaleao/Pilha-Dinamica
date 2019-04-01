#include <stdio.h>
#include <stdlib.h>
#include "pilhaDinamica.h"

int main()
{
    PILHA pilha;
    REGISTRO reg;

    inicializar(&pilha);

    reg.chave = 2;
    empilhar(&pilha, reg);

    reg.chave = 4;
    empilhar(&pilha, reg);

    reg.chave = 6;
    empilhar(&pilha, reg);

    reg.chave = 8;
    empilhar(&pilha, reg);

    reg.chave = 10;
    empilhar(&pilha, reg);

    imprimir(&pilha);
    return 0;
}
