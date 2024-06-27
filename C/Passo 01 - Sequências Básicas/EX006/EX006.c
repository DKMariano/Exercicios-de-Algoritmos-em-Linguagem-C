/***********************************************************************************
* Data: 26/06/2024                                                                 *
* Exercício: 006 - Exercícios de Algoritmos (em C)                                 *                                                       *
* Instituição de Ensino: Estudonauta                                               *
* Disciplina: Linguagem C                                                          *
* Professor: Gustavo Guanabara                                                     *
* Aluno: D. K. Mariano                                                             *
* Descrição: Faça um programa que leia um número inteiro e mostre o seu antecessor *
*            e seu sucessor.                                                       *                                                       *                                                                                          *
***********************************************************************************/

#include <stdio.h>
#include <locale.h>  // Biblioteca para configuração de localização, usada para suportar caracteres especiais
#include <string.h>  // Biblioteca para manipulação de strings, usada para funções como strcspn (não utilizada neste código específico)

int main(){



    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    int numero = 0, antecessor = 0, sucessor = 0;  // Declaração e inicialização das variáveis inteiras

    printf("Digite um número: ");
    scanf("%d", &numero);

    antecessor = numero - 1;

    sucessor = numero + 1;


    printf("\n-------<<< Analisando o número %d >>>------- \n", numero);
    printf("\nAntecessor: %d", antecessor);
    printf("\nSucessor: %d\n\n", sucessor);

    return 0;
}
