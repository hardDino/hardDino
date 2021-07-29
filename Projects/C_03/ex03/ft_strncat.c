char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
