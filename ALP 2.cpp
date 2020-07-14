#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct cadastro {
	char nome_LV [80];
	char autores_LV [80];
	char editora [30];
}LV;
int main ()
{
	setlocale (LC_ALL, "Portuguese");
	LV livro[5];
	int op, i, contador=1;
	do {
	printf ("Informe uma op��o (1-Cadastrar livros (5 por vez) / 2-Ver livros cadastrados  / 0-Encerrar o programa): ");
	scanf ("%d", &op);
	fflush (stdin);
		switch (op){
			case 0: 
				printf ("\n Programa Encerrado \n");
					break;
			case 1: 
				for (i=1; i<=5; i++){
					printf ("\nC�digo: %d\n", contador);
					printf ("Digite o nome da %d� Obra: ",contador);
					fgets (livro[i].nome_LV, 80, stdin);
					fflush (stdin);
					printf ("Digite o(s) autor(es) da obra: ");
					fgets (livro[i].autores_LV, 80, stdin);
					fflush (stdin);
					printf ("Digite o nome da editora: ");
					fgets (livro[i].editora, 30, stdin);
					fflush (stdin);
					printf("\n");
					contador++;
				}
				printf(" Sistema de cadastro lotado. N�o � poss�vel armazenar mais informa��es! \n\n");
					break;
			case 2: 
				if (contador==1){
					printf ("\n  Lista Vazia. \n\n");	
			}
				for (i=1; i<contador; i++){
					printf ("C�digo: %d", i);
					printf ("\nNome da obra: %s", livro[i].nome_LV);
					printf ("Autor(es): %s", livro[i].autores_LV);
					printf ("Editora: %s", livro[i].editora);
					printf("\n");
				}
					break;
			default: 
				printf ("\n Op��o Inv�lida \n\n ");
		}
	}while (op!=0);

	return (0);
}

