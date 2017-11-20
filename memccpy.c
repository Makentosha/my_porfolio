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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *	ft_memccpy(void * dst, const void * src, int c, size_t n)
{
	if (n == 0 || src == dst)
		return(dst);

	char	*chr1;
	char	*chr2;

	chr1 = (char *)src;
	chr2 = (char *)dst;

	while(--n)
	{
		*chr2++ = *chr1++;
		if (*chr1 - 1 == c)
			return (dst);
	}
	*chr2 = *chr1;
	return (dst);
}

int		main (void)
{
	unsigned char src[10]="123456";
	unsigned char dst[50]="oooooooooo";
	ft_memccpy (dst, src, '5', 6);
	printf ("dstfin: %s\n", dst);

	return 0;
}