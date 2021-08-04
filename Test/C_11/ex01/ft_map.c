/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:55:33 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 21:07:39 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*str;

	i = 0;
	str = (int *) malloc(sizeof(int) * length);
	if (str == NULL)
		return ((void *)0);
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
