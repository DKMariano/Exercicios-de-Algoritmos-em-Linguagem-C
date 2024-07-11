/***********************************************************************************************************
* Data: 11/07/2024                                                                                         *
* Exerc�cio: 024 - Exerc�cios de Algoritmos (em C)                                                         *
* Institui��o de Ensino: Estudonauta                                                                       *
* Disciplina: Linguagem C                                                                                  *
* Professor: Gustavo Guanabara                                                                             *
* Aluno: D. K. Mariano                                                                                     *
* Descri��o: Fa�a um algoritmo que pergunte a dist�ncia que um passageiro deseja percorrer em Km. Calcule  *
*            o pre�o da passagem, cobrando R$0.50 por Km para viagens at� 200Km e R$0.35 para viagens mais *
*            longas                                                                                        *
***********************************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n================== TABELA DE PRE�OS ==================\n");
    printf("Viagens at� 200 km \t\t R$ 0.50/km\n");
    printf("Viagens maiores que 200 km \t R$ 0.35/km\n");
    printf("--------------------------------------------------------\n");

    double distancia = 0, preco = 0;
    printf("Digite a dist�ncia que deseja percorrer em Km: ");
    scanf("%lf", &distancia);
    while(getchar() != '\n');

    printf("--------------------------------------------------------\n");

    if(distancia <= 200){
        preco = distancia * 0.5;
        printf("\nUma viagem de %.1f ter� a taxa de km de R$ 0.50/km.\n", distancia);
        printf("Portanto, o valor da passagem � de R$ %.2f.\n", preco);
    }else{
        preco = distancia * 0.35;
        printf("\nUma viagem de %.1f ter� a taxa de km de R$ 0.35/km.\n", distancia);
        printf("Portanto, o valor da passagem � de R$ %.2f.\n", preco);
    }
}
