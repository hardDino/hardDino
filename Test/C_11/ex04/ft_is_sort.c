/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:09:07 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 19:23:41 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	value;

	i = 0;
	value = f(tab[i], tab[i + 1]);
	while (i < length)
	{
		if (value == 0)
			value = f(tab[i], tab[i + 1]);
		if (value > 0 && f(tab[i], tab[i + 1]) < 0)
			return (0);
		else if (value < 0 && f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
