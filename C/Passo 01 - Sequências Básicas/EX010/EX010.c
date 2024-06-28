/*********************************************************************************************
* Data: 28/06/2024                                                                           *
* Exercício: 010 - Exercícios de Algoritmos (em C)                                           *
* Instituição de Ensino: Estudonauta                                                         *
* Disciplina: Linguagem C                                                                    *
* Professor: Gustavo Guanabara                                                               *
* Aluno: D. K. Mariano                                                                       *
* Descrição: Faça um algoritmo que leia a largura e altura de uma parede, calcule e mostre a *
*            área a ser pintada e a quantidade de tinta necessária para o serviço, sabendo   *
*            que cada litro de tinta pinta uma área de 2 metros quadrados                    *                                *
*********************************************************************************************/

#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configuração de localização

int main(){
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    float largura = 0, altura = 0, area = 0, tinta = 0;

    printf("\n\nDigite a largura da parede em metros: ");
    scanf("%f", &largura);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    area = largura * altura;

    tinta = area / 2;

    printf("\n\n-----------<<< Calculadora de Tinta >>>------------ \n");
    printf("Área a ser pintada: %.2f m² \n", area);
    printf("Quantidade de tinta necessária:  %.2f l\n\n", tinta);

    return 0;  // Indica que o programa terminou com sucesso
}
