/************************************************************************************
* Data atual: 26/06/2024                                                            *
* Exerc�cio: 007 - Exerc�cios de Algoritmos (em C)                                  *
* Institui��o de Ensino: Estudonauta                                                *
* Disciplina: Linguagem C                                                           *
* Professor: Gustavo Guanabara                                                      *
* Aluno: D. K. Mariano                                                              *
* Descri��o: Crie um algoritmo que leia um n�mero real e mostre na tela o seu dobro *
*            e a sua ter�a parte.                                                   *
************************************************************************************/

#include <stdio.h>  // Biblioteca padr�o de entrada e sa�da
#include <locale.h> // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

    double numero = 0, dobro = 0, terca_parte = 0;

    printf("Digite um n�mero real: ");
    scanf("%lf", &numero);

    dobro = numero * 2;

    terca_parte = numero / 3;

    printf("\n\n-------<<< An�lise do n�mero %lf >>>------- \n", numero);
    printf("O dobro de %.2f � %.2f.\n", numero, dobro);
    printf("A ter�a parte de %.2f � %.2f.\n\n", numero, terca_parte);

    return 0;  // Indica que o programa terminou com sucesso
}
