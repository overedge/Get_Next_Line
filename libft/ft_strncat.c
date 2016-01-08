/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:51:06 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:52:25 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t l;

	i = 0;
	l = ft_strlen(dest);
	while (src[i] != '\0' && i < n)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
