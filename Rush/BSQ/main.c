/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolmaco <dtolmaco@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:57:07 by dtolmaco          #+#    #+#             */
/*   Updated: 2023/10/18 12:28:54 by dtolmaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**map;
	int	lcount;

	//printf("starting program\n");
	str = ft_read_map(argv[1]);
	printf("%s\n", str);
	map = map_memory(str);
	//printf("passed memory\n");
	fill_map(str, map);
	i = 0;
	//printf("passed fill map\n");
	i = 0;
	(void)argc;
	while (map[0][i])
		i++;
	lcount = ft_linecount(str) - 1;
	solve(map, i, lcount);
	free(str);
	i = 0;
	while (i < lcount + 1)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
