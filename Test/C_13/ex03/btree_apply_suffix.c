/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:17:38 by hdino             #+#    #+#             */
/*   Updated: 2021/08/06 23:17:41 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root != ((void *)0))
	{
		if (root -> left)
			btree_apply_suffix(root -> left, applyf);
		if (root -> right)
			btree_apply_suffix(root -> right, applyf);
		applyf(root -> item);
	}
}
