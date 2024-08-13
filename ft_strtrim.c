#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp;
	size_t	i;

	if (!s1)
		return (ft_strdup(""));
	tmp = (char *)s1;
	while (*s1 && ft_is(*s1, set))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_is(*(s1 + i - 1), set))
		i--;
	tmp = malloc(i + 1);
	if (!tmp)
		return (NULL);
	ft_strncpy(tmp, s1, i);
	*(tmp + i) = '\0';
	return (tmp);
}
