/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:37:34 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/21 20:37:36 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *	ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;

	if (len == 0)
		return dst;

	i = 0;
	while (--len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	// if (ft_strlen(src) < len)
	// 	i = ft_strlen(src);

	while (i <= len)
	{
		dst[i] = '0';
		i++;
	}	
	return dst;
}