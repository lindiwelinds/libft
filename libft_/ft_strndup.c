/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:38:11 by lmazibu           #+#    #+#             */
/*   Updated: 2018/06/08 16:03:58 by lmazibu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void char *ft_strndup( char s*1, size_t n)
{
	char *tmp;
	if (!(tmp = ft_strnew (n)))
		return (NULL);
	ft_strncpy ( tmp , s1, n);
	return (tmp);
}
