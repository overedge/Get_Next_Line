/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:07:11 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/08 17:43:40 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *nextlst;

	lst = *alst;
	while (lst)
	{
		nextlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nextlst;
	}
	*alst = NULL;
}
