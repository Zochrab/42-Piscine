/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:50:32 by zblume            #+#    #+#             */
/*   Updated: 2023/10/19 11:01:45 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i])
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		len;

	len = 0;
	i = 1;
	while (strs[++i])
		len = len + ft_strlen(strs[i]);
	len = len + ((size - 1) * ft_strlen(sep));
	join = (char *)malloc(sizeof(char) * len);
	if (join == NULL)
		return (NULL);
	if (size == 0)
	{
		*join = '\0';
		return (join);
	}
	ft_strcat(join, strs[0]);
	i = 0;
	while (++i < size)
	{
		ft_strcat(join, sep);
		ft_strcat(join, strs[i]);
	}
	return (join);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n",ft_strjoin(3, argv, "..."));
	}
}*/
