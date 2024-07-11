/***********************************************************************************************
* Data: 08/07/2024                                                                             *
* Exerc�cio: 019 - Exerc�cios de Algoritmos (em C)                                             *
* Institui��o de Ensino: Estudonauta                                                           *
* Disciplina: Linguagem C                                                                      *
* Professor: Gustavo Guanabara                                                                 *
* Aluno: D. K. Mariano                                                                         *
* Descri��o: Desenvolva um programa que leia um n�mero inteiro e mostre se ele � PAR ou �MPAR. *                                                      *
***********************************************************************************************/

#include <stdio.h>  // Biblioteca padr�o para entrada e sa�da
#include <locale.h>  // Biblioteca para configura��es regionais

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localidade para portugu�s

    int numero = 0;

    printf("Digite um n�mero inteiro maior que zero: ");
    scanf("%d", &numero);

    printf((numero%2==0)?"O n�mero � par! \n":"O n�mero � �mpar! \n");

}
