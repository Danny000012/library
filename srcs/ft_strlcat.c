/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:55:44 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 16:34:30 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int k;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < len)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + len);
}
