/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:07:57 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/06 11:07:33 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t	start;
    size_t	end;
    char	*trimmedstr;

    if (!s1 || !set)
        return NULL;
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    trimmedstr = (char *)malloc(end - start + 1);
    if (trimmedstr == NULL)
        return NULL;
    ft_strlcpy(trimmedstr, s1 + start, end - start + 1);
    return (trimmedstr);
}
