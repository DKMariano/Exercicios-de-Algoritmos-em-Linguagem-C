/*********************************************************************************************************
* Data: 11/07/2024                                                                                       *
* Exercício: 026 - Exercícios de Algoritmos (em C)                                                       *
* Instituição de Ensino: Estudonauta                                                                     *
* Disciplina: Linguagem C                                                                                *
* Professor: Gustavo Guanabara                                                                           *
* Aluno: D. K. Mariano                                                                                   *
* Descrição: Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando na tela uma das *
*            mensagens abaixo:                                                                           *
*               - O primeiro valor é o maior                                                             *
*               - O segundo valor é o maior                                                              *
*               - Não existe valor maior, os dois são iguais                                             *                               *
*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num1 = 0;
    printf("\nDigite o primeiro número inteiro: ");
    scanf("%d", &num1);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    int num2 = 0;
    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &num2);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    printf("\n======== ANALISADOR DE NÚMEROS ========\n");

    if(num1 > num2){
        printf("O primeiro valor é o maior: %d > %d \n\n", num1, num2);
    }else if (num1 < num2){
        printf("O segundo valor é o maior: %d > %d \n\n", num2, num1);
    }else{
        printf("Não existe valor maior, os dois são iguais: %d = %d \n\n", num1, num2);
    }
}
