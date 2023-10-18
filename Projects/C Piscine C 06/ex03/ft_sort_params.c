/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:56:10 by zblume            #+#    #+#             */
/*   Updated: 2023/10/16 11:27:27 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_arguments(int argc, char *argv[], int index)
{
	int		min_i;
	int		i;
	char	*temp;

	if (index >= argc - 1)
		return ;
	min_i = index;
	i = index + 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], argv[min_i]) < 0)
			min_i = i;
		i++;
	}
	temp = argv[index];
	argv[index] = argv[min_i];
	argv[min_i] = temp;
	sort_arguments(argc, argv, index + 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	sort_arguments(argc, argv, 1);
	while (i < argc -1)
	{
		ft_print(argv[i + 1]);
		i++;
	}
}
