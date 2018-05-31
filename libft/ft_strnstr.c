/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 01:12:49 by jochang           #+#    #+#             */
/*   Updated: 2018/05/16 22:46:56 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	k;
	char	*s;

	i = 0;
	s = (char*)str;
	if (!to_find[0])
		return (s);
	while (str[i])
	{
		k = 0;
		while (to_find[k] == s[i + k] && i + k < len)
			if (!to_find[k++])
				return (&s[i]);
		if (k != 0 && !to_find[k])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
