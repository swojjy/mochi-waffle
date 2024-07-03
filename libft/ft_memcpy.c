/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:27:51 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 13:27:52 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*desty;
	unsigned char	*srcy;

	if (!dest && !src)
		return (NULL);
	i = 0;
	desty = (unsigned char *)dest;
	srcy = (unsigned char *)src;
	while (i < n)
	{
		desty[i] = srcy[i];
		i++;
	}
	return (desty);
}
