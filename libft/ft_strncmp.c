/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:55:50 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:56:20 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		str1 = (unsigned char*)s1;
		str2 = (unsigned char*)s2;
		while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
			i++;
		if (i == n)
			return (0);
		else
			return (str1[i] - str2[i]);
	}
	else
		return (0);
}
