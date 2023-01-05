#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{

size_t final;
size_t mitad;
size_t mitad2;
size_t i,i2;
final=size-1;
mitad2=0;
for(i=0;i<size;i++)
{
mitad=(final+mitad2)/2;

for(i2=0;i2<=final;i2++)
{
printf("%i ",array[i2]);
}
printf("\n");
if(array[mitad]==value)
{
break;
}
else
{
if(array[mitad]<value)
{
mitad2=mitad+1;
}
else
{
if(array[mitad]>value)
{
final=mitad-1;
}
}
}
}
if(array[i]==value && i<size)
{
return (array[i]);
}
else
{
return (-1);
}
}
