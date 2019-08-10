/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:08:36 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/15 00:22:00 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s, const void *c, size_t n)
{
	size_t				i;
	unsigned char		*a;
	unsigned char		*b;

	i = 0;
	a = s;
	b = (unsigned char*)c;
	if (b < a)
		while (n--)
			a[n] = b[n];
	else
		while (n--)
		{
			a[i] = b[i];
			i++;
		}
	return (s);
}
