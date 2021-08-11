#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    if (begin_list)
    {
        while(begin_list->next)
        {
            begin_list = begin_list->next;
            return(begin_list);
        }
    }
    return ((void *)0);
}
