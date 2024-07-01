/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:32:36 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 23:15:24 by bloopwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	z;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	a = 0;
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	z = ft_strlen(s1);
	while (z > a && ft_strchr(set, s1[z - 1]))
		z--;
	str = (char *)malloc(sizeof(char) * (z - a + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + a, z - a + 1);
	return (str);
}
