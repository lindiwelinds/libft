/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:17:26 by lmazibu           #+#    #+#             */
/*   Updated: 2018/06/08 16:05:25 by lmazibu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void char *ft_strrchr ( char  *s ,int c)
{
	int i;
	i = (int) ft_strlen (s) +1;
	while ( i --)
		if (* ( s + i) == (char) c)
			return ((char*) s + i);
	return(NULL);
}
