/************************************************************************************************
* Data: 08/07/2024                                                                              *
* Exerc�cio: 019 - Exerc�cios de Algoritmos (em C)                                              *
* Institui��o de Ensino: Estudonauta                                                            *
* Disciplina: Linguagem C                                                                       *
* Professor: Gustavo Guanabara                                                                  *
* Aluno: D. K. Mariano                                                                          *
* Descri��o: Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua m�dia *
*            e mostre na tela. No final, analise a m�dia e mostre se o aluno teve ou n�o um bom *
*            aproveitamento (se ficou acima da m�dia 7.0)                                       *                                                      *
************************************************************************************************/

#include <stdio.h>  // Biblioteca padr�o para entrada e sa�da
#include <locale.h>  // Biblioteca para configura��es regionais
#include <string.h>  // Biblioteca para fun��es de manipula��o de strings

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localidade para portugu�s

    printf("\n");
    printf("\n-------------------------------------<<< CADASTRO DE ALUNO >>>-----------------------------------\n");

    char nome[20];
    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);// L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em 'nome'
    nome[strcspn(nome, "\n")] = 0;  // Remove o caractere de nova linha ('\n') do final da string

    float nota1 =0;
    printf("Nota 1� Avalia��o: ");
    scanf("%f", &nota1);
    while(getchar() != '\n');  // Limpa o buffer de entrada

    float nota2 =0;
    printf("Nota 2� Avalia��o: ");
    scanf("%f", &nota2);
    while(getchar() != '\n');  // Limpa o buffer de entrada

    float media = (nota1+nota2) / 2;

    printf("\n");
    printf("\nAn�lise do desempenho estudantil do aluno %s\n", nome);
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("O aluno %s tirou nota %.1f na 1� Avalia��o e nota %.1f na 2� Avalia��o. ",nome,  nota1, nota2);
    printf("\nLogo, a m�dia do aluno %s � %.1f.", nome, media);

    if (media >= 7.0) {
        printf("\nO aluno foi APROVADO!\n\n");
    } else {
        printf("\nO aluno foi REPROVADO!\n\n");
    }
}
