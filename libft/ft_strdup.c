/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:33:06 by acarro-v          #+#    #+#             */
/*   Updated: 2024/04/19 13:11:41 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (s1[size])
	{
		size++;
	}
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   if ((newstr = strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);   Returns: The copy of string in newstr. (The new string is: this is a copy).
   return 0;
}
*/
