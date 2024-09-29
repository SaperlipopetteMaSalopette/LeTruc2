#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_print_argument(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		ft_putchar(arg[i]);
		i++;
	}
}


int	main(int argc, char **argv)
{
	int	i;

	i = 1;


