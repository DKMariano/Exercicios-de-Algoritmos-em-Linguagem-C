/*******************************************************************************************************
* Data: 04/07/2024                                                                                     *
* Exerc�cio: 015 - Exerc�cios de Algoritmos (em C)                                                     *
* Institui��o de Ensino: Estudonauta                                                                   *
* Disciplina: Linguagem C                                                                              *
* Professor: Gustavo Guanabara                                                                         *
* Aluno: D. K. Mariano                                                                                 *
* Descri��o: Crie um programa que leia o n�mero de dias trabalhados em um m�s e mostre o sal�rio de um *
*            funcion�rio, sabendo que ele trabalha 8 horas por dia e ganha R$25 por hora trabalhada.   *                                                       *
*******************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    char nome[20];

    int dias_trabalhados = 0;

    double salario = 0;

    printf("\nDigite o nome do funcion�rio: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';// Remove o caractere de nova linha

    printf("Digite a quantidade de dias trabalhados durante o m�s: ");
    scanf("%d", &dias_trabalhados);
    while(getchar() != '\n');// Limpa o buffer do teclado ap�s scanf

    salario = dias_trabalhados * 8 * 25;

    printf("\n-------<<< CALCULADORA DE SAL�RIO >>>-------");
    printf("\nNome do funcion�rio: %s", nome);
    printf("\nDias Trabalhados: %d", dias_trabalhados);
    printf("\nSal�rio: R$ %.2f\n\n", salario);
}
