#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    float numero = 3.1415;
    
    printf("Valor do número: %.2f\n", numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Valor lido: %.3f\n", numero);

    return 0;
}
