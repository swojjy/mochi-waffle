#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*desty;
	unsigned char	*srcy;

	i = 0;
	desty = (unsigned char *)dest;
	srcy = (unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		desty[i] = srcy[i];
		i++;
	}
	return (desty);
}
