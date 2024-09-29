int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0 || i > 20)
	{
		return (0);
	}
	else if (i == 0 || i == 1)
	{
		return (1);
	}
	else
	{
		while (i > 1)
		{
			i--;
			nb *= i;
		}
	}
	return (nb);
}
