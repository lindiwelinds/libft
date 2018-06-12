/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:09:46 by lmazibu           #+#    #+#             */
/*   Updated: 2018/06/08 16:04:45 by lmazibu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void char *ft_strnstr (char * big , char *little ,size_t len)
{
	size_t i;
	size_t j;
	size_t k;
	int found;
	i = -1;
	if (! ft_strlen ( little ))
		return ((char *) big );
	while (*( big + ++i) && i < len)
	{
	j = 0;
	if (*(big + i ) == * ( little + 0))
	{
		k = i;
		found = 1;
		while (*( big + k) && * ( little + j ) && j < len && k < len)
			if ( * ( big + k++) ! = * ( little + j ++))
				found = 0;
		if (found && ! * (little + j ))
			return ((char *) big + i );
	}
	}
	return (NULL);
}
