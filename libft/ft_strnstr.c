#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (!*little)
		return ((char *)big);
	while (b < len && big[b])
	{
		l = 0;
		while (big[b + l] && little[l] && big[b + l] == little[l] && b + l < len)
		{
			l++;
			if (!little[l])
				return ((char *)big + b);
		}
		b++;
	}
	return (NULL);
}
