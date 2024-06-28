#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*srcy;
	unsigned char	*desty;
	size_t			i;

	srcy = (unsigned char *)src;
	desty = (unsigned char *)dest;
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			desty[i] = srcy[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			desty[i] = srcy[i];
			i++;
		}
	}
	return (dest);
}
