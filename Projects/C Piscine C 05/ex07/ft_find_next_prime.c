/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:06:08 by zblume            #+#    #+#             */
/*   Updated: 2023/10/11 12:39:34 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (ft_is_prime(prime) != 1)
		prime = ft_find_next_prime(prime + 1);
	return (prime);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(42));
}*/
