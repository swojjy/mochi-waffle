/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:27:59 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 13:28:01 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
