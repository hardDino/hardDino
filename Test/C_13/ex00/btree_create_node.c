/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:12:48 by hdino             #+#    #+#             */
/*   Updated: 2021/08/06 23:12:51 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_list	*ft_create_node(void *data)
{
	t_btree	*node;/Users/hdino/Desktop/Test/C_13/ex01/btree_apply_prefix.c

	node = (t_btree *) malloc(sizeof(t_btree));
	if (node == NULL)
		return ((void *)0);
	node->left = ((void *)0);
	node->right = ((void *)0);
	node->item = item;
	return (node);
}
