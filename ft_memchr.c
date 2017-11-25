/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:42:52 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/20 20:42:57 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return NULL;

	char *src;

	src = (char *)s;
	while(--n)
	{
		if (*src++ == c)
			return --src;
	}
	if (*src++ == c)
		return --src;
	return NULL;
}