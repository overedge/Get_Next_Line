/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 11:33:38 by nahmed-m          #+#    #+#             */
/*   Updated: 2016/01/07 18:24:43 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/includes/libft.h"
# include <unistd.h>

/*
** Size Of Buffer For GET_NEXT_LINE
*/
# define BUFF_SIZE 16

/*
** Maxmium Of File Descriptor For
** GET_NEXT_LINE
*/
# define MAX_FD 2147483647

int		get_next_line(int const fd, char **line);
#endif
