#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
char Lower = 'a';
char Upper = 'A';

while (Lower <= 'z')
{
putchar (Lower);
Lower++;
}
while (Upper <= 'z')
{
putchar (Upper);
Upper++;
}
putchar('\n');
return (0);
}
