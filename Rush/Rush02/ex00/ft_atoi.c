/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:59 by bortgies          #+#    #+#             */
/*   Updated: 2023/10/14 16:38:41 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int     ft_atoi(const char* str)
{
        int     result;
        int     i;

        i = 0;
        result = 0;
        if (str[0] == '\0')
                return result;
        while(str[i])
		{
                result = result * 10 + (str[i] -'0');
                i++;
        }
        return (result);
}