/********************************************************************************************
* Data: 28/06/2024                                                                          *
* Exerc�cio: 012 - Exerc�cios de Algoritmos (em C)                                          *
* Institui��o de Ensino: Estudonauta                                                        *
* Disciplina: Linguagem C                                                                   *
* Professor: Gustavo Guanabara                                                              *
* Aluno: D. K. Mariano                                                                      *
* Descri��o:  Crie um programa que leia o pre�o de um produto, calcule e mostre o seu PRE�O *
*             PROMOCIONAL, com 5% de desconto.                                              *
********************************************************************************************/

#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��o de localiza��o
#include <string.h>  // Biblioteca para manipula��o de strings


int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s


    char produto [20];
    double preco = 0, novo_preco = 0;
    double desconto = 5.0 / 100.0;

    printf("Digite o nome do produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = '\0';

    printf("Digite o pre�o do produto: R$ ");
    scanf("%lf", &preco);
    while(getchar() != '\n');

    novo_preco = preco * (1 - desconto);

    printf("\n\n-----------<<< LOJAS TITA >>>------------ \n");
    printf("Produto: %s \n", produto);
    printf("Pre�o: R$ %.2f \n", preco);
    printf("Desconto: R$ %.2f \n", preco * desconto);
    printf("Valor a pagar: R$ %.2f \n", novo_preco);

    return 0;
}
