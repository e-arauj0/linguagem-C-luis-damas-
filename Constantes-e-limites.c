#include <stdio.h>
#include <unistd.h> 

int main()
{
    //variaveis
	const float limite = 99;
	float num = 0;
	char op;


	printf("\t Constantes\n");
	printf("Limite: %.2f \n", limite);
	
	/*
	  // para realizar alteração de uma constante:
	  // limite = 55;    //erro

	  //modo correto de realizar a alterção de uma constante
	  printf("Novo limite: %d\n\n", limite + 1);    //correto

	  // soma de constante com outra varivel
	  printf("o novo limite é: %d \n", limite + num);
	*/

	printf("\t Alteração de constante \n \n");
	//repetindo a operação até ser solicitado um fim
	while(1) {
		printf("\t operações disponíveis: \n '+' soma \n '-' subtração \n '*' multiplicação \n '/' divisão \n\n Digite um número ou 'S' para sair \n\n");
		scanf("%f", &num);
		scanf("%c", &op);

		 if(op == 's'){ //finaliza ao digitar S
		     printf("Encerrado");
		     break;
		 }

		switch (op) { //esolhendo o operador
		case '+':
			printf("o novo limite é: ");
			printf("%.2f \n\n", limite + num);
			break;

		case '-':
			printf("o novo limite é: ");
			printf("%.2f \n\n", limite - num);
			break;

		case '/':
			printf("o novo limite é: ");
			printf("%.2f \n\n", limite / num);
			break;

		case '*':
			printf("o novo limite é: ");
			printf("%.2f \n\n", limite * num);
			break;

 		default:
 			printf("valor inválido");
		}
		
		sleep(2);
	}


	return 0;

}
// constantes  = seu valor não pode ser alterado

// tabela asc tabela com conversão para binário e hexadecimal

// binário