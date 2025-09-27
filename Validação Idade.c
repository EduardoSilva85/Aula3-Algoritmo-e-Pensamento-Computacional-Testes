#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    
    if (idade >= 18){
        printf("Acesso liberado: Você tem mais de 18!");
    } else {
        printf("Acesso Negado: Você tem menos de 18!");
    }
    
    return 0;
}