/***************************************************************************************
* Data atual: 11/05/2024                                                               *
* Exerc�cio: 003 - Exerc�cios de Algoritmos (em C)                                     *                                                                                                         *
* Institui��o de Ensino: Estudonauta                                                   *
* Disciplina: Linguagem C                                                              *
* Professor: Gustavo Guanabara                                                         *
* Aluno: D. K. Mariano                                                                 *
* Descri��o: Crie um programa que leia o nome e o sal�rio de um funcion�rio, mostrando *
*            no final uma mensagem                                                     *                                                                                          *
***************************************************************************************/

#include <stdio.h>

int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma eh %d", soma);
}
