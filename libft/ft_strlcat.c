/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:50:55 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:52:31 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	i = j;
	k = 0;
	while (src[k] != '\0' && j < size - 1)
	{
		dst[j] = src[k];
		j++;
		k++;
	}
	if (i < size)
		dst[j] = '\0';
	return (ft_strlen(src) + i);
}
