/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 17:28:31 by mmahasim          #+#    #+#             */
/*   Updated: 2019/05/05 18:36:53 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list1;

	if (!(list1 = malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		list1->content = NULL;
		list1->content_size = 0;
	}
	else
	{
		if (!(list1->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(list1->content, content, content_size);
		list1->content_size = content_size;
	}
	list1->next = NULL;
	return (list1);
}
