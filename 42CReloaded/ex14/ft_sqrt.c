int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(36));
	return (0);
}
*/
