/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:44:32 by zblume            #+#    #+#             */
/*   Updated: 2023/10/14 16:34:55 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	char	str[10000];
	int		d;
	ssize_t		text;

	//str = (char *)malloc(sizeof(char) * 10000000);
	if (argc == 2)
		d = open("numbers.dict", O_RDONLY);
	else if (argc == 3)
		d = open(argv[1], O_RDONLY);
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (d == -1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	text = read(d, str, sizeof(str));
	ft_putstr(str);
	return(0);
}
