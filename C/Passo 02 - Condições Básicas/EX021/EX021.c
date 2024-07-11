/******************************************************************
* Data: 31/05/2024                                                *                                                       *
* Exerc�cio: 021 - Exerc�cios de Algoritmos (em C)                *
* Institui��o de Ensino: Estudonauta                              *                                                       *
* Disciplina: Linguagem C                                         *                                                       *
* Professor: Gustavo Guanabara                                    *                                                       *
* Aluno: D. K. Mariano                                            *                                                       *
* Descri��o: Crie um programa que verifique se um ano � bissexto. *                                                        *
******************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano = 0;
    printf("Digite um ano qualquer: ");
    scanf("%d", &ano);
    while(getchar() != '\n');// Limpa o buffer do teclado

    if (ano % 400 == 0 || ano % 100 != 0 && ano % 4 ==0 ){
        printf("\nO ano de %i � ano bissexto.\n\n", ano);

    }else{
        printf("\nO ano de %i N�O � ano bissexto.\n\n", ano);
    }
}
