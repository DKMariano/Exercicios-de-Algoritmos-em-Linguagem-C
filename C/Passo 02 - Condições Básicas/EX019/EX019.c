/************************************************************************************************
* Data: 08/07/2024                                                                              *
* Exercício: 019 - Exercícios de Algoritmos (em C)                                              *
* Instituição de Ensino: Estudonauta                                                            *
* Disciplina: Linguagem C                                                                       *
* Professor: Gustavo Guanabara                                                                  *
* Aluno: D. K. Mariano                                                                          *
* Descrição: Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média *
*            e mostre na tela. No final, analise a média e mostre se o aluno teve ou não um bom *
*            aproveitamento (se ficou acima da média 7.0)                                       *                                                      *
************************************************************************************************/

#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <locale.h>  // Biblioteca para configurações regionais
#include <string.h>  // Biblioteca para funções de manipulação de strings

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localidade para português

    printf("\n");
    printf("\n-------------------------------------<<< CADASTRO DE ALUNO >>>-----------------------------------\n");

    char nome[20];
    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);// Lê uma linha de texto do usuário (incluindo espaços) e armazena em 'nome'
    nome[strcspn(nome, "\n")] = 0;  // Remove o caractere de nova linha ('\n') do final da string

    float nota1 =0;
    printf("Nota 1ª Avaliação: ");
    scanf("%f", &nota1);
    while(getchar() != '\n');  // Limpa o buffer de entrada

    float nota2 =0;
    printf("Nota 2ª Avaliação: ");
    scanf("%f", &nota2);
    while(getchar() != '\n');  // Limpa o buffer de entrada

    float media = (nota1+nota2) / 2;

    printf("\n");
    printf("\nAnálise do desempenho estudantil do aluno %s\n", nome);
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("O aluno %s tirou nota %.1f na 1ª Avaliação e nota %.1f na 2ª Avaliação. ",nome,  nota1, nota2);
    printf("\nLogo, a média do aluno %s é %.1f.", nome, media);

    if (media >= 7.0) {
        printf("\nO aluno foi APROVADO!\n\n");
    } else {
        printf("\nO aluno foi REPROVADO!\n\n");
    }
}
