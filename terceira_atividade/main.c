/*
 * Program-name: Summation
 * Author: Natanael B
 * Date: 2022-05-29
 * Lincese: GPL-3.0
 * */

#include <stdio.h>
#include <depend.h>

int main(int arg, char**argv){
	
	int n = 5;	
	
	printf("%d \n", execute_operation(n));

	return execute_operation(n);
}

int exponentiation(int base, int exponent){

	int value_operation = base;
	
	for (int i=1; i < exponent; ++i){

		value_operation *= base;

	}

	return value_operation;
}

int execute_operation(int stopping_point){
	
	int value_operation = 0;

	for( int i=0; i <= stopping_point; ++i){
		
		value_operation += exponentiation( ( (2*i)+1 )  ,2);
	}

	return value_operation;
}
