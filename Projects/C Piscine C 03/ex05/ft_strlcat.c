/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:50:27 by zblume            #+#    #+#             */
/*   Updated: 2023/10/02 15:42:33 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	aspace;
	unsigned int	i;
	unsigned int	src_len;

	dlen = 0;
	while (dest[dlen] != '\0' && dlen < size)
		dlen++;
	aspace = size - dlen;
	if (aspace == 0 || dlen >= size)
		return (dlen + ft_strlen(src));
	i = dlen;
	while (i < size - 1 && src[i - dlen] != '\0')
	{
		dest[i] = src[i - dlen];
		i++;
	}
	dest[i] = '\0';
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	return (dlen + src_len);
}
