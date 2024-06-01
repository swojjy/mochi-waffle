/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:17:50 by ankoh             #+#    #+#             */
/*   Updated: 2024/05/30 21:41:41 by bloopwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t n)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = (unsigned char *)ptr;
	v = (unsigned char)val;
	i = 0;
	if (p == NULL || n == 0)
		return (NULL);
	while (i < n)
	{
		p[i] = v;
		i++;
	}
	return (ptr);
}
