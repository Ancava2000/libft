/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:02:03 by acarro-v          #+#    #+#             */
/*   Updated: 2024/04/19 13:13:42 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned char	character;
	size_t			i;

	b = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*b == character)
		{
			return (b);
		}
		b++;
		i++;
	}
	return (0);
}
/*
int main ()
{
	const char *str = "Hello, world";
	const char ch = ",";
	const char *ret = ft_memchr(str, c, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);   Returns: A string beginning in the ch indicated if it is found. (String after |,| is - |, world|).
   	return(0);
}
*/
