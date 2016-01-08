/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 01:54:37 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:51:56 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*str;

	if ((str = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
