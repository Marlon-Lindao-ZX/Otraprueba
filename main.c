#include <stdio.h>
#include <string.h>

int main(){

    char *sed = NULL;

    int x = 3;
    int sd = 100;
    
    float y = 0;
    double z = 0;
    char a = 88;
    char f = 'f';

    short b = 0;
    long c = 0;
    

    char varString[100] = "Hola mundo";
    char varString2[] = "Hola mundo";
    char *varString3;
    char varString4[] = "hola2";

    varString3 = varString3 + 1;
    printf("%s\n",varString3);

    strcat(varString,varString2);
    printf("%s\n",varString);

    x = x + 1; //Suma
    x = x - 1; //Resta
    x = x * 1; //Multiplicacion
    x = x / 2; // Division
    x = x % 2; // Modulo

    a = 5 + 2;

    printf("Hola Mundo - %d\n",sd);
    printf("Valor numerico de a - %d\n", a);
    printf("Caracter de a - %c\n", a);
    printf("Valor numerico de f - %d\n", f);
    printf("Caracter de f - %c\n", f);
}