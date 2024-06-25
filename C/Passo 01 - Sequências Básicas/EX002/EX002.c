/**************************************************************************************
* Data atual: 25/06/2024                                                              *
* Exerc�cio: 002 - Exerc�cios de Algoritmos (em C)                                    *                                                                                                        *
* Institui��o de Ensino: Curso em V�deo                                               *
* Disciplina: Linguagem C                                                             *
* Professor: Gustavo Guanabara                                                        *
* Aluno: D. K. Mariano                                                                *
* Descri��o: Fa�a um programa que leia o nome de uma pessoa e mostre uma mensagem de  *
*            boas-vindas para ela                                                     *                                                                                          *
**************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

     setlocale(LC_ALL, "Portuguese");

     char nome [20];

     printf("Qual � o seu nome? ");
     fgets(nome, sizeof(nome), stdin);
     nome[strcspn(nome, "\n")] = '\0';

     printf("\nOl�, %s. Seja bem-vindo(a)!\n\n", nome);

}
