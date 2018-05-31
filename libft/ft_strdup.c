/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 00:18:18 by jochang           #+#    #+#             */
/*   Updated: 2018/05/17 02:31:54 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;

	str = (char*)malloc(ft_strlen(src) + 1);
	if (str == 0)
		return (str);
	str = ft_strcpy(str, src);
	return (str);
}
