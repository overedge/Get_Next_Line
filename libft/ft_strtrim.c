/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 04:24:57 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:56:00 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "stdio.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	j = ft_strlen(s);
	while ((s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
			&& s[j - 1] < 33 && j > i)
		j--;
	if ((str = (char *)malloc(sizeof(char) * (j - i + 1))) == NULL)
		return (NULL);
	while (i < j)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
