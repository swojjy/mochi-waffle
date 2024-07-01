/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:34:06 by ankoh             #+#    #+#             */
/*   Updated: 2024/07/01 16:04:58 by bloopwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs_val(long i, int *isneg)
{
	if (i < 0)
	{
		i = -i;
		*isneg = 1;
	}
	return (i);
}

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

	isneg = 0;
	i = (ft_abs_val(n, &isneg));
	len = ft_lenofi(i);
	a = (char *)malloc(sizeof(char) * (len + isneg + 1));
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
