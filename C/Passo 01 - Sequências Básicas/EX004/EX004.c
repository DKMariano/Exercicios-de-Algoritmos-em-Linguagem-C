/***********************************************************************************
* Data atual: 26/06/2024                                                           *
* Exerc�cio: 004 - Exerc�cios de Algoritmos (em C)                                 *                                                       *
* Institui��o de Ensino: Estudonauta                                               *
* Disciplina: Linguagem C                                                          *
* Professor: Gustavo Guanabara                                                     *
* Aluno: D. K. Mariano                                                             *
* Descri��o: Fa�a um programa que leia um n�mero inteiro e mostre o seu antecessor *
*            e seu sucessor.                                                       *                                                       *                                                                                          *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipula��o de strings, usada aqui para fun��es como strcspn (n�o utilizada neste c�digo espec�fico)

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

    int num1 = 0, num2 = 0, soma = 0;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);  // L� o n�mero inteiro digitado pelo usu�rio e o armazena na vari�vel num1
    while(getchar() != '\n');  // Limpa o buffer de entrada para evitar problemas com entradas subsequentes

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);  // L� o n�mero inteiro digitado pelo usu�rio e o armazena na vari�vel num2
    while(getchar() != '\n');  // Limpa o buffer de entrada novamente

    soma = num1 + num2;

    printf("\n%d + %d = %d \n\n", num1, num2, soma);

    return 0;  // Indica que o programa terminou com sucesso
}
