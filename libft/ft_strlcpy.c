/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:54:37 by acarro-v          #+#    #+#             */
/*   Updated: 2024/04/24 12:32:47 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int main ()
{
	char src[] = "Hello";
	char dest[6];
	ft_strlcpy(dest, src, sizeof(dest));   Returns: Hello copied int dest string with NULL termiantion.

	char src[] = "This is a very long string";
	char dest[10];
	ft_strlcpy(dest, src, sizeof(dest));   Returns: "This is a", with NULL termination.
}
*/
