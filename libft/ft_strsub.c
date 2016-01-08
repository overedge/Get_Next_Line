/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 04:21:03 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:55:48 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		k;
	char				*str;

	i = 0;
	k = 0;
	while (i != start)
		i++;
	if ((str = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	if (i == start)
	{
		j = i;
		while (j < len + i)
		{
			str[k] = s[j];
			j++;
			k++;
		}
		str[k] = '\0';
		return (str);
	}
	return (str);
}
