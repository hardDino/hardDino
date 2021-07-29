int	ft_strcmp(char *s1, char *s2)
{
	int	tmp;
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		tmp = (s1[i] - s2[i]);
		return (tmp);
	}
	return (1);
}
