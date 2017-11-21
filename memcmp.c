/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:30:44 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/21 18:30:47 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	i = 0;	
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (str1 == str2)
		return (0);

	while(i < n)
	{
		if(str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}

	return (str1[n] - str2[n]);
}

int main(void)
{
	const char arr1[100] = "1234";
	const char arr2[100] = "1234567890";
	printf("ft_memcmp: %d\n", ft_memcmp(arr1, arr2, 9));
	printf("   memcmp: %d\n",    memcmp(arr1, arr2, 9));
	return 0;
}
