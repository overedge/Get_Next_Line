/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:23:36 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:25:21 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;
	char	l;

	l = (unsigned char)c;
	count = 0;
	while (count < len)
	{
		((char*)b)[count] = l;
		count++;
	}
	return (b);
}
