/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 08:55:05 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/14 08:55:38 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i]
			&& (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]))
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
