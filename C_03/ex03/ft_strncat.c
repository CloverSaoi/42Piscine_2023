/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:01:12 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/08 17:07:50 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlength(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	int				size_dest;

	index = 0;
	size_dest = ft_strlength(dest);
	while ((src[index] != '\0') && (index < nb))
	{
		dest[size_dest + index] = src[index];
		index++;
	}
	dest[size_dest + index] = '\0';
	return (dest);
}
/*
int main(void)
{
	unsigned int hello = 4;
    char bello[11] = "Hello";
    char gello[6] = "hello";
    ft_strncat(bello, gello, hello);
	printf("%s", bello);
    return (0);
}*/
