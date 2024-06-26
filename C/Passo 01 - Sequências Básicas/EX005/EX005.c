/**********************************************************************************
* Data atual: 26/06/2024                                                          *
* Exercício: 005 - Exercícios de Algoritmos (em C)                                *                                                       *
* Instituição de Ensino: Estudonauta                                              *
* Disciplina: Linguagem C                                                         *
* Professor: Gustavo Guanabara                                                    *
* Aluno: D. K. Mariano                                                            *
* Descrição: Faça um programa que leia as duas notas de um aluno em uma matéria e *
*            mostre na tela a sua média na disciplina                             *                                                       *                                                                                          *
**********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configuração de localização, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipulação de strings, usada aqui para funções como strcspn (não utilizada neste código específico)

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    char nome [20];

    float nota1 = 0, nota2 = 0, media = 0;

    printf("\n----------------------<<< CADASTRO DE ALUNO >>>----------------------\n");

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);  // Lê uma linha de texto, incluindo espaços, até o limite do buffer
    nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha adicionado pelo fgets

    printf("Nota da 1ª Avaliação: ");
    scanf("%f", &nota1);  // Lê a nota da primeira avaliação e a armazena na variável nota1
    while(getchar() != '\n');  // Limpa o buffer de entrada

    printf("Nota da 2ª Avaliação: ");
    scanf("%f", &nota2);  // Lê a nota da segunda avaliação e a armazena na variável nota2
    while(getchar() != '\n');  // Limpa o buffer de entrada

    media = (nota1 + nota2) / 2;

    printf("\n");
    printf("\nAnálise do desempenho estudantil do aluno %s", nome);
    printf("\n---------------------------------------------------------------------\n");
    printf("O aluno tirou nota %.2f na 1ª Avaliação e nota %.2f na 2ª Avaliação.", nota1, nota2);
    printf("\nPortanto, a MÉDIA de %s é %.2f.\n\n",nome, media);

    return 0;  // Indica que o programa terminou com sucesso
}
