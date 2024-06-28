#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bigsize;
	void	*pointa;

	bigsize = nmemb * size;
	if (nmemb != 0 && bigsize / nmemb != size)
		return (NULL);
	pointa = malloc(bigsize);
	if (pointa == NULL)
		return (NULL);
	ft_bzero(pointa, bigsize);
	return (pointa);
}
