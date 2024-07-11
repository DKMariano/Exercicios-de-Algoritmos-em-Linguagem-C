/*****************************************************************************************************
* Data: 11/07/2024                                                                                   *
* Exerc�cio: 022 - Exerc�cios de Algoritmos (em C)                                                   *
* Institui��o de Ensino: Estudonauta                                                                 *
* Disciplina: Linguagem C                                                                            *
* Professor: Gustavo Guanabara                                                                       *
* Aluno: D. K. Mariano                                                                               *
* Descri��o: Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua situa��o    *
*            em rela��o ao alistamento militar. Se estiver antes dos 18 anos, mostre em quantos anos *
*            faltam para o alistamento. Se j� tiver depois dos 18 anos, mostre quantos anos j� se    *
*            passaram do alistamento.                                                                *                                                      *
*****************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int ano = data -> tm_year;

    int ano_atual = ano + 1900;
    printf("\nAtualmente estamos no ano de %i.\n", ano_atual);

    int ano_nascimento = 0;
    printf("\nDigite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);

    int idade = ano_atual - ano_nascimento;

    printf("\n------------------------------------------------\n");
    printf("Sua idade atual � de %i. \n", idade);

    if (idade <18){
        int alistamento = 18 - idade;
        printf("\nVoc� ainda n�o pode se alistar no ex�rcito.");
        printf("\nFalta %d anos para seu alistamento.\n\n", alistamento);
    }else{
        int alistamento = idade - 18;
        printf("\nVoc� j� se alistou no ex�rcito.");
        printf("\nFazem %d desde seu alistamento.\n\n", alistamento);
    }
}
