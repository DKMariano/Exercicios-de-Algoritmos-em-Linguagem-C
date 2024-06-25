/**************************************************************************************
* Data atual: 25/06/2024                                                              *
* Exercício: 002 - Exercícios de Algoritmos (em C)                                    *                                                                                                        *
* Instituição de Ensino: Curso em Vídeo                                               *
* Disciplina: Linguagem C                                                             *
* Professor: Gustavo Guanabara                                                        *
* Aluno: D. K. Mariano                                                                *
* Descrição: Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de  *
*            boas-vindas para ela                                                     *                                                                                          *
**************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

     setlocale(LC_ALL, "Portuguese");

     char nome [20];

     printf("Qual é o seu nome? ");
     fgets(nome, sizeof(nome), stdin);
     nome[strcspn(nome, "\n")] = '\0';

     printf("\nOlá, %s. Seja bem-vindo(a)!\n\n", nome);

}
