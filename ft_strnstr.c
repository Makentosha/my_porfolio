/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:17:59 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/26 17:18:01 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	size = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len-- >= size)
	{
		if (*big == *little && !ft_memcmp(big, little, size))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
