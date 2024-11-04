/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:08:14 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/04 12:28:46 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	c1;

	i = 0;
	str1 = (unsigned char *)str;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (str1[i] == c1)
			return (str1 + i);
		i++;
	}
	return (NULL);
}
