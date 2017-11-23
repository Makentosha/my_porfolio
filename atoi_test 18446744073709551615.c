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
	int nb;
	int i;
	if(str[0] == '-')
	{
		i = 1;
		nb = -0;
	} else {
		nb = 0;
		i = 0;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - 48);
		i++;
	}
	if(str[0] == '-')
		nb *= -1;
	return (nb);
}

int		main(void)
{
	char nb[] = "-18446744073709551614";

	printf("ft_atoi: %d\n", ft_atoi(nb));
	printf("   atoi: %d\n", atoi(nb));
	return 0;
}
