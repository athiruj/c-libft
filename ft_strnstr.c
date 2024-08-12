#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (len >= i
		&& *haystack
		&& ft_strncmp((char *)haystack, (char *)needle, i))
	{
		haystack++;
		len--;
	}
	if (!*haystack || len < i)
		return (NULL);
	return ((char *)haystack);
}
