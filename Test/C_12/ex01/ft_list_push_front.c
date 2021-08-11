#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *nElem;

	if (*begin_list)
	{
		nElem = ft_create_elem(data);
		nElem->next = *begin_list;
		*begin_list = nElem;
	}
	else
		*begin_list = ft_create_elem(data);
}

