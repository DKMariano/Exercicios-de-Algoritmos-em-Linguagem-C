/**************************************************************************************
* Data atual: 24/06/2024                                                              *
* Exercício: 001 - Exercícios de Algoritmos (em C)                                    *                                                                                                        *
* Instituição de Ensino: Curso em Vídeo                                               *
* Disciplina: Linguagem C                                                             *
* Professor: Gustavo Guanabara                                                        *
* Aluno: D. K. Mariano                                                                *
* Descrição: Escreva um programa que mostre na tela a mensagem "Olá, Mundo!" na tela. *                                                                                          *
**************************************************************************************/


#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída que fornece funções básicas de entrada e saída.
#include <locale.h>  // Inclusão da biblioteca que define e manipula a formatação de texto de acordo com a região do usuário.

int main (){

    setlocale(LC_ALL, "Portuguese"); //Esta linha define a locale para português

    printf("Olá, mundo!\n"); // Exibição da mensagem "Olá, mundo!".
}
