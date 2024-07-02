/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:35:14 by ankoh             #+#    #+#             */
/*   Updated: 2024/07/02 17:16:27 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*f_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	f_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!f_s)
		return (NULL);
	while (s[i])
	{
		f_s[i] = f(i, s[i]);
		i++;
	}
	f_s[i] = '\0';
	return (f_s);
}
