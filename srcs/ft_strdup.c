/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:27:42 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/17 17:46:04 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	int			i;
	int			size;
	char		*new_string;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	new_string = (char*)malloc(sizeof(*new_string) * (size));
	if (new_string == NULL)
		return (NULL);
	while (i < size)
	{
		new_string[i] = s1[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
