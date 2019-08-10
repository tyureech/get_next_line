/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 22:40:59 by mmahasim          #+#    #+#             */
/*   Updated: 2019/06/12 21:18:46 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ch;
	int		i;

	i = 0;
	if (!(ch = (char *)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1 != '\0')
		ch[i++] = *s1++;
	while (*s2 != '\0')
		ch[i++] = *s2++;
	ch[i] = '\0';
	return (ch);
}
