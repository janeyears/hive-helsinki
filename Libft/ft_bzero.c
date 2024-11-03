/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:29:09 by ekashirs          #+#    #+#             */
/*   Updated: 2024/10/29 15:42:17 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int main () {

    char str[] = "abcdcde";
	char str2[] = "abcdcde";
    int c = 3;
 
	printf("String before original bzero: %c, %c, %c, %c, %c, %c \n", str[0], str[1], str[2], str[3], str[4], str[5]);
    bzero(str, c);
    printf("String after oroginal bzero: %c, %c, %c, %c, %c, %c \n", str[0], str[1], str[2], str[3], str[4], str[5]);
	printf("String before my ft_bzero: %c, %c, %c, %c, %c, %c \n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5]);
    ft_bzero(str2, c);
    printf("String after my ft_bzero: %c, %c, %c, %c, %c, %c \n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5]);
   return(0);
}
