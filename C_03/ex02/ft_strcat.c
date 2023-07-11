/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:58:52 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/08 13:11:10 by ddutta           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	size_dest;

	index = 0;
	size_dest = ft_strlength(dest);
	while (src[index] != '\0')
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
  
  char str[11] = "Hello";
  char str1[6] = "hello";  
  ft_strcat(str, str1);
  printf("%s", str);
  return (0);
}*/
