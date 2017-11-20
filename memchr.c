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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *	ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return NULL;

	char *src;

	src = (char *)s;
	while(--n)
	{
		if (*src++ == c)
			return src--;
	}
	return NULL;
}

int	main(void)
{
	unsigned char src[11] = "search here";
	char *chr1 = ft_memchr(src, 'r', 11);
	char *chr2 = memchr(src, 'r', 11);
	printf("result: %s\n", chr1);
	printf("result: %s\n", chr2);
	return 0;
}