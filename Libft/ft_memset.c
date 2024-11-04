/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:08:33 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/04 15:05:48 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return(str);
}

int test_ft_memset(void) 
{
    char buffer[50];

    ft_memset(buffer, 'A', 10);
    printf("Test 1: %s\n", buffer); 

    ft_memset(buffer, '\0', 10);
    printf("Test 2: '%s'\n", buffer); 

    ft_memset(buffer, 66, 50); 
    printf("Test 3: %s\n", buffer); 

    char buffer2[10] = "Hello!";
    ft_memset(buffer2, 'Z', 0);
    printf("Test 4: %s\n", buffer2); 

	return 0;
}


int main(void)
{
	test_ft_memset();
	return 0;
}