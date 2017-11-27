/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 21:07:14 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/27 21:07:15 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcat(char * dst, const char * src, size_t size)
{
	// size_t i;
	// size_t y;

	// i = 0;
	// while (dst[i])
	// 	i++;
	// y = 0;
	// while (y <= size)
	// {
	// 	dst[i] = src[y];
	// 	i++;
	// 	y++;
	// }
	// return i++;
	char *d = dst;
	const char *s = src;
	size_t n = size;
	size_t dlen;

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));
}

// int main(void)
// {
// 	char src[50] = "567890";

// 	char dst1[50] = "1234";
// 	int res1 = ft_strlcat(dst1, src, 4);
// 	printf("FT_dst1: %s-%d\n", dst1, res1);

// 	char dst2[50] = "1234";
// 	int res2 = strlcat(dst2, src, 4);
// 	printf("___dst2: %s-%d\n", dst2, res2);

// 	return 0;
// }