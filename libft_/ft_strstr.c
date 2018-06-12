/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:09:00 by lmazibu           #+#    #+#             */
/*   Updated: 2018/06/08 16:06:06 by lmazibu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

 void char *ft_strstr ( char *big , char *little)

{
	int i;
	int j;
	int k;
	int good;
if (! ft_strlen	( little))
	return ((char *)big);
i = - 1;
good = 0;
while (*(big + ++i) &&  ! good)
{
	if (*(big + i) == *(little + 0))
	{
		j = 0;
		k = i;
		good = 1;
		while (*(little + j))
			if (*(little + j++) != *(big + k++))
				good = 0;
		if (good)
			return ((char *)big + i);
	}
}
return (NULL);
}
