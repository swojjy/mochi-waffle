/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:19:05 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 16:45:15 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*suby;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
	{
		return ((char *)malloc(1));
	}
	if (start + len > slen)
		len = slen - start;
	suby = (char *)malloc(len * sizeof(char) + 1);
	if (!suby)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		suby[i] = s[start + i];
		i++;
	}
	suby[i] == '\0';
	return (suby);
}
