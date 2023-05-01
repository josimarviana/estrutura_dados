#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    char nome[20];
    struct No * no;
}tNo;
    
int add(tNo * lista, char * palavra){
    while(lista->no){
        lista = lista->no;
    }

    tNo * proximo = (tNo *) malloc(sizeof(struct No));
    lista->no = proximo;
    strcpy(lista->nome, palavra);
}

int show(tNo * lista){
    while(lista->no){
        printf("%s\n", lista->nome);
        lista = lista->no;
    }
}

int main(int argc, char ** argv){

    tNo * lista = (tNo *) malloc(sizeof(struct No));

    add(lista, "João");
    add(lista, "Maria");
    add(lista, "José");

    show(lista);

    return 0;

}