/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:15:14 by hdino             #+#    #+#             */
/*   Updated: 2021/08/06 23:15:17 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != ((void *)0))
	{
		applyf(root -> item);
		if (root -> left)
			btree_apply_prefix(root -> left, applyf);
		if (root -> right)
			btree_apply_prefix(root -> right, applyf);
	}
}
