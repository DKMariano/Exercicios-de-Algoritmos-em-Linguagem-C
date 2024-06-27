/***********************************************************************************
* Data: 26/06/2024                                                                 *
* Exerc�cio: 006 - Exerc�cios de Algoritmos (em C)                                 *                                                       *
* Institui��o de Ensino: Estudonauta                                               *
* Disciplina: Linguagem C                                                          *
* Professor: Gustavo Guanabara                                                     *
* Aluno: D. K. Mariano                                                             *
* Descri��o: Fa�a um programa que leia um n�mero inteiro e mostre o seu antecessor *
*            e seu sucessor.                                                       *                                                       *                                                                                          *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipula��o de strings, usada para fun��es como strcspn (n�o utilizada neste c�digo espec�fico)

int main(){



    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

    int numero = 0, antecessor = 0, sucessor = 0;  // Declara��o e inicializa��o das vari�veis inteiras

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    antecessor = numero - 1;

    sucessor = numero + 1;


    printf("\n-------<<< Analisando o n�mero %d >>>------- \n", numero);
    printf("\nAntecessor: %d", antecessor);
    printf("\nSucessor: %d\n\n", sucessor);

    return 0;
}
