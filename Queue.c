#include "headers/Queue.h"
#include <stdlib.h>
void add(int key, Queue* qe){
    Nodo* aux =  malloc(sizeof(Nodo));
    aux->key = key;
    aux->next = NULL;
    if(qe->front == NULL){
        qe->front = aux;
        qe->end_q = aux;
    }
    else{
        qe->end_q->next = aux;
        qe->end_q = aux;
    }
}
int del_queue(Queue* qe){
    if(qe->front != NULL){
        Nodo* aux = qe->front;
        qe->front = aux->next;
        free(aux);
        return 1;
    }
    else
        return 0;
    
}