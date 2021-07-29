void	ft_rev_int_tab(int *tab, int size)
{
	int	buff;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		buff = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buff;
		i++;
	}
}
