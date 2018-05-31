/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 01:30:15 by jochang           #+#    #+#             */
/*   Updated: 2018/04/26 07:40:06 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = -1;
	if (s && f)
	{
		if (!(new = (char*)malloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[++i])
			new[i] = f(i, s[i]);
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
