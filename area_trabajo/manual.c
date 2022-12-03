#define _POSIX_CSOURCE 200809L
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* archivo = fopen("archivo_1.txt", "r");
	
	if (archivo == NULL){
	printf("%s\n", "Error");
	}

	int char_leido = fgetc(archivo);

	if (char_leido != EOF){
	printf("lei el char: %c\n", char_leido);
	}
	fclose(archivo);
}
