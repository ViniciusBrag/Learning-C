#include <stdio.h>
#include <stdlib.h>

/*
    Aula 4 
    Lendo números inteiros
*/

int main()
{
    /* code */
    int valor, valor2;/// variavel que recebe apenas um valor inteiro.

    // Atribuição
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);


    printf("\nValor da varivavel: %d\nSegundo valor: %d", valor, valor2);


    return 0;
}
