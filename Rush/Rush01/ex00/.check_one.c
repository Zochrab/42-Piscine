/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:55:00 by zblume            #+#    #+#             */
/*   Updated: 2023/10/07 13:56:14 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*top_one(char *sol, int i)
{
	sol[i] = '4'; 
	return (sol);
}

char	*bottom_one(char *sol, int i)
{
	sol[i + 8] = '4';
	return (sol);
}

char	*left_one(char *sol, int i)
{
	int	l;

	l = i % 4 * 4;
	sol[l] = '4';
	return (sol);
}

char	*right_one(char *sol, int i)
{
	int	l;

	l = i % 4 * 4;
	sol[l + 3] = '4';
	return (sol);
}

char	*check_one(char *str, char *sol)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '1')
		{
			if (i < 4)
				top_one(sol, i);		
			else if (i > 3 && i < 8)
				bottom_one(sol, i);
			else if (i > 7 && i < 12)
				left_one(sol, i);
			else if (i > 11)
				right_one(sol, i);
		}
	i++;
	}
	return (sol);
}
