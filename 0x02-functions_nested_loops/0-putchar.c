#include<_putchar.h>

/**
*main - print _putchar followed by new line
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a[] = "_putchar";
int i;
for (i = 0; i <= 8; i++)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
