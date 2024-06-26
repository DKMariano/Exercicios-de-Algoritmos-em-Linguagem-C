/***********************************************************************************
* Data atual: 26/06/2024                                                           *
* Exercício: 004 - Exercícios de Algoritmos (em C)                                 *                                                       *
* Instituição de Ensino: Estudonauta                                               *
* Disciplina: Linguagem C                                                          *
* Professor: Gustavo Guanabara                                                     *
* Aluno: D. K. Mariano                                                             *
* Descrição: Faça um programa que leia um número inteiro e mostre o seu antecessor *
*            e seu sucessor.                                                       *                                                       *                                                                                          *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configuração de localização, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipulação de strings, usada aqui para funções como strcspn (não utilizada neste código específico)

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    int num1 = 0, num2 = 0, soma = 0;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);  // Lê o número inteiro digitado pelo usuário e o armazena na variável num1
    while(getchar() != '\n');  // Limpa o buffer de entrada para evitar problemas com entradas subsequentes

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);  // Lê o número inteiro digitado pelo usuário e o armazena na variável num2
    while(getchar() != '\n');  // Limpa o buffer de entrada novamente

    soma = num1 + num2;

    printf("\n%d + %d = %d \n\n", num1, num2, soma);

    return 0;  // Indica que o programa terminou com sucesso
}
