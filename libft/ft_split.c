/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:33:33 by ankoh             #+#    #+#             */
/*   Updated: 2024/07/02 17:15:40 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numofstrs(char const *s, char c)
{
	size_t	i;
	size_t	numofstrs;

	i = 0;
	numofstrs = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			numofstrs++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (numofstrs);
}

static void	ft_freearray(char **tosplit, size_t i)
{
	size_t	n;

	n = 0;
	while (n < i)
	{
		free(tosplit[n]);
		n++;
	}
	free(tosplit);
}

static char	*ft_allocstrs(char const *s, char c, size_t *n)
{
	size_t	len;
	size_t	start;
	char	*str;

	len = 0;
	while (s[*n] && s[*n] == c)
		(*n)++;
	start = *n;
	while (s[*n] && s[*n] != c)
	{
		len++;
		(*n)++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	numofstrs;
	char	**splitted;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	numofstrs = ft_numofstrs(s, c);
	splitted = (char **)malloc(sizeof(char *) * (numofstrs + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	start = 0;
	while (i < numofstrs)
	{
		splitted[i] = ft_allocstrs(s, c, &start);
		if (!splitted[i])
		{
			ft_freearray(splitted, i);
			return (NULL);
		}
		i++;
	}
	splitted[numofstrs] = NULL;
	return (splitted);
}
