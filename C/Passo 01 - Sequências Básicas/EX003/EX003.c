/***********************************************************************************
* Data atual: 26/06/2024                                                           *
* Exerc�cio: 003 - Exerc�cios de Algoritmos (em C)                                 *                                                                                                         *
* Institui��o de Ensino: Estudonauta                                               *
* Disciplina: Linguagem C                                                          *
* Professor: Gustavo Guanabara                                                     *
* Aluno: D. K. Mariano                                                             *
* Descri��o: Crie um programa que leia o nome, ano de nascimento e o sal�rio de um *
*            funcion�rio, mostrando no final uma mensagem                          *                           *                                                                                          *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipula��o de strings, usada para fun��es como strcspn


int main() {

  setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

  char nome[30];

  double salario = 0;

  int ano_nascimento = 0;


  printf("Nome do funcion�rio: ");
  fgets(nome, sizeof(nome), stdin);  // L� uma linha de texto, incluindo espa�os, at� o limite do buffer
  nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha adicionado pelo fgets

  printf("Ano de Nascimento do funcion�rio: ");
  scanf("%d", &ano_nascimento);
  while(getchar() != '\n');  // Limpa o buffer de entrada

  printf("Valor do sal�rio do funcion�rio: R$ ");
  scanf("%lf", &salario);
  while(getchar() != '\n'); // Limpa o buffer de entrada

  printf("\n\n----------- FICHA FUNCIONAL -----------\n");
  printf("Nome: %s", nome);
  printf("\nAno de nascimento: %d", ano_nascimento);
  printf("\nSal�rio: R$ %.2f \n\n", salario);

  return 0;  // Indica que o programa terminou com sucesso
}
