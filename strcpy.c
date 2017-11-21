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

char *	ft_strcpy(char * dst, const char * src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return dst;
}

int main(void)
{
	char src[100] = "test";
	char dst1[100];
	char dst2[100];

	ft_strcpy(dst1, src);
	strcpy(dst2, src);
	printf("ft_strcpy: %s\n", dst1);
	printf("   strcpy: %s\n", dst2);
}