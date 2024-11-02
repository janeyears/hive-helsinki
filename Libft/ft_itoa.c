/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:43:18 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/01 12:41:09 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

size_t  ft_countdigit (int n)
{
    size_t  count;

    count = 0;
    if(n == 0)
        return (1);
    if (n < 0)
        count++;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char	*ft_itoa(int n)
{
	char   *str;
    size_t  len;

    len = ft_countdigit(n);
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL);
        return(NULL);
}
