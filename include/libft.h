/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:43:28 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/22 17:33:04 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *s1);
size_t				ft_nstrlen(const char *s1, size_t maxlen);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char 				*ft_strcat(char *dest, char *src);
char				*ft_strncat(char *s1, const char *s2, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(char *str, char *to_find);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
void				ft_strrev(char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
int					ft_atoi(const char *str);

int					ft_isalpha(int c);
int					ft_isdigit(int chr);
int					ft_isalnum(int c);
int					ft_isascii(int chr);
int					ft_isprint(int c);
int					ft_toupper(int chr);
int					ft_tolower(int chr);

#endif
