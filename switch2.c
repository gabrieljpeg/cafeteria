#include <stdio.h>
#include <stdlib.h>

int main (){

    int a, b, opcao, resultado;

    printf("Digite dois valores:");
    scanf("%d %d", &a, &b);

    //Apresenta o menu
    printf("Menu\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("Escolha uma op��o:");

    //L� a op��o escolhida
    scanf("%d", &opcao);

    //Sele��o da op��o
    switch(opcao){
        case 1:
            resultado = a + b; //Faz a soma
            break;
        case 2:
            resultado = a - b; //Faz a subtra��o
            break;
        default:
            printf("Op��o inv�lida!");
            break;
    }

    printf("Resultado: %d", resultado);

    return 0;
}
