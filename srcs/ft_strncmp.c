/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:31:39 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/17 16:19:57 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < len)
		i++;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}
