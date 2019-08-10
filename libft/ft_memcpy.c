/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:49:12 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/14 21:55:20 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s, const void *c, size_t n)
{
	unsigned char			*a;
	const unsigned char		*p;
	size_t					i;

	i = 0;
	a = s;
	p = c;
	while (i < n)
	{
		a[i] = p[i];
		i++;
	}
	return (s);
}
