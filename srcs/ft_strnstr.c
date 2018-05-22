/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:19:50 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 17:47:36 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;
	size_t k;

	i = 0;
	k = 0;
	while (s1[i] != '\0' && k < len)
	{
		j = 0;
		while (s2[j + 1] == s1[i + j])
		{
			if (s2[j + 1] == '\0')
			{
				return (s1 + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char s1[] = "danny";
	char s2[] = "a";
	int i = 5;
	printf("%s", ft_strnstr(s1, s2, i));
	return (0);
}
