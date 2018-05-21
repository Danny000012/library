/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 18:34:09 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/21 10:20:45 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen((char *)s);
	while (0 != len && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}

int		main(void)
{
	char str1 = "dannyi";
	int i = 5;
	printf("%s", ft_strrchr(&str1, i));
	return (0);
}
