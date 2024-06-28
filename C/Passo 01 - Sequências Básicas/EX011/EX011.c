/**********************************************************************************************
* Data: 28/06/2024                                                                            *
* Exerc�cio: 011 - Exerc�cios de Algoritmos (em C)                                            *
* Institui��o de Ensino: Estudonauta                                                          *
* Disciplina: Linguagem C                                                                     *
* Professor: Gustavo Guanabara                                                                *
* Aluno: D. K. Mariano                                                                        *
* Descri��o:  Desenvolva uma l�gica que leia os valores de A, B e C de uma equa��o do segundo *
*             grau e mostre o valor de Delta.                                                 *
*********************************************************************************************/

#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��o de localiza��o

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

    int a = 0,  b = 0,  c = 0, delta = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite o valor de B: ");
    scanf("%d", &b);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite o valor de C: ");
    scanf("%d", &c);
    while(getchar() != '\n');// Limpa o buffer do teclado

    delta = (b*b) - (4 * a * c);

    printf("\nO valor de delta dessa equa��o � igual a %d", delta);
}
