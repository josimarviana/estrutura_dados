//
// Created by josimar on 16/06/23.
//
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int pilha[MAX];
int topo=0;

void empilhar(int valor){
    if(topo>=MAX){
        printf("a pilha esta cheia");
        return;
    }
    pilha[topo++]=valor;

}

int mostrar() {
    printf("pilha: ");
    for (int i=0; i<topo; i++){
        printf("%d ", pilha[i]);
    }
    printf("\n");
}

int desempilhar(void){
    if(topo<=0){
        printf("a pilha esta vazia");
        return -1;
    }
    return pilha[--topo];
}

int tamanho(){
    return topo;
}

int main() {
    mostrar();
    empilhar(4);
    mostrar();
    empilhar(5);
    mostrar();
    printf("desempilhei o %d\n", desempilhar());
    mostrar();

    return 0;
}
