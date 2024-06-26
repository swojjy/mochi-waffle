/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:28:27 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 13:28:29 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	dcount;
	size_t	scount;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dcount = dstlen;
	scount = 0;
	if (size < dstlen || size == 0)
		return (size + srclen);
	while (src[scount] && scount < size - dstlen - 1)
	{
		dst[dcount] = src[scount];
		dcount++;
		scount++;
	}
	dst[dcount] = '\0';
	return (dstlen + srclen);
}
