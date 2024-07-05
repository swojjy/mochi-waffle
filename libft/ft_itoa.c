/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:34:06 by ankoh             #+#    #+#             */
/*   Updated: 2024/07/02 17:13:35 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenofi(int i)
{
	int	len;

	len = 1;
	while (i / 10 != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		isneg;	
	long	i;
	size_t	len;
	char	*a;

	i = n;
	isneg = i < 0;
	if (isneg == 1)
		i = -i;
	len = ft_lenofi(i);
	a = malloc(sizeof(char) * (len + isneg + 1));
	if (!a)
		return (NULL);
	a[len + isneg] = '\0';
	while (len > 0)
	{
		a[len + isneg - 1] = '0' + i % 10;
		i /= 10;
		len--;
	}
	if (isneg == 1)
		a[0] = '-';
	return (a);
}
