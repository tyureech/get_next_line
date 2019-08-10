/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 01:20:26 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/26 19:58:21 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		if (*s)
			s++;
	}
	return (count);
}

static void		ft_word(char const **s, int *i, char c)
{
	while (**s == c && **s)
		(*s)++;
	while (**s != c && **s)
	{
		(*s)++;
		(*i)++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ch;
	int		j;
	int		len;

	j = 0;
	len = 0;
	if (!s)
		return (NULL);
	if (!(ch = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		len = 0;
		ft_word(&s, &len, c);
		if (*s)
			ch[j++] = ft_strsub(s - len, 0, len);
		if (ft_strsub(s - len, 0, len) == NULL)
			return (NULL);
	}
	if (len > 0)
		ch[j++] = ft_strsub(s - len, 0, len);
	ch[j] = NULL;
	return (ch);
}
