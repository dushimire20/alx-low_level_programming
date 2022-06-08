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
return (n);
if (n != 98)
{
_putchar(',');
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
return (n);
if (n != 98)
{
_putchar(',');
}
n--;
}
}
else
{
return (98);
}
_putchar('\n');
}
