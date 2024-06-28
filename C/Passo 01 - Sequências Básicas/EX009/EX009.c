/*******************************************************************************************
* Data: 28/06/2024                                                                         *
* Exercício: 009 - Exercícios de Algoritmos (em C)                                         *
* Instituição de Ensino: Estudonauta                                                       *
* Disciplina: Linguagem C                                                                  *
* Professor: Gustavo Guanabara                                                             *
* Aluno: D. K. Mariano                                                                     *
* Descrição: Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) *
*            e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$5,50 .       *                                *
*******************************************************************************************/

#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <locale.h>  // Biblioteca para configuração de localização

int main(){
    setlocale(LC_ALL, "Portuguese");  // Configura a localização para suportar caracteres especiais em Português

    double real = 0 ,  dolar = 0, euro = 0, iene = 0, libra_esterlina = 0 , franco_suico = 0;

    printf("\n\nDigite o valor em reais que deseja converter: R$ ");
    scanf("%lf", &real);
    dolar = real / 5.5;
    euro = real / 5.98;
    iene = real / 0.035;
    libra_esterlina = real / 7.06;
    franco_suico = real / 6.22;

    printf("\n\n-----------<<< Conversor de Moedas >>>------------ \n");
    printf("\nValor em REAL: R$ %.2f", real);
    printf("\nValor em DÓLAR: $ %.2f", dolar);
    printf("\nValor em EURO: € %.2f", euro);
    printf("\nValor em IENE: ¥ %.2f", iene);
    printf("\nValor em LIBRA ESTERLINA: £ %.2f", libra_esterlina);
    printf("\nValor em FRANCO SUIÇO: RCHF %.2f\n\n", franco_suico);

    return 0;  // Indica que o programa terminou com sucesso
}
