/******************************************************************************************************************
* Data: 08/07/2024                                                                                                *
* Exercício: 018 - Exercícios de Algoritmos (em C)                                                                *
* Instituição de Ensino: Estudonauta                                                                              *
* Disciplina: Linguagem C                                                                                         *
* Professor: Gustavo Guanabara                                                                                    *
* Aluno: D. K. Mariano                                                                                            *
* Descrição: Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se *
*            ela pode ou não votar                                                                                *
*******************************************************************************************************************/


#include <stdio.h>  // Biblioteca para funções de entrada e saída
#include <locale.h>  // Biblioteca para configurações regionais
#include <time.h>  // Biblioteca para manipulação de tempo

int main(){

    setlocale(LC_ALL, "Portuguese");

    setlocale(LC_ALL, "Portuguese");  // Configura a localidade para português

    time_t t;  // Declara uma variável para armazenar o tempo atual
    time(&t);  // Obtém o tempo atual e armazena em 't'
    struct tm *data;  // Declara uma estrutura para armazenar data e hora

    data = localtime(&t);  // Converte 't' para uma estrutura tm com a data e hora local
    int ano = data -> tm_year;  // Obtém o ano atual (desde 1900)
    int ano_atual = ano + 1900;  // Ajusta o ano para o formato correto

    int ano_nascimento = 0, idade = 0;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento );

    idade = ano_atual - ano_nascimento;

    printf("\n-----------------------<<< TRT informa >>>-----------------------");
    printf("\nVocê tem %d anos!", idade);

    printf((idade >= 16)?"\nVocê já pode votar!\n\n": "\nVocê NÃO pode votar!\n\n");
}
