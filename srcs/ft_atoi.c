/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:14:44 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/17 16:25:37 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_isdigit(int chr)
{
	if (chr >= '0' && chr <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int n;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	return (i * n);
}
