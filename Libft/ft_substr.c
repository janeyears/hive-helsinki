/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:06:10 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/05 14:52:12 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	newstr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			newstr[j] = s[i];
			j++;
		}
		i++;
	}
	newstr[j] = '\0';
	return (newstr);
}
