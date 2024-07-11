/**************************************************************************************************************
* Data: 11/07/2024                                                                                            *
* Exercício: 024 - Exercícios de Algoritmos (em C)                                                            *
* Instituição de Ensino: Estudonauta                                                                          *
* Disciplina: Linguagem C                                                                                     *
* Professor: Gustavo Guanabara                                                                                *
* Aluno: D. K. Mariano                                                                                        *
* Descrição: Crie um programa que leia o tamanho de três segmentos de reta. Analise seus comprimentos e diga  *
*            se é possível formar um triângulo com essas retas. Matematicamente, para três segmentos formarem *
*            um triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois               *
**************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float a = 0;
    printf("Digite o tamanho da primeira reta em cm: ");
    scanf("%f", &a);
    while(getchar() != '\n'); // Limpeza do buffer de entrada

    float b = 0;
    printf("Digite o tamanho da segunda reta em cm: ");
    scanf("%f", &b);
    while(getchar() != '\n'); // Limpeza do buffer de entrada

    float c = 0;
    printf("Digite o tamanho da terceira reta em cm: ");
    scanf("%f", &c);
    while(getchar() != '\n');// Limpeza do buffer de entrada

    printf ("\n============ ANALISADOR DE TRIÂNGULOS ============\n");

    if (a < b + c && b < a + c && c < a + b){
        printf("É possível formar um triângulo.\n\n");
    }else{
        printf("NÃO é possível formar um triângulo.\n\n");
        }
}
