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
	size_t	dlen;
	size_t	slen;
	size_t	d;
	size_t	s;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	d = dlen;
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (dlen + slen);
}
