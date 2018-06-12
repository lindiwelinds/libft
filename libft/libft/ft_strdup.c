/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:18:05 by lmazibu           #+#    #+#             */
/*   Updated: 2018/06/11 11:13:35 by lmazibu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	int		len;

	len = 0;
	while (src[len])
		++len;
	if(!(s=(char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = ('0');
	while (len-->-1)
		s[len]= src[len];
	return (s);
}
