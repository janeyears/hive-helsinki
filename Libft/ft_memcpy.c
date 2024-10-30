

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	i = 0;
	temp_d = (char *)dest;
	temp_s = (char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dest);
}