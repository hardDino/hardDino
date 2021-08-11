/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:16:52 by hdino             #+#    #+#             */
/*   Updated: 2021/08/06 23:16:55 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != ((void *)0))
	{
		if (root -> left)
			btree_apply_infix(root -> left, applyf);
		applyf(root -> item);
		if (root -> right)
			btree_apply_infix(root -> right, applyf);
	}
}
