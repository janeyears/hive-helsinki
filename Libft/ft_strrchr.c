
#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
    int len;

    len = ft_strlen(str);
	while ((len >= 0) && (str[len] != search))
	{
		len--;
	}
	if (str[len] == search)
	{
		return ((char *)str[len]);
	}
	return (0);
}
