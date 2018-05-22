/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:20:19 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 14:28:18 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
