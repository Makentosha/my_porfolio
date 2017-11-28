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

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char *)s + ft_strlen(s);
	while (*str != c && str != (char *)s)
	{
		if ((int)str == c)
			return ((char *)str);
		str--;
	}
	if (*str == c)
		return ((char *)str);
	return (NULL);
}