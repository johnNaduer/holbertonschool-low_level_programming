#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
typedef struct _functions
{
    char tipo;
    int (*f)(va_list);
}functions;

void imprimir(char c)
{
   _putchar(c);
}
int funcion_c(va_list c)
{
   int i;
   i=_putchar(va_arg(c,int));
   return i;
}
int funcion_s(va_list c)
{
    char *str;
    int i=0;
    str=va_arg(c,char*);
    for(i=0;str[i]!='\0';i++)
    {
        _putchar(str[i]);
    }
    return (i);
}
int _printf(const char *format, ...)
{
functions funciones[]={{'c',funcion_c},{'s',funcion_s},{'\0',NULL}};
int i,j;
void (*p)(char);
p=&imprimir;
va_list arg;
va_start(arg, format);
int leng1=0;
int leng2=0;
for(i=0;format[i]!='\0';i++)
{
      
    if(format[i]=='%')
    {
        i++;
        if(format[i]=='%')
        {
            (*p)(format[i]);
        }
        for(j=0;funciones[j].tipo!='\0';j++)
        {
            if(format[i]==funciones[j].tipo)
            {
                leng2+=funciones[j].f(arg);
            }
        }
    }
    else
    {
        leng1++;
        (*p)(format[i]);
    }
}

return (leng1+leng2);
va_end(arg);
}
int main()
{
    char nuevo[]="hola";
    int y;
    y=_printf("%s ' ",nuevo);
    printf("%i\n",y);
    return 0;
}

