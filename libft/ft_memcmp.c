/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:39:16 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:39:56 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (s1 != NULL && s2 != NULL)
	{
		str1 = (unsigned char*)s1;
		str2 = (unsigned char*)s2;
		i = 0;
		while (str1[i] == str2[i] && i < n)
			i++;
		if (i == n)
			return (0);
		else
			return (str1[i] - str2[i]);
	}
	else
		return (0);
}
