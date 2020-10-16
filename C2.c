#include <stdio.h>

int main(){
	char num = 'f';
	printf("%d\n",num);
	
	char string[] = "Feliz";
	printf("%s\n",string);
	
	//while(1){		}; No me detecta error de whiles infinitos xd
	printf("Chais\n");
	
	int x = 0;
	
	//x++; //incremento
	x = 4;
	/*
	int ex = x++ + 1;
	printf("ex: %d\n",ex);
	printf("x: %d\n",x);
	*/
	int ex2 = ++x + 1;
	printf("ex2: %d\n",ex2);
	printf("x: %d\n",x);
	
}
