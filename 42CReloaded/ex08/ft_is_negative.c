#include <unistd.h>

char	ft_is_negative(int i)
{
	if (i >= 0)
	{
		write (1, "P", 1);
	}
	else if (i < 0)
	{
		write (1, "N", 1);
	}
	return (0);
}
/*
int main(void)
{
	ft_is_negative(-2);
	return (0);
}
*/
