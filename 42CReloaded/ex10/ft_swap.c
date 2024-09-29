void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
{
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
*/
