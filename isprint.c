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

int		ft_isprint(int c)
{
	return(c >= 32 && c <= 126);
}

int main(void)
{
	printf("ft_isprint: %d\n", ft_isprint(126));
	printf("   isprint: %d\n",    isprint(126));
	return 0;
}
