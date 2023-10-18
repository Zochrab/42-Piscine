/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:24:29 by zblume            #+#    #+#             */
/*   Updated: 2023/10/01 13:45:03 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char i);

void	toprow(int x)
{
	int	col;

	col = 1;
	ft_putchar('A');
	while (col < x - 1)
	{
		ft_putchar('B');
		col++;
	}
	if (x > 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	if (x == 1)
		ft_putchar('\n');
}

void	botrow(int x)
{
	int	col;

	col = 1;
	ft_putchar('C');
	while (col < x - 1)
	{
		ft_putchar('B');
		col++;
	}
	if (x > 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x == 1)
		ft_putchar('\n');
}

void	core(int x, int y)
{
	int	col;
	int	row;
	int	curline;

	curline = 0;
	row = y - 2;
	while (curline < row)
	{
		col = 0;
		ft_putchar('B');
		while (col < x - 2)
		{
			ft_putchar(' ');
			col++;
		}
		if (x > 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		curline++;
		if (x == 1)
			ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		toprow(x);
	if (y > 2 && x > 0)
		core(x, y);
	if (y > 1 && x > 0)
		botrow(x);
}
