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

t_bool	ft_isalnum(const char c);
t_bool	ft_isalpha(const char c);
t_bool	ft_isblank(const char c);
t_bool	ft_iscntrl(const char c);
t_bool	ft_isdigit(const char c);
t_bool	ft_isgraph(const char c);
t_bool	ft_islower(const char c);
t_bool	ft_isprint(const char c);
t_bool	ft_ispunct(const char c);
t_bool	ft_isspace(const char c);
t_bool	ft_isupper(const char c);
t_bool	ft_isxdigit(const char c);
char	ft_tolower(char c);
char	ft_toupper(char c);

t_bool	ft_str_isalnum(const char *str);
t_bool	ft_str_isalpha(const char *str);
t_bool	ft_str_isdigit(const char *str);
t_bool	ft_str_islower(const char *str);
t_bool	ft_str_isupper(const char *str);
t_bool	ft_str_isxdigit(const char *str);
char	*ft_str_tolower(char *str);
char	*ft_str_toupper(char *str);

#endif