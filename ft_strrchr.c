/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:18:04 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/22 20:18:11 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strrchr(const char *s, int c)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while(*str)
		str++;
	if (*str == c)
		return ((char *)str);
	str--;
	if (*str == c)
		return ((char *)str);
	while (*str)
	{
		str--;
		if (*str == c)
			return ((char *)str);
	}
	return (NULL);
}