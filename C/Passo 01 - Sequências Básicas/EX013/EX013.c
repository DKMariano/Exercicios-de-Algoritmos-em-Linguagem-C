/********************************************************************************************
* Data: 04/07/2024                                                                          *
* Exerc�cio: 013- Exerc�cios de Algoritmos (em C)                                           *
* Institui��o de Ensino: Estudonauta                                                        *
* Disciplina: Linguagem C                                                                   *
* Professor: Gustavo Guanabara                                                              *
* Aluno: D. K. Mariano                                                                      *
* Descri��o: Fa�a um algoritmo que leia o sal�rio de um funcion�rio, calcule e mostre o seu *
*            novo sal�rio, com 15% de aumento.                                              *
********************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>  // Adiciona a biblioteca string.h para usar strcspn

int main(){

    setlocale(LC_ALL, "Portuguese");

    double salario = 0, novo_salario = 0, aumento = 15.0 / 100.0;

    char nome [20];
    printf("\n\nDigite o nome do funcion�rio: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite o sal�rio do funcion�rio em reais: R$ ");
    scanf("%lf", &salario);
    while(getchar() != '\n'); // Limpa o buffer do teclado ap�s scanf

    novo_salario = salario * (1 + aumento );

    printf("\n-------<<< CALCULADORA DE SAL�RIO >>>-------");

    printf("\nNome do funcion�rio: %s", nome);
    printf("\nSal�rio Anterior: R$ %.2f", salario);
    printf("\nNovo sal�rio: R$ %.2f", novo_salario);
    printf("\nAumento: R$ %.2f\n\n", salario * aumento);
}
