/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:29:05 by hdino             #+#    #+#             */
/*   Updated: 2021/07/30 23:29:08 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		strLen1;
	int		strLen2;

	strLen1 = 0;
	strLen2 = 0;
	while (src[strLen1])
		strLen1++;
	str = (char *) malloc(strLen1 + 1);
	if (str == NULL)
		return ((void *)0);
	while (strLen2 <= strLen1)
	{
		str[strLen2] = src[strLen2];
		strLen2++;
	}
	return (str);
}
