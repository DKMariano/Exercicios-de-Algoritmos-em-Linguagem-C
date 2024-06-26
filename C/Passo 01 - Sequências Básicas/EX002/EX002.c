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

#include <stdio.h> // Biblioteca padr�o de entrada e sa�da
#include <locale.h> // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais
#include <string.h> // Biblioteca para manipula��o de strings, usada para fun��es como strcspn

int main(){

     setlocale(LC_ALL, "Portuguese"); // Configura a localiza��o para suportar caracteres especiais em Portugu�s

     char nome [20];

     printf("Qual � o seu nome? ");
     fgets(nome, sizeof(nome), stdin); // L� uma linha de texto, incluindo espa�os, at� o limite do buffer
     nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha adicionado pelo fgets

     printf("\nOl�, %s. Tudo bem?", nome);
     printf("\n� um grande prazer lhe conhecer, %s.\n\n", nome);

     return 0;
}
