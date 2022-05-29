/*
 * Program_name: Hello
 * Author: Natanael Bezerra
 * Date: 2022-05-28
 * */

#include <stdio.h>
#include <hello.h>

void main(int arg, char**person){

	if(arg==2){
		say_hello(person[1]);
	}

}

void say_hello(char* name){
	
	printf("Olá %s ao Mundo de C! \n", name);
}
