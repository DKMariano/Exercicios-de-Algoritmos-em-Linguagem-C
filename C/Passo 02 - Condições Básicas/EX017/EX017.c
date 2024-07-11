/*******************************************************************************************************************
* Data: 08/07/2024                                                                                                 *
* Exerc�cio: 017 - Exerc�cios de Algoritmos (em C)                                                                 *
* Institui��o de Ensino: Estudonauta                                                                               *
* Disciplina: Linguagem C                                                                                          *
* Professor: Gustavo Guanabara                                                                                     *
* Aluno: D. K. Mariano                                                                                             *
* Descri��o: Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem *
*            dizendo que o usu�rio foi multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima *
*            da velocidade permitida.                                                                              *
*******************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double velocidade = 0, multa = 0;
    printf("\nQual a velocidade do carro em km/h? ");
    scanf("%lf", &velocidade);


    if(velocidade <= 80){
        printf("\nVoc� est� dirigindo dentro do limite de velocidade permitido!");
        printf("\nDirija com cuidado!\n\n");
    }else{
        multa = (velocidade - 80)* 5;
        printf("\n-----------------------<<< ATEN��O >>>-----------------------");
        printf("\nVoc� ultrapassou a velocidade m�xima permitida de 80 km/h!");
        printf("\nVoc� foi multado em R$ %.2f.", multa);
        printf("\nReduza sua velocidade para n�o receber mais multas!\n\n");
    }
}
