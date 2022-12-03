#include <stdio.h>

int main(int argc, char** argv)
{

    FILE *temp = fopen("texto.data","r");
    if(!temp)
    {
        printf("no eh piduido abrir el archivo\n");
        return 1;
    }
    // cerramos ya que cuando hay otro programa qeu quiera accder a dicho archivo
    // lopudicese hacer
    //programa para cerrar archivos
    fclose(temp);
}
