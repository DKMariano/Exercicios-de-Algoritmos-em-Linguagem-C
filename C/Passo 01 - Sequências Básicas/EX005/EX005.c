/**********************************************************************************
* Data atual: 26/06/2024                                                          *
* Exerc�cio: 005 - Exerc�cios de Algoritmos (em C)                                *                                                       *
* Institui��o de Ensino: Estudonauta                                              *
* Disciplina: Linguagem C                                                         *
* Professor: Gustavo Guanabara                                                    *
* Aluno: D. K. Mariano                                                            *
* Descri��o: Fa�a um programa que leia as duas notas de um aluno em uma mat�ria e *
*            mostre na tela a sua m�dia na disciplina                             *                                                       *                                                                                          *
**********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipula��o de strings, usada aqui para fun��es como strcspn (n�o utilizada neste c�digo espec�fico)

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

    char nome [20];

    float nota1 = 0, nota2 = 0, media = 0;

    printf("\n----------------------<<< CADASTRO DE ALUNO >>>----------------------\n");

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);  // L� uma linha de texto, incluindo espa�os, at� o limite do buffer
    nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha adicionado pelo fgets

    printf("Nota da 1� Avalia��o: ");
    scanf("%f", &nota1);  // L� a nota da primeira avalia��o e a armazena na vari�vel nota1
    while(getchar() != '\n');  // Limpa o buffer de entrada

    printf("Nota da 2� Avalia��o: ");
    scanf("%f", &nota2);  // L� a nota da segunda avalia��o e a armazena na vari�vel nota2
    while(getchar() != '\n');  // Limpa o buffer de entrada

    media = (nota1 + nota2) / 2;

    printf("\n");
    printf("\nAn�lise do desempenho estudantil do aluno %s", nome);
    printf("\n---------------------------------------------------------------------\n");
    printf("O aluno tirou nota %.2f na 1� Avalia��o e nota %.2f na 2� Avalia��o.", nota1, nota2);
    printf("\nPortanto, a M�DIA de %s � %.2f.\n\n",nome, media);

    return 0;  // Indica que o programa terminou com sucesso
}
