/********************************************************************************************
* Data: 28/06/2024                                                                          *
* Exercício: 012 - Exercícios de Algoritmos (em C)                                          *
* Instituição de Ensino: Estudonauta                                                        *
* Disciplina: Linguagem C                                                                   *
* Professor: Gustavo Guanabara                                                              *
* Aluno: D. K. Mariano                                                                      *
* Descrição:  Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO *
*             PROMOCIONAL, com 5% de desconto.                                              *
********************************************************************************************/

#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configuração de localização
#include <string.h>  // Biblioteca para manipulação de strings


int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português


    char produto [20];
    double preco = 0, novo_preco = 0;
    double desconto = 5.0 / 100.0;

    printf("Digite o nome do produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = '\0';

    printf("Digite o preço do produto: R$ ");
    scanf("%lf", &preco);
    while(getchar() != '\n');

    novo_preco = preco * (1 - desconto);

    printf("\n\n-----------<<< LOJAS TITA >>>------------ \n");
    printf("Produto: %s \n", produto);
    printf("Preço: R$ %.2f \n", preco);
    printf("Desconto: R$ %.2f \n", preco * desconto);
    printf("Valor a pagar: R$ %.2f \n", novo_preco);

    return 0;
}
