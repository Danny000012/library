/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:34:25 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 16:27:47 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <string.h>
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str;
	unsigned char *str1;
	size_t i;

	str = (unsigned char *)dst;
	str1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char str[] = "hello to you";
	char str2[10] = "";
	ft_memcpy(str2, str, 7);
	//memcpy(str2, str, 7);
	printf("%s", str2);
}
