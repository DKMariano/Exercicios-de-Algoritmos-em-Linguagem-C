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

#include <stdio.h> // Biblioteca padrão de entrada e saída
#include <locale.h> // Biblioteca para configuração de localização, usada para suportar caracteres especiais
#include <string.h> // Biblioteca para manipulação de strings, usada para funções como strcspn

int main(){

     setlocale(LC_ALL, "Portuguese"); // Configura a localização para suportar caracteres especiais em Português

     char nome [20];

     printf("Qual é o seu nome? ");
     fgets(nome, sizeof(nome), stdin); // Lê uma linha de texto, incluindo espaços, até o limite do buffer
     nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha adicionado pelo fgets

     printf("\nOlá, %s. Tudo bem?", nome);
     printf("\nÉ um grande prazer lhe conhecer, %s.\n\n", nome);

     return 0;
}
