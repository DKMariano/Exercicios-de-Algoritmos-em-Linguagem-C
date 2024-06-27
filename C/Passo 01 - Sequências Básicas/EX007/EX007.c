/************************************************************************************
* Data atual: 26/06/2024                                                            *
* Exercício: 007 - Exercícios de Algoritmos (em C)                                  *
* Instituição de Ensino: Estudonauta                                                *
* Disciplina: Linguagem C                                                           *
* Professor: Gustavo Guanabara                                                      *
* Aluno: D. K. Mariano                                                              *
* Descrição: Crie um algoritmo que leia um número real e mostre na tela o seu dobro *
*            e a sua terça parte.                                                   *
************************************************************************************/

#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <locale.h> // Biblioteca para configuração de localização, usada para suportar caracteres especiais

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    double numero = 0, dobro = 0, terca_parte = 0;

    printf("Digite um número real: ");
    scanf("%lf", &numero);

    dobro = numero * 2;

    terca_parte = numero / 3;

    printf("\n\n-------<<< Análise do número %lf >>>------- \n", numero);
    printf("O dobro de %.2f é %.2f.\n", numero, dobro);
    printf("A terça parte de %.2f é %.2f.\n\n", numero, terca_parte);

    return 0;  // Indica que o programa terminou com sucesso
}
