/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:53:24 by zblume            #+#    #+#             */
/*   Updated: 2023/10/16 12:07:56 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar((n1 / 10) + '0');
			ft_putchar((n1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((n2 / 10) + '0');
			ft_putchar((n2 % 10) + '0');
			if (n1 != 98 || n2 != 99)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
