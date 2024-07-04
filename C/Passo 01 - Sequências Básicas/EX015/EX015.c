/*******************************************************************************************************
* Data: 04/07/2024                                                                                     *
* Exercício: 015 - Exercícios de Algoritmos (em C)                                                     *
* Instituição de Ensino: Estudonauta                                                                   *
* Disciplina: Linguagem C                                                                              *
* Professor: Gustavo Guanabara                                                                         *
* Aluno: D. K. Mariano                                                                                 *
* Descrição: Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário de um *
*            funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 por hora trabalhada.   *                                                       *
*******************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    char nome[20];

    int dias_trabalhados = 0;

    double salario = 0;

    printf("\nDigite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';// Remove o caractere de nova linha

    printf("Digite a quantidade de dias trabalhados durante o mês: ");
    scanf("%d", &dias_trabalhados);
    while(getchar() != '\n');// Limpa o buffer do teclado após scanf

    salario = dias_trabalhados * 8 * 25;

    printf("\n-------<<< CALCULADORA DE SALÁRIO >>>-------");
    printf("\nNome do funcionário: %s", nome);
    printf("\nDias Trabalhados: %d", dias_trabalhados);
    printf("\nSalário: R$ %.2f\n\n", salario);
}
