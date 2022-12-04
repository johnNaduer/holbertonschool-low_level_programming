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

int main(void)
{
        char *lectura;
        char *buffer = NULL;
        size_t len = 0;

while (1)
{

        printf("$ ");

        lectura = cargar_texto(buffer,len);
	
	

}

free(lectura);

return (0);
}
