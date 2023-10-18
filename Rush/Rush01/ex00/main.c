/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:59:38 by zblume            #+#    #+#             */
/*   Updated: 2023/10/07 17:23:37 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_cleanstr (char *str);

int	solve_skyscraper (int i, char *sol);

int	main(int argc, char *argv[])
{
	char	sol[] = "0000000000000000";
	char	*str;

	str = ft_cleanstr(argv[1]);
	if (argc != 2)
		return (0);
	solve_skyscraper(0, sol);
	printf("Main: %s", sol);
}
