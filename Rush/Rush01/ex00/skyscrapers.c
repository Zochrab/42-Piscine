/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:17:33 by zblume            #+#    #+#             */
/*   Updated: 2023/10/07 17:30:46 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_cleanstr(char *str)
{
	int		i;
	char		*cl;
	int		ci;
	
	i = 0;
	cl = malloc(15);
	ci = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			cl[ci] = str[i];
			ci++;
		}
		i++;
	}
	return (cl);
}
