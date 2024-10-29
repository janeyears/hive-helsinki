/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:08:33 by ekashirs          #+#    #+#             */
/*   Updated: 2024/10/29 15:34:04 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int c, size_t n)
{
    size_t  i;
    char    *str;
    
    i = 0;
    str = (char *)dest;
    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return (dest);
}