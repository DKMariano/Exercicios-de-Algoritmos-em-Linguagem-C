/***********************************************************************************************************
* Data: 11/07/2024                                                                                         *
* Exercício: 024 - Exercícios de Algoritmos (em C)                                                         *
* Instituição de Ensino: Estudonauta                                                                       *
* Disciplina: Linguagem C                                                                                  *
* Professor: Gustavo Guanabara                                                                             *
* Aluno: D. K. Mariano                                                                                     *
* Descrição: Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em Km. Calcule  *
*            o preço da passagem, cobrando R$0.50 por Km para viagens até 200Km e R$0.35 para viagens mais *
*            longas                                                                                        *
***********************************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n================== TABELA DE PREÇOS ==================\n");
    printf("Viagens até 200 km \t\t R$ 0.50/km\n");
    printf("Viagens maiores que 200 km \t R$ 0.35/km\n");
    printf("--------------------------------------------------------\n");

    double distancia = 0, preco = 0;
    printf("Digite a distância que deseja percorrer em Km: ");
    scanf("%lf", &distancia);
    while(getchar() != '\n');

    printf("--------------------------------------------------------\n");

    if(distancia <= 200){
        preco = distancia * 0.5;
        printf("\nUma viagem de %.1f terá a taxa de km de R$ 0.50/km.\n", distancia);
        printf("Portanto, o valor da passagem é de R$ %.2f.\n", preco);
    }else{
        preco = distancia * 0.35;
        printf("\nUma viagem de %.1f terá a taxa de km de R$ 0.35/km.\n", distancia);
        printf("Portanto, o valor da passagem é de R$ %.2f.\n", preco);
    }
}
