#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...);

typedef struct _functions
{
    char tipo;
    void (*f)();
}functions;

void imprimir(char *c)
{
printf("%c",c);
}

void funcion_d(va_list c)
{
printf("%d",va_arg(c,int));
}


int _printf(const char *format, ...)
{
functions funciones[]={{'s',imprimir},{'d',funcion_d},{'\0',NULL}};
int n,i,j;
va_list arg;
va_start(arg, format);
const char *str;
str=format;
for(i=0;format[i]!='\0';i++)
{
    funciones[0].f(format[i]);
    if(format[i]=='%')
    {
        i++;
        for(j=0;funciones[j].tipo!='\0';j++)
        {
            if(format[i]==funciones[j].tipo)
            {
                funciones[j].f(arg);
            }
        }
    }

}
}
int main()
{
    int len;
    int len2;
    len = _printf("Let's try to printf a simple sentence.\n");
     _printf("Length:[%d]\n",len);

    return (0);
}
