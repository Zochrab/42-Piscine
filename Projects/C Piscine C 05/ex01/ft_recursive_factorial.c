/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:28:13 by zblume            #+#    #+#             */
/*   Updated: 2023/10/09 10:57:09 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (num);
	if (nb > 1)
	{
		num = ft_recursive_factorial(nb - 1);
	}
	return (num * nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(-4));
	return (1);
}*/
