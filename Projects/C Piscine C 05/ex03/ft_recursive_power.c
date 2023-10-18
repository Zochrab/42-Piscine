/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:21:57 by zblume            #+#    #+#             */
/*   Updated: 2023/10/09 11:58:20 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = ft_recursive_power(nb, power - 1);
		power = 1;
	}
	return (res * nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(5, 2));
}*/
