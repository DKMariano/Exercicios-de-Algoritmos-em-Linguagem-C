/*******************************************************************************************************************
* Data: 04/07/2024                                                                                                 *
* Exercício: 016 - Exercícios de Algoritmos (em C)                                                                 *
* Instituição de Ensino: Estudonauta                                                                               *
* Disciplina: Linguagem C                                                                                          *
* Professor: Gustavo Guanabara                                                                                     *
* Aluno: D. K. Mariano                                                                                             *
* Descrição: Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário de um. Escreva    *
*            um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros *
*            fumados por dias e quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada    *
*            cigarro. Calcule quantos dias de vida um fumante perderá e exiba o total em dias.                     *
*******************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double cigarros = 0, anos_fumando = 0, minutos_perdidos = 0, dias_perdidos = 0, anos_perdidos = 0;

    printf("\nQuantos cigarros você fuma por dia? ");
    scanf("%lf", &cigarros);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Você fuma há quantos anos? ");
    scanf("%lf", &anos_fumando);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    minutos_perdidos = 10 * cigarros * anos_fumando * 364;
    dias_perdidos = minutos_perdidos /  1440;
    anos_perdidos = dias_perdidos  /  365;

    printf("\n-----------------------<<< CALCULADORA DE VIDA >>>-----------------------");
    printf("\nVocê já perdeu %.0f minutos da sua vida por causa do cigarro.", minutos_perdidos);
    printf("\nIsso equivale a %.0f dias de vida, ou aproximadamente %.0f ano(s).\n\n", dias_perdidos, anos_perdidos);

}
