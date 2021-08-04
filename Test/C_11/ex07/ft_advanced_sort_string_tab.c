/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:57:50 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 19:58:00 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			result = cmp(tab[i], tab[j]);
			if (result > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
