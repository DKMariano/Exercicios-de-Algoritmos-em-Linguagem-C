/*******************************************************************************************************************
* Data: 04/07/2024                                                                                                 *
* Exerc�cio: 016 - Exerc�cios de Algoritmos (em C)                                                                 *
* Institui��o de Ensino: Estudonauta                                                                               *
* Disciplina: Linguagem C                                                                                          *
* Professor: Gustavo Guanabara                                                                                     *
* Aluno: D. K. Mariano                                                                                             *
* Descri��o: Crie um programa que leia o n�mero de dias trabalhados em um m�s e mostre o sal�rio de um. Escreva    *
*            um programa para calcular a redu��o do tempo de vida de um fumante. Pergunte a quantidade de cigarros *
*            fumados por dias e quantos anos ele j� fumou. Considere que um fumante perde 10 min de vida a cada    *
*            cigarro. Calcule quantos dias de vida um fumante perder� e exiba o total em dias.                     *
*******************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double cigarros = 0, anos_fumando = 0, minutos_perdidos = 0, dias_perdidos = 0, anos_perdidos = 0;

    printf("\nQuantos cigarros voc� fuma por dia? ");
    scanf("%lf", &cigarros);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Voc� fuma h� quantos anos? ");
    scanf("%lf", &anos_fumando);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    minutos_perdidos = 10 * cigarros * anos_fumando * 364;
    dias_perdidos = minutos_perdidos /  1440;
    anos_perdidos = dias_perdidos  /  365;

    printf("\n-----------------------<<< CALCULADORA DE VIDA >>>-----------------------");
    printf("\nVoc� j� perdeu %.0f minutos da sua vida por causa do cigarro.", minutos_perdidos);
    printf("\nIsso equivale a %.0f dias de vida, ou aproximadamente %.0f ano(s).\n\n", dias_perdidos, anos_perdidos);

}
