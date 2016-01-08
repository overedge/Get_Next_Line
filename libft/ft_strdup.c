/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:40:41 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:41:51 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char *dest;

	dest = (char*)malloc(sizeof(s) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s);
	return (dest);
}
