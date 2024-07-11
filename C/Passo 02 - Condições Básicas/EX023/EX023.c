/********************************************************************************************************
* Data: 11/07/2024                                                                                      *
* Exerc�cio: 023 - Exerc�cios de Algoritmos (em C)                                                      *
* Institui��o de Ensino: Estudonauta                                                                    *
* Disciplina: Linguagem C                                                                               *
* Professor: Gustavo Guanabara                                                                          *
* Aluno: D. K. Mariano                                                                                  *
* Descri��o: Numa promo��o exclusiva para o Dia da Mulher, uma loja quer dar descontos para todos, mas  *
*            especialmente para mulheres. Fa�a um programa que leia nome, sexo e o valor das compras do *
*            cliente e calcule o pre�o com desconto. Sabendo que:                                       *
*            - Homens ganham 5% de desconto                                                             *
*            - Mulheres ganham 13% de desconto                                                          *
********************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\n----------------<<< LOJAS TITA >>>---------------- \n");
    printf("\nSeja bem vindo(a) as LOJAS TITAS!\n");

    char nome [30];
    printf("\nDigite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);
    nome[stricmp(nome, "\n")] = '\0'; // Remove o caractere de nova linha

    char sexo;
    printf("Digite o sexo do cliente (M/F): ");
    sexo = getchar();
    while(getchar() != '\n'); // Limpa o buffer do stdin

    double preco = 0, novo_preco = 0;
    printf("Digite o valor total das compras: R$ ");
    scanf("%lf", &preco);
    while(getchar() != '\n'); // Limpa o buffer do stdin

    if (sexo == 'F' || sexo == 'f'){
        float desconto = 13.0 / 100.0;
        novo_preco = preco * ( 1 - desconto);
        printf("\nPor ser mulher, voc� receber� R$ %.2f de desconto!", preco*desconto);
        printf("\nPague APENAS R$ %.2f!", novo_preco);
        printf("\nFELIZ DIA DAS MULHERES!\n");
    }else{
        float desconto = 5.0 / 100.0;
        novo_preco = preco * ( 1 - desconto);
        printf("\nVoc� receber� R$ %.2f de desconto!", preco*desconto);
        printf("\nPague APENAS R$ %.2f!\n", novo_preco);
    }
    printf("\nObrigado pela prefer�ncia!");
    printf("\nPorb favor, volte sempre! \n\n");
}
