/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 02:22:30 by jochang           #+#    #+#             */
/*   Updated: 2018/04/26 07:51:53 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		numwords;
	int		wlen;

	numwords = ft_wordcount(s, c);
	if (!(arr = (char**)malloc((numwords + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (numwords--)
	{
		while (*s == c && *s)
			s++;
		wlen = ft_wordlen(s, c);
		if (!(arr[i] = ft_strsub(s, 0, wlen)))
			return (NULL);
		s += wlen;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
