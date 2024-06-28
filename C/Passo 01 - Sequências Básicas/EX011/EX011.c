/**********************************************************************************************
* Data: 28/06/2024                                                                            *
* Exercício: 011 - Exercícios de Algoritmos (em C)                                            *
* Instituição de Ensino: Estudonauta                                                          *
* Disciplina: Linguagem C                                                                     *
* Professor: Gustavo Guanabara                                                                *
* Aluno: D. K. Mariano                                                                        *
* Descrição:  Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo *
*             grau e mostre o valor de Delta.                                                 *
*********************************************************************************************/

#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configuração de localização

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

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

    printf("\nO valor de delta dessa equação é igual a %d", delta);
}
