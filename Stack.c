#include <stdio.h>
#include <stdlib.h>
#include "headers/Stack.h"

int del_top(Stack* st){
    if(st != NULL){
        Nodo* aux = st->Cima;
        st->Cima = aux->next;
        free(aux);
        return 1;
    }
    return 0;
}
void add(int key, Stack* st){
    Nodo* aux = malloc(sizeof(Nodo));
    aux->key = key;
    if(st == NULL)
        aux->next = NULL;
    else
        aux->next = st->Cima;
    st->Cima = aux;
}