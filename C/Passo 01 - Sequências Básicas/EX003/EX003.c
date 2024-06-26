/***********************************************************************************
* Data atual: 26/06/2024                                                           *
* Exercício: 003 - Exercícios de Algoritmos (em C)                                 *                                                                                                         *
* Instituição de Ensino: Estudonauta                                               *
* Disciplina: Linguagem C                                                          *
* Professor: Gustavo Guanabara                                                     *
* Aluno: D. K. Mariano                                                             *
* Descrição: Crie um programa que leia o nome, ano de nascimento e o salário de um *
*            funcionário, mostrando no final uma mensagem                          *                           *                                                                                          *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configuração de localização, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipulação de strings, usada para funções como strcspn


int main() {

  setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

  char nome[30];

  double salario = 0;

  int ano_nascimento = 0;


  printf("Nome do funcionário: ");
  fgets(nome, sizeof(nome), stdin);  // Lê uma linha de texto, incluindo espaços, até o limite do buffer
  nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha adicionado pelo fgets

  printf("Ano de Nascimento do funcionário: ");
  scanf("%d", &ano_nascimento);
  while(getchar() != '\n');  // Limpa o buffer de entrada

  printf("Valor do salário do funcionário: R$ ");
  scanf("%lf", &salario);
  while(getchar() != '\n'); // Limpa o buffer de entrada

  printf("\n\n----------- FICHA FUNCIONAL -----------\n");
  printf("Nome: %s", nome);
  printf("\nAno de nascimento: %d", ano_nascimento);
  printf("\nSalário: R$ %.2f \n\n", salario);

  return 0;  // Indica que o programa terminou com sucesso
}
