#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	i = ft_strn(needle);
	while (n >= i
		&& *haystack
		&& ft_strncmp((char *)haystack, (char *)needle, i))
	{
		haystack++;
		n--;
	}
	if (!*haystack || n < i)
		return (NULL);
	return ((char *)haystack);
}
