#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float aplicarDescuento(float precio)
{
	int porcentajeDescuento = 5;
	float descuento;

	descuento = precio - precio * porcentajeDescuento /100;
	return descuento;
}

int contarCaracteres(char str[],char caracter)
{
	int cantidad = 0;
	int longitud = strlen(str);

	for(int i=0; i < longitud; i++)
	        {
	            if(str[i] == caracter)
	            {
	                cantidad ++;
	            }
	        }
	return cantidad;
}

int main(void) {
	setbuf(stdout, NULL);
	char cadena[] = "Hola mundo";

	printf("Precio con descuento: %0.2f\n",aplicarDescuento(100));
	printf("Cadena: %s.\nLa %c aparece %d veces.",cadena,'o',contarCaracteres(cadena,'o'));

}
