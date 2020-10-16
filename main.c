#include <stdio.h>
#include <string.h>

int main(){

    char a = 88; 
    char f = 'f';

    short b = 0;

    int x = 3;
    int sd = 100;

    long c = 0;
    
    float y = 0;
    double z = 0;

    char varString[100] = "primero";
    char varString2[] = "Hola mundo";
    char varString3[250] = "hola2";
    char varString4[100];

    strcpy(varString4, varString);

    strcat(varString4,varString2);

    x = x + 1; //Suma
    x += 1;
    x = x - 1; //Resta
    x = x * 1; //Multiplicacion
    x = x / 2; // Division
    x = x % 2; // Modulo

    x++; //incremento
    x = 4;
    int ex = ++x + 1;
    printf("El resultado de ex es: %d y de x es: %d\n", ex, x);
    
    ++x;
    x--; //decremento
    --x;

    printf("Valor numerico de f - %d\n", f);
    printf("Caracter de f - %c\n", f);
    

    return 0;
}




/*
char *sed = NULL;

    
    

     = "Hola mundo";
    char varString2[] = "Hola mundo";
    char *varString3;
    char varString4[] = "hola2";

    varString3 = varString3 + 1;
    printf("%s\n",varString3);

    strcat(varString,varString2);
    printf("%s\n",varString);

    

    a = 5 + 2;

    printf("Hola Mundo - %d\n",sd);
    printf("Valor numerico de a - %d\n", a);
    printf("Caracter de a - %c\n", a);
    printf("Valor numerico de f - %d\n", f);
    printf("Caracter de f - %c\n", f);
*/