#include <stdio.h>

int main() {
    
    float nota1, nota2, media;
    char sair = 'y';
    
    printf("\n=== CALCULADORA DE MEDIA ===\n");
    
    while (sair == 'y' || sair == 'Y') {
        printf("\nDigite a primeira nota do aluno (entre 0 e 10):\n");
        scanf("%f", &nota1);

        while (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida. Digite novamente:\n");
            scanf("%f", &nota1);
        }

        printf("Digite a segunda nota do aluno (entre 0 e 10):\n");
        scanf("%f", &nota2);

        while (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida. Digite novamente:\n");
            scanf("%f", &nota2);
        }

        media = (nota1 + nota2) / 2;
        printf("A média do aluno é: %.1f\n", media);

        printf("\nDeseja calcular outra média (y/n)?\n ");
        scanf(" %c", &sair);

        while (sair != 'y' && sair != 'Y' && sair != 'n' && sair != 'N') {
            printf("Caractere inválido. Deseja calcular outra média (y/n)? ");
            scanf(" %c", &sair);
        }
    }
    
     printf("\n=== Obrigado por usar a calculadora de média!===\n");
     
    return 0;
}
