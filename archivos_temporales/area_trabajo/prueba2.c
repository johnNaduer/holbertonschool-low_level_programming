#include <stdio.h>

int main()
{
        //Apertura del archivo
        FILE *fp1;
        fp1 = fopen("entrada.txt","r");//Apertura del archivo
        if( fp1 == NULL){
        printf("problema al abrir el archivo !! termiando el programa");
        return (-1); // exit (-1)
        }
        FILE *fp2;
	fp2 = 	fopen ("salida.txt","w"); //apertura del archivo
	if (fp2 == NULL){ // SI HAY UN PROBLEMA con fopen, devuelve NULL
	printf("problema al abrir el archivo de salida. termiando el programa\n");
	return (-1);//exit(-1)
	}
	
	
	//proceso
	char cad[1000];
	fgets(cad,sizeof(cad),fp1);
	printf("%s\n",cad);
	fgets(cad,sizeof(cad),fp1);
	printf("%s\n",cad);
	return (0);

}
