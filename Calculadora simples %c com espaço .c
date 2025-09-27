#include <stdio.h>

int main() {

    float num1, num2, resultado;
    char ope;
    
    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);
    
    printf("Digite o operador (+, -, /, *): \n");
    scanf(" %c", &ope);
    
    printf("Digite o segundo número: \n");
    scanf("%f", &num2);
    
    switch(ope) {
        case '+' :
            resultado = num1 + num2;
            printf("resultado: %.2f \n", resultado);
            break;
        case '-' :
            resultado = num1 - num2;
            printf("resultado: %.2f \n", resultado);
            break;
        case '/' :
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("resultado: %.2f \n", resultado);
            } else {
                printf("Erro divisão por zero!\n");
            }
            break;
        case '*' :
            if ( num1 && num2 != 0) {
                resultado = num1 * num2;
                printf("resultado: %.2f \n", resultado);
            } else {
                printf("Multiplicação de zero, o resultado sempre será 0.\n");
            }
            break;
        default :
            printf("Operador inválido!\n");
    }
    return 0;
}