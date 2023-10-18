/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_four.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:43:10 by zblume            #+#    #+#             */
/*   Updated: 2023/10/07 13:50:09 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*top(char *sol, int i)
{
	sol[i] = '1'; 
	sol[i + 4] = '2';
	sol[i + 8] = '3';
	sol[i + 12] = '4';
	return (sol);
}

char	*bottom(char *sol, int i)
{
	sol[i + 8] = '1';
	sol[i + 4] = '2';
	sol[i] = '3';
	sol[i - 4] = '4';
	return (sol);
}

char	*left(char *sol, int i)
{
	int	l;

	l = i % 4 * 4;
	sol[l] = '1';
	sol[l + 1] = '2';
	sol[l + 2] = '3';
	sol[l + 3] = '4';
	return (sol);
}

char	*right(char *sol, int i)
{
	int	l;

	l = i % 4 * 4;
	sol[l] = '4';
	sol[l + 1] = '3';
	sol[l + 2] = '2';
	sol[l + 3] = '1';
	return (sol);
}

char	*check_four(char *str, char *sol)
{
	int		i;
	
	i = 0;
	while (str[i])
	{		
		if (str[i] == '4')
		{
			if (i < 4)
				top(sol, i);		
			else if (i > 3 && i < 8)
				bottom(sol, i);
			else if (i > 7 && i < 12)
				left(sol, i);
			else if (i > 11)
				right(sol, i);
		}
		i++;
	}
	return (sol);
}
