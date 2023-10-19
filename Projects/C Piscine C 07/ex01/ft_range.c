/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:57:18 by zblume            #+#    #+#             */
/*   Updated: 2023/10/13 10:04:55 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*all;
	int	i;

	i = 0;
	if (min >= max)
		all = NULL;
	all = (int *)malloc(sizeof(int) * (max - min));
	if (all == NULL)
		return (NULL);
	while (min + i < max)
	{
		all[i] = min + i;
		i++;
	}
	return (all);
}
