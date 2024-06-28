/*********************************************************************************************
* Data: 28/06/2024                                                                           *
* Exerc�cio: 010 - Exerc�cios de Algoritmos (em C)                                           *
* Institui��o de Ensino: Estudonauta                                                         *
* Disciplina: Linguagem C                                                                    *
* Professor: Gustavo Guanabara                                                               *
* Aluno: D. K. Mariano                                                                       *
* Descri��o: Fa�a um algoritmo que leia a largura e altura de uma parede, calcule e mostre a *
*            �rea a ser pintada e a quantidade de tinta necess�ria para o servi�o, sabendo   *
*            que cada litro de tinta pinta uma �rea de 2 metros quadrados                    *                                *
*********************************************************************************************/

#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��o de localiza��o

int main(){
    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

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
    printf("�rea a ser pintada: %.2f m� \n", area);
    printf("Quantidade de tinta necess�ria:  %.2f l\n\n", tinta);

    return 0;  // Indica que o programa terminou com sucesso
}
