/*********************************************************************************************************
* Data: 11/07/2024                                                                                       *
* Exerc�cio: 026 - Exerc�cios de Algoritmos (em C)                                                       *
* Institui��o de Ensino: Estudonauta                                                                     *
* Disciplina: Linguagem C                                                                                *
* Professor: Gustavo Guanabara                                                                           *
* Aluno: D. K. Mariano                                                                                   *
* Descri��o: Escreva um algoritmo que leia dois n�meros inteiros e compare-os, mostrando na tela uma das *
*            mensagens abaixo:                                                                           *
*               - O primeiro valor � o maior                                                             *
*               - O segundo valor � o maior                                                              *
*               - N�o existe valor maior, os dois s�o iguais                                             *                               *
*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num1 = 0;
    printf("\nDigite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    int num2 = 0;
    printf("\nDigite o segundo n�mero inteiro: ");
    scanf("%d", &num2);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    printf("\n======== ANALISADOR DE N�MEROS ========\n");

    if(num1 > num2){
        printf("O primeiro valor � o maior: %d > %d \n\n", num1, num2);
    }else if (num1 < num2){
        printf("O segundo valor � o maior: %d > %d \n\n", num2, num1);
    }else{
        printf("N�o existe valor maior, os dois s�o iguais: %d = %d \n\n", num1, num2);
    }
}
