/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 03:45:31 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:51:27 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_lenint(int n)
{
	int		size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static int		ft_signint(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int n)
{
	int		nbrchar;
	int		sign;
	char	*result;

	nbrchar = ft_lenint(n);
	sign = ft_signint(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if ((result = (char*)malloc(sizeof(char) * nbrchar + sign + 1)) == NULL)
		return (NULL);
	if (result)
	{
		result = result + nbrchar + sign;
		*result = '\0';
		if (n == 0)
			*--result = '0';
		while (n != 0)
		{
			*--result = ft_abs(n) % 10 + 48;
			n /= 10;
		}
		if (sign)
			*--result = '-';
	}
	return (result);
}
