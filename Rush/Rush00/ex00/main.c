/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:10:52 by zblume            #+#    #+#             */
/*   Updated: 2023/10/01 14:06:31 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	string_to_int(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0; 
	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (sign == -1)
		return (0);
	else
		return (result);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Error: ", 7);
		write(1, "need exactly 2 Arguments!", 25);
		return (1);
	}
	x = string_to_int(argv[1]);
	y = string_to_int(argv[2]);
	if (x == 0 || y == 0)
	{
		write(1, "Error: ", 7);
		write(1, "Arguments must be higher 0!", 27);
		return (1);
	}
	if (x == -1 || y == -1)
	{
		write(1, "Error: ", 7);
		write(1, "Arguments must be numbers!", 26);
		return (1);
	}
	rush(x, y);
	return (0);
}
