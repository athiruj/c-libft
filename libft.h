/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:52:33 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 17:13:05 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef enum e_bool
{
	True = 1,
	False = 0,
}	t_bool;

t_bool	ft_isalpha(const char c);
t_bool	ft_isdigit(const char c);
t_bool	ft_isalnum(const char c);
t_bool	ft_isascii(const char c);
t_bool	ft_isprint(const char c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strchr(const char *str, char c);
char	*ft_strrchr(const char *str, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_atoi(char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

t_bool	ft_is(const char c, const char *set);
t_bool	ft_isblank(const char c);
t_bool	ft_iscntrl(const char c);
t_bool	ft_isgraph(const char c);
t_bool	ft_islower(const char c);
t_bool	ft_ispunct(const char c);
t_bool	ft_isspace(const char c);
t_bool	ft_isupper(const char c);
t_bool	ft_isxdigit(const char c);

// t_bool	ft_str_isalnum(const char *str);
// t_bool	ft_str_isalpha(const char *str);
// t_bool	ft_str_isdigit(const char *str);
// t_bool	ft_str_islower(const char *str);
// t_bool	ft_str_isupper(const char *str);
// t_bool	ft_str_isxdigit(const char *str);
// char	*ft_str_tolower(char *str);
// char	*ft_str_toupper(char *str);


size_t	ft_strnlen(const char *str, size_t n);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);

#endif