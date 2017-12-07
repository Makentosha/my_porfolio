/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 21:33:01 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/07 21:33:03 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*obj;

	while (*alst)
	{
		obj = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
		*alst = obj;
	}
}
