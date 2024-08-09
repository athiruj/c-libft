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

#endif