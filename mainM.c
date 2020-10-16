#include <stdio.h> //Las librerias siempre van a terminar en .h
#include <string.h> //strcat libreria

int main(){
    int x = 0;
    float y = 5;
    double z = 0;
    char a = 88;
    char f = 'f';
    
    short b = 0;
    long c = 0;

    char varString[100];
    //char *varS; //El * es para guardar un espacio de memoria
    char varString3[] = "Milca, ";
    char varString2[] = "Hola Mundo C\n";
    //varS = 9;

    x = x + 1; //Suma
    x = x - 1;
    x = x * 1;
    x = x / 2;
    x = x % 2;

    printf("Holis\n"); //Siempre va al inicio una cadena de caracteres
    printf("Hola %f\n",y); //Para imprimir variables %d,%s%f%c...
    //printf("%s\n",varS);
    
    //Imprimir valor numerico y ASCII
    printf("Valor numerico de a - %d\n",a);
    printf("Caracter de a - %c\n",a);
    printf("Valor numerico de f - %d\n",f);
    printf("Caracter de f - %c\n",f);
    
    //Concatenar texto no se usa + sino strcat()
    //printf("%s \n",strcat(varString3,varString2));
    strcat(varString3,varString2);
    printf("%s\n",varString3); //Se concatena al primer string referenciado
    printf("%s \n",varString2);
    printf("%s\n",varString3);
	//Compilador >>gcc main.c
	//Ejecutable >>./a.out 
	
	
}
