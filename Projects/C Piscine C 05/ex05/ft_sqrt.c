/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:27:28 by zblume            #+#    #+#             */
/*   Updated: 2023/10/11 12:22:57 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (i * i <= nb && i < 46360)
	{
		if (i * i == nb)
		{
			result = i;
			return (result);
		}
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(10000000000));
}*/
