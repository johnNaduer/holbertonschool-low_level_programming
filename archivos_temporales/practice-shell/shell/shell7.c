#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
char *cargar_texto(char *buf,size_t len);

char *cargar_texto(char *buf,size_t len)
{
	int len_letra;
        getline(&buf,&len,stdin);
	len_letra=strlen(buf);
	buf[len_letra-1]='\0';
	
	return (buf);
	free(buf);

}

char **toukenizar_lectura(char *lectura, char separador[])
{

	
	char **guardar_argumentos;
	char *tem;
	char *token;
	int i=0;
	guardar_argumentos = calloc(10,sizeof(char *));
	token = strtok(lectura,separador);
	
	while(token!=NULL)
	{
	printf("%s\n",token);
	tem=strdup(token);
	guardar_argumentos[i]=tem;
	token = strtok(NULL,separador);
	i++;
	}
}


int main(void)
{
        char *lectura;
        char *buffer = NULL;
        size_t len = 0;
	char **toukenizado;
	char separador[]=" ,\t\n";

while (1)
{

        printf("$ ");

        lectura = cargar_texto(buffer,len);
	
	toukenizado = toukenizar_lectura(lectura,separador);

			
	

}

free(lectura);

return (0);
}
