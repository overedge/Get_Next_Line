/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:36:20 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:36:56 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *str;

	str = (char*)malloc(sizeof(src) * (n + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, src, n);
	ft_memcpy(dest, str, n);
	free(str);
	return (dest);
}
