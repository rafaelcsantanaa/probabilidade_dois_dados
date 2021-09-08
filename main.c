#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, prob;

    printf("DIGITE UM NUMERO ENTRE 2 E 12:\n");
    scanf("%f", &numero1);
    if (numero1>=2 && numero1<=12){
    prob = ((numero1 - 1) / 36)*100;
    printf("\nA PROBABILIDADE DE SAIR ESSE NUMERO EH:\n%.2f%%\n", prob);
    }
    else
        printf("NUMERO INCORRETO, DIGITE NOVAMENTE");

    return 0;
}
