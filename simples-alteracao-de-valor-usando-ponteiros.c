#include <stdio.h>

// faca um ponteiro que aponte para um ponteiro que aponta para uma variavel e, a partir do primeiro ponteiro, altere o valor da variavel

int main() {
	// inicializando uma variavel A com o valor inteiro 12
	int a = 12;

	// inicializando um ponteiro A com o endereço da variavel A
	int * ponteiro_a = &a;

	// inicializando um ponteiro B com o endereço do ponteiro A
	int ** ponteiro_b = &ponteiro_a;

	// imprimindo o valor dentro do endereço que ponteiro B armazena
	printf("O valor de A a partir do ponteiro_b é = %d \n", **ponteiro_b);

	// alterando o valor dentro do endereço que o ponteiro B armazena
	**ponteiro_b = 666;

	// imprimindo o valor dentro do endereço que o ponteiro B armazena
	printf("O valor de A a partir da alteracao do ponteiro_b é = %d \n", **ponteiro_b);

	// alterando o valor dentro do endereco que o ponteiro A armazena
	*ponteiro_a = 123456789;

	// imprimindo o valor dentro do endereco que o ponteiro B armazena
	printf("O valor de A a partir da alteracao do ponteiro_a é = %d \n", **ponteiro_b);
}