/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:52:33 by athi              #+#    #+#             */
/*   Updated: 2024/11/26 00:32:54 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef E_BOOL
#  define E_BOOL

typedef enum e_bool
{
	True = 1,
	False = 0
}	t_bool;

# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* ! Required is */
t_bool	ft_isalpha(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isalnum(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isprint(int c);

/* ? My Additional is */
t_bool	ft_isblank(int c);
t_bool	ft_iscntrl(int c);
t_bool	ft_isgraph(int c);
t_bool	ft_ispunct(int c);
t_bool	ft_isspace(int c);
t_bool	ft_islower(int c);
t_bool	ft_isupper(int c);
t_bool	ft_isxdigit(int c);
/* is integer overflow */
t_bool	ft_isiover(const char *str);

/* ! Required converter */
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
/* alphabet to long */
long	ft_atol(const char *str);

/* * Additional converter */
char	*ft_itoa(int n);

/* ! Required str */
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

/* * Additional str */
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/* ? My Additional str */
size_t	ft_strnlen(const char *str, size_t n);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);

/* ! Required mem */
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* ! Required put */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* ! Required Bonus */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/* free all list */
void	ft_lstfree(t_list *lst);

#endif