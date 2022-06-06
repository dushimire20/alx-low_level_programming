#include<stdio.h>

/**
*main - print all number of base 16 in lower case
*
*Return: Always 0 (success)
*/
int main(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
