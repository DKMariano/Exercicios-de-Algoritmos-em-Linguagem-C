/***********************************************************************************************
* Data: 08/07/2024                                                                             *
* Exercício: 019 - Exercícios de Algoritmos (em C)                                             *
* Instituição de Ensino: Estudonauta                                                           *
* Disciplina: Linguagem C                                                                      *
* Professor: Gustavo Guanabara                                                                 *
* Aluno: D. K. Mariano                                                                         *
* Descrição: Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR. *                                                      *
***********************************************************************************************/

#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <locale.h>  // Biblioteca para configurações regionais

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localidade para português

    int numero = 0;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &numero);

    printf((numero%2==0)?"O número é par! \n":"O número é ímpar! \n");

}
