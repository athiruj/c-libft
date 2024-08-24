#include "libft.h"

size_t	ft_wordcount(const char *s, const char c);
char	*ft_fword(const char *s, char c, size_t len);
void	*ft_free(char **arr, size_t n);

char	**ft_split(const char *s, char c)
{
	char	**tmp_arr;
	size_t	w;
	size_t	i;
	size_t	len;

	w = ft_wordcount(s, c);
	tmp_arr = (char **)ft_calloc(sizeof(char *), w + 1);
	if (!tmp_arr)
		return (NULL);
	i = 0;
	while (i < w)
	{
		while (*s == c)
			s++;
		len = 0;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		*(tmp_arr + i) = ft_fword(s - len, c, len);
		if (!(*(tmp_arr + i++)))
			return (ft_free(tmp_arr, ft_wordcount(s, c)));
	}
	return (tmp_arr);
}

size_t	ft_wordcount(const char *s, const char c)
{
	size_t	i;
	t_bool	sta;

	i = 0;
	sta = False;
	while (*s)
	{
		if (*s != c && !sta)
		{
			i++;
			sta = True;
		}
		else if (*s == c && sta)
			sta = False;
		s++;
	}
	return (i);
}

char	*ft_fword(const char *s, char c, size_t len)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)ft_calloc(sizeof(char), len + 1);
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < len)
		*(tmp + i++) = *s++;
	return (tmp);
}

void	*ft_free(char **arr, size_t n)
{
	if (!arr)
		return (NULL);
	while (n--)
		free(*(arr + n));
	free(arr);
	return (NULL);
}
