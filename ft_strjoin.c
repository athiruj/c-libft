#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;

	tmp = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tmp)
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcpy(tmp + ft_strlen(s1), s2);
	return (tmp);
}
