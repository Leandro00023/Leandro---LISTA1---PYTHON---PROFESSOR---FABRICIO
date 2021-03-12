#include <stdio.h>
#include <stdlib.h>

#define PESSOAS 20

void limparEntradaDeDados() 
{
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n') 
	{

	}
}

void mediaIdadePorSexo() 
{
	char sexo;
	int idade;
	int idadeAcumulado;
	double mediaMasculino;
	double mediaFeminino;
	int contMasculino = 0;
	int contFeminino = 0;

	idadeAcumulado = 0;
	mediaMasculino = 0;
	mediaFeminino = 0;
	printf("\n\n");

	for (int i = 0; i < PESSOAS; i++) 
	{
		printf("\nPor favor, informe o %2iª idade: ", (i + 1));
		scanf("%i", &idade);
		limparEntradaDeDados();

		printf("\nPor favor, informe o sexo\n(M)asculino (F)eminino:");
		scanf("%c", &sexo);
		limparEntradaDeDados();

		if (sexo == 'f' || sexo == 'F') 
		{
			printf("Sexo Feminino\n");
			contFeminino++; // contFeminino += 1 || contFeminino = contFeminino + 1
			mediaFeminino += idade;
		} else if (sexo == 'm' || sexo == 'M') 

		{
			printf("Sexo Masculino\n");
			contMasculino += 1;
			mediaMasculino = mediaMasculino + idade;
		} else {
			printf("O sexo informado é inválido\n\n");
		}
	} // Fim do for

	printf("\n\n");

	printf("Resultado:\n");

	printf("Foram contadas %2i mulheres e a média de idade é: %2.2lf", contFeminino,
			(mediaFeminino / contFeminino));

	printf("\n\nFim...");

}

int main(void) {
	mediaIdadePorSexo();
	return EXIT_SUCCESS;
}

