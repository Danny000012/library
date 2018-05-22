/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:03:21 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 16:34:58 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	str2;
	int				i;

	i = 0;
	str2 = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (str[i] == str2)
			return (str + i);
		i++;
	}
	return (NULL);
}
