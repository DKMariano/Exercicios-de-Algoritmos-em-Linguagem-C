/*******************************************************************************************************************
* Data: 08/07/2024                                                                                                 *
* Exercício: 017 - Exercícios de Algoritmos (em C)                                                                 *
* Instituição de Ensino: Estudonauta                                                                               *
* Disciplina: Linguagem C                                                                                          *
* Professor: Gustavo Guanabara                                                                                     *
* Aluno: D. K. Mariano                                                                                             *
* Descrição: Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem *
*            dizendo que o usuário foi multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima *
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
        printf("\nVocê está dirigindo dentro do limite de velocidade permitido!");
        printf("\nDirija com cuidado!\n\n");
    }else{
        multa = (velocidade - 80)* 5;
        printf("\n-----------------------<<< ATENÇÃO >>>-----------------------");
        printf("\nVocê ultrapassou a velocidade máxima permitida de 80 km/h!");
        printf("\nVocê foi multado em R$ %.2f.", multa);
        printf("\nReduza sua velocidade para não receber mais multas!\n\n");
    }
}
