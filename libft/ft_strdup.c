/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:31:32 by ankoh             #+#    #+#             */
/*   Updated: 2024/06/29 14:11:25 by ankoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	slen;

	slen = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (slen + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s, slen + 1);
	return (newstr);
}
