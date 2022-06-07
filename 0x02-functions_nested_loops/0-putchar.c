#include<main.h>
#include<stdio.h>

/**
*main - print _putchar followed by new line
*
*Return: Always 0 (Success)
*/
int main(void)
{
char *a = "_putchar";
while (*a)
{
_putchar(*a);
a++;
}

_putchar('\n');
return (0);
}
