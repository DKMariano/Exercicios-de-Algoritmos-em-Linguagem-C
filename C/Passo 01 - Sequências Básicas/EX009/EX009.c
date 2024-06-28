/*******************************************************************************************
* Data: 28/06/2024                                                                         *
* Exerc�cio: 009 - Exerc�cios de Algoritmos (em C)                                         *
* Institui��o de Ensino: Estudonauta                                                       *
* Disciplina: Linguagem C                                                                  *
* Professor: Gustavo Guanabara                                                             *
* Aluno: D. K. Mariano                                                                     *
* Descri��o: Fa�a um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) *
*            e mostre quantos d�lares ela pode comprar. Considere US$1,00 = R$5,50 .       *                                *
*******************************************************************************************/

#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��o de localiza��o

int main(){
    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

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
    printf("\nValor em D�LAR: $ %.2f", dolar);
    printf("\nValor em EURO: � %.2f", euro);
    printf("\nValor em IENE: � %.2f", iene);
    printf("\nValor em LIBRA ESTERLINA: � %.2f", libra_esterlina);
    printf("\nValor em FRANCO SUI�O: RCHF %.2f\n\n", franco_suico);

    return 0;  // Indica que o programa terminou com sucesso
}
