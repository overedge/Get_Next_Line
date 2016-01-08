/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 04:26:36 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/03 01:21:07 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_strlen_char(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

static int		ft_count_part(const char *s, char c)
{
	int		i;
	int		instring;

	i = 0;
	instring = 0;
	while (*s != '\0')
	{
		if (instring == 1 && *s == c)
			instring = 0;
		if (instring == 0 && *s != c)
		{
			instring = 1;
			i++;
		}
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	index = 0;
	nb_word = ft_count_part((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_count_part((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = \
		ft_strsub((const char *)s, 0, ft_strlen_char((const char *)s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_strlen_char(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
