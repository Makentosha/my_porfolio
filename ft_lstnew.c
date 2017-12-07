/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 20:40:56 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/07 20:40:58 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*obj;

	obj = (t_list*)malloc(sizeof(t_list));
	if (!obj)
		return (NULL);
	if (!content)
	{
		obj->content_size = 0;
		obj->content = 0;
	}
	else
	{
		obj->content_size = content_size;
		obj->content = (void*)malloc(sizeof(void) * content_size);
		obj->content = ft_memcpy(obj->content, content, content_size);
	}
	obj->next = 0;
	return (obj);
}
