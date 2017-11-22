/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 21:33:47 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/22 21:33:52 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	if(str[0] < '0' || str[0] > '9')
		return (0);
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - 48);
		i++;
	}
	return (nb);
}

int		main(void)
{
	char nb[] = "999999999999999999999999999";
	// int max = 2874919425;

	printf("ft_atoi: %d\n", ft_atoi(nb));
	printf("   atoi: %d\n", atoi(nb));
	// printf("    max: %d\n", max);
	// printf("    max: %d\n", typeof(max));
	return 0;
}
