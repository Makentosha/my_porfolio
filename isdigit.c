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

int		ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int		main(void)
{
	printf("ft_isdigit: %d\n", ft_isdigit(99999));
	printf("   isdigit: %d\n",    isdigit(99999));
	return 0;
}

