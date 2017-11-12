/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:02:23 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/10 16:34:34 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

size_t	ft_strlen(const char *s);//ok
size_t	ft_strlcat(char *dst, const char *src, size_t size);

void	ft_putnbr(int n);//ok
void	ft_putchar(char c);//ok
void	ft_putstr(char const *s);//ok
void	*ft_memalloc(size_t size);//ok
void	ft_memedel(void **ap);//ok
void	ft_strdel(char **as);//ok
void	ft_strclr(char *s);//ok
void	ft_striter(char *s, void (*f)(char*));//ok
void	ft_striteri(char *s, void (*f)(unsigned int, char*));//ok
void	*ft_memset(void *b, int c, size_t len);//ok
void	ft_bzero(void *s, size_t n);//ok
void	*ft_memcpy(void *dest, const void *src, size_t n);//ok
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);//ok
void	*ft_memmove(void *dest, const void *src, size_t n);//ok
void	*ft_memchr(const void *s, int c, size_t n);//oki


char	*ft_strdup(const char *s1);//ok
char	*ft_strcpy(char *dst, const char *src);//ok
char	*ft_strnew(size_t size);//ok
char	*ft_strmap(char const *s, char (*f)(char));//ok
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));//ok
char	*ft_strsub(char const *s, unsigned int start, size_t len);//ok
char	*ft_strjoin(char const *s1, char const *s2);//ok
char	*ft_strtrim(char const *s);//ok
char	*ft_strncpy(char *dst, const char *src, size_t len);//ok
char	*ft_strcat(char *s1, const char *s2);//ok
char	*ft_strncat(char *s1, const char *s2, size_t n);//ok
char	*ft_strchr(const char *s, int c);//ok
char	*ft_strrchr(const char *s, int c);//ok
char	*ft_strstr(const char *haystack, const char *needle);

int		ft_strequ(const char *s1, const char *s2);//ok
int		ft_strnequ(char const *s1, char const *s2, size_t n);//ok
int		ft_strcmp(char const *s1, char const *s2);//ok
int		ft_memcmp(const void *s1, const void *s2, size_t n);//ok
int		ft_atoi(const char *nptr);

#endif
