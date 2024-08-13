#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	tmp = (char *)malloc(len);
	if (!tmp)
		return (NULL);
	i = 0;
	while (len--)
		*(tmp + i++) = *(s + start++);
	return (tmp);
}
