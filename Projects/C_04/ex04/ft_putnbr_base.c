/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:42:57 by hdino             #+#    #+#             */
/*   Updated: 2021/07/27 22:36:59 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	exam_base(char *base)
{
	int	strLen;
	int	j;

	strLen = 0;
	j = 0;
	while (base[strLen])
	{
		j = strLen + 1;
		if (base[strLen] == '+' || base[strLen] == '-')
			return (0);
		if (base[strLen] < 32 || base[strLen] > 126)
			return (0);
		while (base[j])
		{
			if (base[strLen] == base[j])
				return (0);
			j++;
		}
		strLen++;
	}
	if (strLen < 2)
		return (0);
	return (strLen);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	nbr_result[255];
	int	i;

	i = 0;
	base_size = exam_base(base);
	if (base_size)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (nbr)
		{
			nbr_result[i] = nbr % base_size;
			nbr = nbr / base_size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_result[i]]);
	}
}
