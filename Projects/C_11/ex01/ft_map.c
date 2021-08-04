/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:57:14 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 12:05:00 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, void(*f)(int))
{
	int	i;
	int	*str;

	i = 0;
	str = (int *) malloc(sizeof(int) * 1);
	if (str == NULL)
		return ((void *)0);
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
