/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:29:04 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 13:29:54 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (big[b + l] && little[l] \
				&& big[b + l] == little[l] && b + l < len)
		{
			l++;
			if (!little[l])
				return ((char *)big + b);
		}
		b++;
	}
	return (NULL);
}
