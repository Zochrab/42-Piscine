/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:04:11 by zblume            #+#    #+#             */
/*   Updated: 2023/10/07 16:42:23 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid (int i, char num, char *sol)
{
	int	row = i / 4;
	int	col = i % 4;
	int	id;

	id = 0;
	while (id < 4)
	{
		if (sol[row * 4 + id] == num || sol[id * 4 + col] == num)
			return (0);
		id++;
	}
    	return (1);
}

char	*solve_skyscraper (int i, char *sol)
{
	char	num;

	num = '1';
	if (i == 16)
		return (sol);
	while (num <= '4')
	{
		if (is_valid(i, num, sol))
		{
			sol[i] = num;
			if (solve_skyscraper((i + 1), sol))
				return (sol);
			sol[i] = '0';
		}
		num++;
	}
	return (sol);
}
