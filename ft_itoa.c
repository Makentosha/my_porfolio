/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:20:41 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/03 16:20:44 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
#include <stdlib.h>
// #include <string.h>

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		sign;

	sign = n;
	len = 0;
	while(sign)
	{
		sign = sign / 10;
		len++;
	}
	sign = (n < 0);
	num = (char *)malloc(sizeof(char) * len + 1 + sign + 1);
	if (!num)
		return (NULL);
	num[len + sign] = '\0';
	if (sign)
		num[0] = '-';
	while (n)
	{
		num[len + sign - 1] = abs(n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

// int main(void)
// {
// 	int		nb;
// 	char	*str1;

// 	nb = 0;
// 	str1 = ft_itoa(nb);
// 	printf("ft_: %s\n", str1);
// 	return (0);
// }