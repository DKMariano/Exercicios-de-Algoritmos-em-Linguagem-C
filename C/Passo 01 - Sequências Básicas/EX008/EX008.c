/******************************************************************************************
* Data: 27/06/2024                                                                        *
* Exerc�cio: 008 - Exerc�cios de Algoritmos (em C)                                        *
* Institui��o de Ensino: Estudonauta                                                      *
* Disciplina: Linguagem C                                                                 *
* Professor: Gustavo Guanabara                                                            *
* Aluno: D. K. Mariano                                                                    *
* Descri��o: Desenvolva um programa que leia uma dist�ncia em metros e mostre na tela sua *
*            convers�o em Km, Hm, Dam, dm, cm, mm.                                        *
******************************************************************************************/

#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <locale.h>  // Biblioteca para configura��o de localiza��o, usada para suportar caracteres especiais

int main(){

    setlocale(LC_ALL, "Portuguese");  // Configura a localiza��o para suportar caracteres especiais em Portugu�s

    double distancia = 0;

    printf("Digite a dist�ncia em metros que voc� deseja conveter: ");
    scanf("%lf",&distancia);

    printf("\n\n-----------<<< Conversor de Dist�ncia >>>------------ \n");
    printf("Mil�metro: %.2f mm.\n", distancia*1000);
    printf("Cent�metro: %.2f cm.\n", distancia*100);
    printf("Dec�metro: %.2f dm.\n", distancia*10);
    printf("Metro: %.2f m.\n", distancia);
    printf("Dec�metro: %.2f dam.\n", distancia/10);
    printf("Hect�metro: %.2f hm.\n", distancia/100);
    printf("Quil�metro: %.2f km.\n\n", distancia/1000);

    return 0;  // Indica que o programa terminou com sucesso
}
