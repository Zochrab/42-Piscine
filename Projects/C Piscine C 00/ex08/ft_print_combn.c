/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:45:15 by zblume            #+#    #+#             */
/*   Updated: 2023/10/16 15:33:00 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_print(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar('0' + arr[i]);
		i++;
	}
	if (arr[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int arr[], int n, int index, int digit)
{
	int	i;

	if (digit == n)
	{
		ft_print_combn_print(arr, n);
		return ;
	}
	i = index;
	while (i <= 9)
	{
		arr[digit] = i;
		ft_print_combn_recursive(arr, n, i + 1, digit + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		arr[i] = i;
		i++;
	}
	ft_print_combn_recursive(arr, n, 0, 0);
}
/*
int	main(void)
{
	ft_print_combn(2);
}*/
