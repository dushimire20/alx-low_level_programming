#include"main.h"
/**
*print_to_98 - a function to print all natural numbers
*@n: natural number input
*Return: Always (success)
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
