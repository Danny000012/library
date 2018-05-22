/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:37:44 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 17:16:52 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *str;
	unsigned char *str1;

	i = 0;
	str = (unsigned char *)dst;
	str1 = (unsigned char *)src;
	while (i < len)
	{
		str[i] = str1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
