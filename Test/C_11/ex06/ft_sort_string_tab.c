/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:57:44 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 19:16:40 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sort_string_tab(char *arrPtr1, char *arrPtr2)
{
	while (*arrPtr1 != '\0' || *arrPtr2 != '\0')
	{
		if (*arrPtr1 > *arrPtr2)
		{
			return (-1);
		}
		if (*arrPtr1 < *arrPtr2)
		{
			return (1);
		}
		arrPtr1++;
		arrPtr2++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		z;
	int		result;
	char	*temp;

	z = 0;
	i = -1;
	while (tab[z])
		z++;
	while (++i < z)
	{
		j = i;
		while (++j < z)
		{
			result = sortArrays(tab[i], tab[j]);
			if (result == -1)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
