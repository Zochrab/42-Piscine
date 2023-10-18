/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:29:12 by zblume            #+#    #+#             */
/*   Updated: 2023/10/10 11:13:29 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int		i;
	int		s;
	long	n;
	int		p;

	s = 1;
	i = 0;
	n = 0;
	p = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		p++;
		n = (n * 10) + (str[i++] - '0');
	}
	if ((n > 2147483647 && s == 1) || p > 10 || (n > 2147483648 && s == -1))
		return (0);
	return (n * s);
}

int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	//printf("%d", ft_atoi("         "));
	return (0);
}
