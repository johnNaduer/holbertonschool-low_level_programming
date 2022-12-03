#include <stdio.h>

int main()
{
	char nombreArch[] = "pruebaNoEsta.txt";
	FILE *fp;
	fp = fopen(nombreArch,"w");//Apertura del archivo
	if( fp == NULL){
	printf("problema al abrir el archivo !! termiando el programa");
	return (-1); // exit (-1)
	}
	
	//proceso
	////cerrar el archivo
	fclose(fp);
	return (0);
}
