/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:03:38 by zblume            #+#    #+#             */
/*   Updated: 2023/09/28 14:00:55 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	num1;
	int	num2;
	int	sorts;

	sorts = 1;
	while (sorts != 0)
	{
		sorts = 0;
		num1 = 0;
		num2 = 1;
		while (num2 < size)
		{
			if (tab[num1] > tab[num2])
			{
				temp = tab[num1];
				tab[num1] = tab[num2];
				tab[num2] = temp;
				sorts++;
			}
			num1++;
			num2++;
		}
	}
}
