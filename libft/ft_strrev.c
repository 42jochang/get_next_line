/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 00:10:11 by jochang           #+#    #+#             */
/*   Updated: 2018/04/24 00:13:07 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		k;
	char	temp;

	i = 0;
	k = ft_strlen(str) - 1;
	while (i < k)
	{
		temp = str[i];
		str[i] = str[k];
		str[k] = temp;
		i++;
		k++;
	}
	return (str);
}
