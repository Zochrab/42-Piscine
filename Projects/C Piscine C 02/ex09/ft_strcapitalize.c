/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:34:25 by zblume            #+#    #+#             */
/*   Updated: 2023/10/03 11:26:42 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, str + i, 1);
		i++;
	}
}

char	*ft_checkcap(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0')
				str[i] = str[i] - 32;
			if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] = str[i] - 32;
			if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] = str[i] - 32;
			if (str[i - 1] > 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_checksmall(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + 32;
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				str[i] = str[i] + 32;
			if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_checkcap(str);
	ft_checksmall(str);
	return (str);
}
/*
int	main(void)
{
char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_putstr(ft_strcapitalize(test));
}
*/
