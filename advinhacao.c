#include <stdio.h>

int main()
{
	printf("*****************************************\n");
	printf("* Bem vindo ao nosso jogo de advinhação *\n");
	printf("*****************************************\n");

	int numerosecreto = 27;
	int chute;
	int tentativas = 0;


	while(1)
	{
		printf("Tentativa %d\n", tentativas + 1);
		printf("Qual é o seu chute?  ");

		scanf("%d", &chute);
		printf("seu chute foi %d\n", chute);

		if (chute < 0)
		{
			printf("Você não pode chutar números negativos!\n");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if (acertou)
		{
			printf(" Parabéns! Você acertou! \n");
			printf("Você é um bom jogador! \n");

			break;
		}

		else if (maior)
		{
			printf("Seu numero foi maior que o numero secreto! \n");
		}
		else
		{
			printf("Seu numero foi menor que o numero secreto! \n");
		}
		tentativas = tentativas + 1;
		printf("Tente Novamente! \n");
	}
	printf("Fim de jogo!\n");
	printf("Você acertou em %d tentativas!\n", tentativas);
}
