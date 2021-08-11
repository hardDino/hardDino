/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 23:18:31 by hdino             #+#    #+#             */
/*   Updated: 2021/08/06 23:18:33 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void \
	   					*item, (*cmpf)(void *, void *))
{
	t_btree	*nNode;

	nNode = *root;
	if (cmpf(nNode -> item, item) < nNode -> item)
		btree_insert_data(nNode -> right, item, cmpf);
	else if (cmpf(nNode -> item, item) > nNode -> item)
		btree_insert_data(nNode -> left, item, cmpf);
	else
		btree_create_node(item);
}
