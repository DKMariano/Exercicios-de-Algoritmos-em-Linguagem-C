/********************************************************************************************************
* Data: 04/07/2024                                                                                      *
* Exerc�cio: 014 - Exerc�cios de Algoritmos (em C)                                                      *
* Institui��o de Ensino: Estudonauta                                                                    *
* Disciplina: Linguagem C                                                                               *
* Professor: Gustavo Guanabara                                                                          *
* Aluno: D. K. Mariano                                                                                  *
* Descri��o: A locadora de carros precisa da sua ajuda para cobrar seus servi�os. Escreva um programa   *
*            que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias    *
*            pelos quais ele foi alugado. Calcule o pre�o total a pagar, sabendo que o carro custa R$90 *
*            por dia e R$0,20 por Km rodado.                                                            *
********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double km_percorridos = 0, aluguel = 0;
    int dias = 0;

    printf("\n\nDigite a quantidade de quil�metros percorridos pelo carro: ");
    scanf("%lf", &km_percorridos);
    while(getchar() !=  '\n');

    printf("Digite a quantidade de dias que o carro ficou alugado: ");
    scanf("%d", &dias);
    while(getchar() !=  '\n');

    aluguel = (dias * 90) + (km_percorridos * 0.20);

    printf("\n============== CALCULADORA DE ALUGUEL ==============");
    printf("\nKm percorridos: %.2f km ", km_percorridos);
    printf("\nQuantidade de dias de aluguel: %d dias",dias);
    printf("\nValor a pagar: R$ %.2f\n\n", aluguel);
}
