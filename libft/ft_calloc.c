/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:27:14 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 13:27:16 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
