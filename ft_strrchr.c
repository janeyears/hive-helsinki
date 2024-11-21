/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:45:13 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/06 15:08:44 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	len;

	if (str == 0)
		return (NULL);
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == search)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}