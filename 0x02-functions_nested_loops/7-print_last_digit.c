#include"main.h"
/**
*print_last_digit - a function to print last digit
*@n: number to print last digit result from
*Return: Always (success)
*/
int print_last_digit(int n)
{
int ld;
ld = (n % 10);

if (n < 0)
{
ld = (-1 * ld);
}
_putchar(ld + '0');
return (ld);
}
