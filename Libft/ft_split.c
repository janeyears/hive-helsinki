/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:40:44 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/05 16:18:14 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

int ft_check_malloc(char **arr, int position, size_t size)
{
	int	i;

	i = 0;
	arr[position] = malloc(size);
	if (arr[position] == NULL)
	{
		while (i < position)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
		return (1);
	}
	return (0);
}

int ft_fill_arr(char **arr, char const *s, char c)
{
	size_t	len;
	int	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_check_malloc(arr, i, len + 1))
				return (1);
			else
				ft_strlcpy(arr[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**arr;

	if (s == NULL)
		return (NULL);
	word_count = ft_countword(s, c);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[word_count] = NULL;
	if (ft_fill_arr(arr, s, c))
		return (NULL);
	return (arr);
	
}

int main ()
{
	const char *str = "Hello world and  welcome";
	char	**v = ft_split(str, ' ');

	while (*v)
		printf("%s \n", *v++);
	return (0);
}