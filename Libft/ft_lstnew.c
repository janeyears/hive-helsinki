/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:35:46 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/06 12:50:33 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return NULL;
	element->content = content;
	element->next = NULL;
	return (element);
}