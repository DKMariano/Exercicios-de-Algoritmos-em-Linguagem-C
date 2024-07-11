/**************************************************************************************************************
* Data: 11/07/2024                                                                                            *
* Exerc�cio: 024 - Exerc�cios de Algoritmos (em C)                                                            *
* Institui��o de Ensino: Estudonauta                                                                          *
* Disciplina: Linguagem C                                                                                     *
* Professor: Gustavo Guanabara                                                                                *
* Aluno: D. K. Mariano                                                                                        *
* Descri��o: Crie um programa que leia o tamanho de tr�s segmentos de reta. Analise seus comprimentos e diga  *
*            se � poss�vel formar um tri�ngulo com essas retas. Matematicamente, para tr�s segmentos formarem *
*            um tri�ngulo, o comprimento de cada lado deve ser menor que a soma dos outros dois               *
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

    printf ("\n============ ANALISADOR DE TRI�NGULOS ============\n");

    if (a < b + c && b < a + c && c < a + b){
        printf("� poss�vel formar um tri�ngulo.\n\n");
    }else{
        printf("N�O � poss�vel formar um tri�ngulo.\n\n");
        }
}
