/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:35:51 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 17:02:31 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char *str;
	unsigned char *str2;

	i = 0;
	str = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str[i] && str2[i] && str[i] == str2[i] && i < n)
		i++;
	if (str[i] > str2[i])
		return (1);
	if (str[i] < str2[i])
		return (-1);
	else
		return (0);
}
