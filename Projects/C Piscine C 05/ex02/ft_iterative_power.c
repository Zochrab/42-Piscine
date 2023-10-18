/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:06:37 by zblume            #+#    #+#             */
/*   Updated: 2023/10/17 18:11:52 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	onb;

	onb = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * onb;
		power--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_iterative_power(-1,6));
	printf("\n %d", ft_iterative_power(-1,7));
}
