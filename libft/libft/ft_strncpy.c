/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:21:39 by lmazibu           #+#    #+#             */
/*   Updated: 2018/06/08 16:03:19 by lmazibu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void char *ft_strncpy (char *dst, char *src , size_t len)
{
	size_t i;
	i = -1;
	while( ++i < len)
		if (*( src + i))
			*(dst + i) = * (src + i);
		else
			while(i < len)
				*(dst + i++) = '\0';
	return (dst);
}
