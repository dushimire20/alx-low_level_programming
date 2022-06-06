#include<stdio.h>

/**
*main - print all single digit of base 10 from 0
*
*Return: Always 0 (Success)
*/
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');

return (0);
}
