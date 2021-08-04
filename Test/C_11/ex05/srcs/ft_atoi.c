/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:49:40 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 12:58:42 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_integer(char *str, int integer)
{
	while (*str >= '0' && *str <= '9')
	{
		integer = integer * 10 + (*str - '0');
		str++;
	}
	return (integer);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	integer;

	integer = 0;
	minus = 1;
	while (*str)
	{
		while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v')
		{
			str++;
		}
		while ((*str == '-' || *str == '+') && *str != ' ')
		{
			if (*str == '-')
				minus *= -1;
			str++;
		}
		integer = ft_integer(str, integer);
		return (integer * minus);
	}
	return (integer);
}
