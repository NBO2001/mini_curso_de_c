/*
 *	Program-name: Fibbo
 *	Author: Natanael B
 *	Date: 01-06-2021
 * */

#include <stdio.h>

long fibbo( long number );

int main(void){

	long result; // Armazenador do resultado
	long num; // Contador

	printf("Digite um número \n");

	scanf("%ld ", &num);

	result = fibbo(num);

	printf("O resultado é:  %ld \n", result);

	return 0;
}

long fibbo( long number ){

	// Case base
	if (number == 0 | number == 1){
		return number;
	}
	else{
		return fibbo(number - 1) + fibbo(number -2 );
	}

}

