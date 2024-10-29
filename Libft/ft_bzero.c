/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:29:09 by ekashirs          #+#    #+#             */
/*   Updated: 2024/10/29 15:33:51 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void bzero(void *dest, size_t n)
{
    size_t  i;
    char    *str;
    
    i = 0;
    str = (char *)dest;
    while (i < n)
    {
        str[i] = '\0';
        i++;
    }
    return (dest);
}