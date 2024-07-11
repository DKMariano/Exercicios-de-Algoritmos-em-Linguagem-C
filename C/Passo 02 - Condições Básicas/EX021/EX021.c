/******************************************************************
* Data: 31/05/2024                                                *                                                       *
* Exercício: 021 - Exercícios de Algoritmos (em C)                *
* Instituição de Ensino: Estudonauta                              *                                                       *
* Disciplina: Linguagem C                                         *                                                       *
* Professor: Gustavo Guanabara                                    *                                                       *
* Aluno: D. K. Mariano                                            *                                                       *
* Descrição: Crie um programa que verifique se um ano é bissexto. *                                                        *
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
        printf("\nO ano de %i É ano bissexto.\n\n", ano);

    }else{
        printf("\nO ano de %i NÃO É ano bissexto.\n\n", ano);
    }
}
