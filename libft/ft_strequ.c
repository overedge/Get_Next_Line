/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 03:20:08 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/03 02:27:47 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;

	i = 0;
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (1);
	while (*s1 && *s2)
	{
		if (s1[i] != '\0' && s2[i] != '\0' && (s1[i] != s2[i]))
			return (0);
		if (i == ft_strlen(s1))
			return (1);
		i++;
	}
	return (0);
}
