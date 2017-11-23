/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:21:39 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/23 19:21:40 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int main(void)
{
	printf("ft_isalpha: %d\n", ft_isalpha(123));
	printf("   isalpha: %d\n",    isalpha(123));
	return 0;
}

