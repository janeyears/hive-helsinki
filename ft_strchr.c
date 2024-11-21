/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:00:03 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/04 16:36:15 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int search)
{
	while ((*str != '\0') && (*str != search))
	{
		str++;
	}
	if (*str == search)
	{
		return ((char *)str);
	}
	return (0);
}
