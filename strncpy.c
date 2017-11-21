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

#include <stdio.h>
#include <string.h>

char *	ft_strncpy(char * dst, const char * src, size_t len)
{
	int i;

	if (len == 0)
		return dst;

	i = 0;
	while (--len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return dst;
}

int main(void)
{
	char src[100] = "1234567890";
	char dst1[100];
	char dst2[100];

	ft_strncpy(dst1, src, -1);
	strncpy(dst2, src, -1);
	printf("ft_strcpy: %s\n", dst1);
	printf("   strcpy: %s\n", dst2);
}