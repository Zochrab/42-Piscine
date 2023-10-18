/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:28:13 by zblume            #+#    #+#             */
/*   Updated: 2023/10/11 09:43:18 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (num > 0)
	{
		nb = nb * num;
		num--; 
	}
	return (nb);
}
/*
 #include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (1);
}*/
