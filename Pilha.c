#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tamanho 8

typedef struct t_pilha{
    int dados[tamanho];
    int ini;
    int fim;
}tpilha;

tpilha pilha1;
tpilha pilha2;
int i;

void empilhar();
void desempilhar();
void mostrar();


int main() {
	setlocale(LC_ALL, "Portuguese");
    pilha1.ini= 0;
    pilha1.fim= 0;
    
    pilha2.ini= 0;
    pilha2.fim= 0;
   
    empilhar(1, &pilha1);
    empilhar(2, &pilha1);
    empilhar(3, &pilha1);
    empilhar(4, &pilha1);
    empilhar(5, &pilha1);
    empilhar(6, &pilha1);
    empilhar(7, &pilha1);
    empilhar(8, &pilha1);
    mostrar(&pilha1);
    desempilhar(&pilha2);
    empilhar(8, &pilha2);
    empilhar(7, &pilha2);
    empilhar(6, &pilha2);
    empilhar(5, &pilha2);
    empilhar(4, &pilha2);
    empilhar(3, &pilha2);
    empilhar(2, &pilha2);
    empilhar(1, &pilha2);
    mostrar(&pilha2);
        return 0;
}
void empilhar (int elemento, tpilha *p) {
		if(p->fim == tamanho){
    	printf("\nA pilha esta cheia, impossivel empilhar um novo elemento!\n\n");
        system("pause");	
    }
    else {
        p->dados[p->fim]= elemento;
    	p->fim++;
    } 
}
void mostrar(tpilha *p) {
    printf(" [ ");
    for(i= 0; i < tamanho; i++){
        printf("%d ", p->dados[i]);
    }
    printf("]\n\n");
}
void desempilhar(tpilha *p){
	int elemento;
	if (p->fim == p->ini) {
		printf("*** Pilha vazia! ***\n\n");
		//system("pause");
	}
	else {
		elemento = p->dados[p->fim];
		for(i=0; i<tamanho; i++){
			p->dados[i] = p->dados[i+1];
		}
		p->dados[i] = 0;
		p->fim--;
	}
}
