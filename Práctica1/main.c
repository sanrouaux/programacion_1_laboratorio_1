#include <stdio.h>
#include <stdlib.h> //bibliotecas

int main() //proceso principal
{
    /*int unEntero;
    float unDecimal;
    char unCaracter;
    float suma;

    printf("Ingrese un entero: ");
    scanf("%d", &unEntero);

    printf("Ingrese un decimal: ");
    scanf("%f", &unDecimal);

    printf("Ingrese un caracter: ");
    fflush(stdin);  //limpia el buffer de entrada para que no haya errores al leer caracteres. Otra opción es dejar un espacio en " %c". Para Linux, setbuff(stdin,NULL);
    scanf("%c", &unCaracter);

    suma = unEntero + unDecimal;

    printf("El numero es %d\n",unEntero);
    printf("El numero es %.2f\n",unDecimal); //.2 indica que muestra 2 digitos del float
    printf("El numero es %c\n",unCaracter);
    printf("La suma es %f\n",suma);*/



    int unNumero;
    int otroNumero;
    float division;

    printf("Ingrese un numero: ");
    scanf("%d",&unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d",&otroNumero);

    division = (float)unNumero/otroNumero; // (float) castea. Castear es transformar entre distintos tipos de datos numéricos.

    printf("El resultado es %f",division);


    return 0;
}
