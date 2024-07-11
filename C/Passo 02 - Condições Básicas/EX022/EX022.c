/*****************************************************************************************************
* Data: 11/07/2024                                                                                   *
* Exercício: 022 - Exercícios de Algoritmos (em C)                                                   *
* Instituição de Ensino: Estudonauta                                                                 *
* Disciplina: Linguagem C                                                                            *
* Professor: Gustavo Guanabara                                                                       *
* Aluno: D. K. Mariano                                                                               *
* Descrição: Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua situação    *
*            em relação ao alistamento militar. Se estiver antes dos 18 anos, mostre em quantos anos *
*            faltam para o alistamento. Se já tiver depois dos 18 anos, mostre quantos anos já se    *
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
    printf("Sua idade atual é de %i. \n", idade);

    if (idade <18){
        int alistamento = 18 - idade;
        printf("\nVocê ainda não pode se alistar no exército.");
        printf("\nFalta %d anos para seu alistamento.\n\n", alistamento);
    }else{
        int alistamento = idade - 18;
        printf("\nVocê já se alistou no exército.");
        printf("\nFazem %d desde seu alistamento.\n\n", alistamento);
    }
}
