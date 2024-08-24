/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:32 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:02:34 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(dst + i) != '\0')
		i++;
	while (*src && n--)
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (dst);
}

#include <stdio.h>
#include <string.h>
int main() {
	char str[100]; 
   
   // Copy the first string to the variable
   strcpy(str, "Tutorials"); 

   // String concatenation 
   ft_strncat(str, "hello", 6); 

   // Show the result
   printf("%s\n", str); 
   return 0;
}