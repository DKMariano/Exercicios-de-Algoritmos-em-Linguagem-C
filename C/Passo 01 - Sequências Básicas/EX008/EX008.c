/******************************************************************************************
* Data: 27/06/2024                                                                        *
* Exercício: 008 - Exercícios de Algoritmos (em C)                                        *
* Instituição de Ensino: Estudonauta                                                      *
* Disciplina: Linguagem C                                                                 *
* Professor: Gustavo Guanabara                                                            *
* Aluno: D. K. Mariano                                                                    *
* Descrição: Desenvolva um programa que leia uma distância em metros e mostre na tela sua *
*            conversão em Km, Hm, Dam, dm, cm, mm.                                        *
******************************************************************************************/

#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configuração de localização, usada para suportar caracteres especiais

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    double distancia = 0;

    printf("Digite a distância em metros que você deseja conveter: ");
    scanf("%lf",&distancia);

    printf("\n\n-----------<<< Conversor de Distância >>>------------ \n");
    printf("Milímetro: %.2f mm.\n", distancia*1000);
    printf("Centímetro: %.2f cm.\n", distancia*100);
    printf("Decímetro: %.2f dm.\n", distancia*10);
    printf("Metro: %.2f m.\n", distancia);
    printf("Decâmetro: %.2f dam.\n", distancia/10);
    printf("Hectômetro: %.2f hm.\n", distancia/100);
    printf("Quilômetro: %.2f km.\n\n", distancia/1000);

    return 0;  // Indica que o programa terminou com sucesso
}
