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

void *	ft_memmove(void * dst, const void * src, size_t n)
{
	if (n == 0)
		return(dst);

	char *dst1;
	char *src1;

	dst1 = (char*)dst;
	src1 = (char*)src;
	for (size_t i = 0; i < n; i++)
	{
		dst1[i] = src1[i];
		printf ("src: %c\n", dst1[i]);
		printf ("dst: %c\n", src1[i]);
	}

	return (dst);
}

int		main (void)
{
	unsigned char src1[50]="1234567890";
	unsigned char src2[50]="1234567890";
	ft_memmove (&src1[4], &src1[1], 9);
	memmove (&src2[4], &src2[1], 9);
	printf ("ft_memmove: %s\n", src1);
	printf ("   memmove: %s\n", src2);

	return 0;
}