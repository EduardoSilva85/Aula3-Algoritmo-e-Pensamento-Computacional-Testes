#include <stdio.h>

int main() {
    int numero, tentativas = 0;
    const int numero_secreto = 42;
    
    printf("Jogo de Adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100:\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        tentativas++;
        
        if (numero > 100 || numero <= 0) {
            printf("Número precisa ser entre 1 e 100. ");
        }
        
        if (numero < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (numero > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativas!\n", tentativas);
        }
    } while (numero != numero_secreto);
    
    return 0;
}