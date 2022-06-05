/*
 * Program-name: Conversor de bases
 * Date: 06/05/2022
 * Author: Natanael B.
 * */
#include <stdio.h>
#define SIZE 8 // Tamanho dos arrays

void binaryConvert(
		int number,
		char binaryResul[],
		int arrayHength
		);

void hexaConvert(
		int number,
		char hexaResul[],
		int arrayHength
		);


int main(void)
{

	int inputNumber;
	char binaryResul[SIZE] = {'0'};
	char hexaResul[SIZE] = {32,32,32,32,32,32,32,32};

	printf("Digite um número: ");
	scanf("%u", &inputNumber);

	binaryConvert(inputNumber,binaryResul, SIZE);
	printf("This number in binary is: %s \n", binaryResul);


	hexaConvert(inputNumber, hexaResul, SIZE);
	printf("This number in hexadecimal is: ");

	for(int i=0; i < SIZE; i++){
		if (hexaResul[i] != 32){
			printf("%c", hexaResul[i]);
		}
	}

	printf("\n");


	return 0;
}

void binaryConvert(int number,char binaryResul[], int arrayHength)
{

	char byPo[2] = {'0','1'};

	for(int i=(arrayHength-1); i >= 0; i--){

		binaryResul[i] = byPo[number%2];

		number = number/2;

	}

}

void hexaConvert(int number, char hexaResul[],int arrayHength)
{

	char hexaSymb[16] = {
			'0', '1', '2', '3',
			'4', '5', '6', '7',
			'8', '9', 'A', 'B',
			'C', 'D', 'E', 'F'
	};


	for(int i=(arrayHength-1); i >= 0; i--){

		if (number != 0){

			hexaResul[i] = hexaSymb[number%16];

			number = number/16;
		}
		else if (number == 0 && i == 7){
			hexaResul[i] = hexaSymb[number%16];
			break;
		}

	}

}
