
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_alphabet(void)
{
	write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*
int main(void)
{
	ft_print_alphabet();
}
*/
