/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:48:35 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/04 14:41:51 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}

int test_ft_memmove(void)
{
	char src[] = "Hello, World!";
    char dest[50];

	printf("➡️ Test cases for ft_memmove\n");

    ft_memmove(dest, src, 14);
    printf("Test 1 - Basic move: %s\n", dest);

    char empty_buffer[10] = "Test";
    ft_memmove(empty_buffer, empty_buffer, 0);
    printf("Test 2 - Zero bytes: %s\n", empty_buffer); 
	return (0);
}
int main (void)
{
	test_ft_memmove();
	return (0);
}