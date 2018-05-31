/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 23:11:46 by jochang           #+#    #+#             */
/*   Updated: 2018/04/26 01:23:55 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		len;

	sign = (n >= 0 ? 1 : -1);
	len = ft_placevalue(n) + (sign >= 0 ? 0 : 1);
	str = (char*)ft_strnew(len + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len--;
	while (n)
	{
		str[len] = (n % 10) * sign + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
		str[len] = '-';
	return (str);
}
