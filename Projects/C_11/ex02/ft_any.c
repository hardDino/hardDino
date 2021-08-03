int	*ft_map(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;

	while (i < length)
	{
        if (f(tab[i]) != 0)
		    return (1);
		i++;
	}
	return (0);
}