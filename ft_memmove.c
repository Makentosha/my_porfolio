/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:49:40 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/19 13:49:43 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memmove(void * dst, const void * src, size_t n)
{
	if (n == 0)
		return(dst);

	char *dst1;
	char *src1;

	dst1 = (char*)dst;
	src1 = (char*)src;
	if (src1 > dst1)
	{
		for (size_t i = 0; i < n; i++)
		{
			dst1[i] = src1[i];
		}
	} else
	{
		for (size_t i = n - 1; i != 0; i--)
			dst1[i] = src1[i];
		dst1[0] = src1[0];
	}
	return (dst);
}