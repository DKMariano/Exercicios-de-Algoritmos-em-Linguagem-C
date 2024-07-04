/********************************************************************************************
* Data: 04/07/2024                                                                          *
* Exercício: 013- Exercícios de Algoritmos (em C)                                           *
* Instituição de Ensino: Estudonauta                                                        *
* Disciplina: Linguagem C                                                                   *
* Professor: Gustavo Guanabara                                                              *
* Aluno: D. K. Mariano                                                                      *
* Descrição: Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu *
*            novo salário, com 15% de aumento.                                              *
********************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>  // Adiciona a biblioteca string.h para usar strcspn

int main(){

    setlocale(LC_ALL, "Portuguese");

    double salario = 0, novo_salario = 0, aumento = 15.0 / 100.0;

    char nome [20];
    printf("\n\nDigite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite o salário do funcionário em reais: R$ ");
    scanf("%lf", &salario);
    while(getchar() != '\n'); // Limpa o buffer do teclado após scanf

    novo_salario = salario * (1 + aumento );

    printf("\n-------<<< CALCULADORA DE SALÁRIO >>>-------");

    printf("\nNome do funcionário: %s", nome);
    printf("\nSalário Anterior: R$ %.2f", salario);
    printf("\nNovo salário: R$ %.2f", novo_salario);
    printf("\nAumento: R$ %.2f\n\n", salario * aumento);
}
