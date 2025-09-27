#include <stdio.h>

int main()
{

	int verificacao;
	int senha = 1234;

	printf("Digite sua senha: \n");
	scanf("%d", &verificacao);

	if (verificacao == senha) {
		printf("Acesso Liberado!\n");
	} else {
		printf("Acesso Negado!\n");
	}

	return 0;
}