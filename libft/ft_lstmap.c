/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 21:54:45 by mmahasim          #+#    #+#             */
/*   Updated: 2019/05/06 17:23:42 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlst;
	t_list	*res;

	if (!(nlst = malloc(sizeof(t_list))))
		return (NULL);
	nlst = f(lst);
	res = nlst;
	while (lst->next)
	{
		lst = lst->next;
		if (!(nlst->next = f(lst)))
		{
			free(nlst->next);
			return (NULL);
		}
		nlst = nlst->next;
	}
	return (res);
}
