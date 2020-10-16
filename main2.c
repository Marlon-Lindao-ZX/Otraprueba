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
	int ex = x++ + 1; //Toma el valor de x que es 4 y le suma 1, luego x se actualiza y se convierte en 5, de modo que x y ex son 5
	printf("ex: %d\n",ex);
	printf("x: %d\n",x);
	*/
	int ex2 = ++x + 1; //Incrementa el valor de x que es 4 y lo hace 5 y luego le suma 1, de modo que x = 5 y ex = 6
	printf("ex2: %d\n",ex2);
	printf("x: %d\n",x);
	
}
