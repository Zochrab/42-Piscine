/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:05:54 by zblume            #+#    #+#             */
/*   Updated: 2023/10/12 18:28:10 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		l;
	char	*dup;
	int		i;

	l = 0;
	while (src[l])
		l++;
	dup = (char *)malloc(l + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[l] = '\0';
	return (dup);
}
