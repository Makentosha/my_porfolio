/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:50:21 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/23 19:50:23 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isascii(int c)
{
	return (c >= 1 && c <= 127);
}

int main(void)
{
	printf("ft_isascii: %d\n", ft_isascii(-2456));
	printf("   isascii: %d\n",    isascii(-2456));
	return 0;
}
