/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 02:47:56 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:54:48 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	if ((str = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		str[j] = f((char)s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
