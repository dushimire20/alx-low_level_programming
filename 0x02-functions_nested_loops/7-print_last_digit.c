#include"main.h"
/**
*print_last_gigit - a function to print last digit
*@ld: last digit result
*Return: Always (success)
*/
int print_last_digit(int n)
{
int ld;
n = (n % 10);

if (n < 0)
{
ld = (-1 * ld);
}
_putchar(ld + '0');
return (ld);
}
