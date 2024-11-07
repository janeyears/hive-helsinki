/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:40:36 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/06 12:41:01 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list  *tmp;

    if(lst == NULL || del == NULL)
        return ;
    while (*lst)
    {
        tmp = (*lst) -> next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    free(*lst);
    *lst = NULL;
}