/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:39:40 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/01 17:29:46 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char hello[] = "hello";
    char *h;

    h = &hello;

    char yello[99];
    char *y;

    y = &yello;
    
    *ft_strcpy(y, h);
	
	printf("hello dev: %s", y);
    return (0);
}*/
