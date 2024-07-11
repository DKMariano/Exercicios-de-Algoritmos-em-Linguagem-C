/******************************************************************************************************************
* Data: 08/07/2024                                                                                                *
* Exerc�cio: 018 - Exerc�cios de Algoritmos (em C)                                                                *
* Institui��o de Ensino: Estudonauta                                                                              *
* Disciplina: Linguagem C                                                                                         *
* Professor: Gustavo Guanabara                                                                                    *
* Aluno: D. K. Mariano                                                                                            *
* Descri��o: Fa�a um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se *
*            ela pode ou n�o votar                                                                                *
*******************************************************************************************************************/


#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��es regionais
#include <time.h>  // Biblioteca para manipula��o de tempo

int main(){

    setlocale(LC_ALL, "Portuguese");

    setlocale(LC_ALL, "Portuguese");  // Configura a localidade para portugu�s

    time_t t;  // Declara uma vari�vel para armazenar o tempo atual
    time(&t);  // Obt�m o tempo atual e armazena em 't'
    struct tm *data;  // Declara uma estrutura para armazenar data e hora

    data = localtime(&t);  // Converte 't' para uma estrutura tm com a data e hora local
    int ano = data -> tm_year;  // Obt�m o ano atual (desde 1900)
    int ano_atual = ano + 1900;  // Ajusta o ano para o formato correto

    int ano_nascimento = 0, idade = 0;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento );

    idade = ano_atual - ano_nascimento;

    printf("\n-----------------------<<< TRT informa >>>-----------------------");
    printf("\nVoc� tem %d anos!", idade);

    printf((idade >= 16)?"\nVoc� j� pode votar!\n\n": "\nVoc� N�O pode votar!\n\n");
}
