/**************************************************************************************
* Data atual: 24/06/2024                                                              *
* Exerc�cio: 001 - Exerc�cios de Algoritmos (em C)                                    *                                                                                                        *
* Institui��o de Ensino: Curso em V�deo                                               *
* Disciplina: Linguagem C                                                             *
* Professor: Gustavo Guanabara                                                        *
* Aluno: D. K. Mariano                                                                *
* Descri��o: Escreva um programa que mostre na tela a mensagem "Ol�, Mundo!" na tela. *                                                                                          *
**************************************************************************************/


#include <stdio.h> // Inclus�o da biblioteca padr�o de entrada e sa�da que fornece fun��es b�sicas de entrada e sa�da.
#include <locale.h>  // Inclus�o da biblioteca que define e manipula a formata��o de texto de acordo com a regi�o do usu�rio.

int main (){

    setlocale(LC_ALL, "Portuguese"); //Esta linha define a locale para portugu�s

    printf("Ol�, mundo!\n"); // Exibi��o da mensagem "Ol�, mundo!".
}
