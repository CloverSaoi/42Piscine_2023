/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:24:20 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/12 16:28:59 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		index ++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		index;
	char	*duplicate;

	index = 0;
	size = ft_strlen(src);
	duplicate = (char *) malloc((size + 1) * sizeof(char));
	while (index < size)
	{
		duplicate[index] = src[index];
		index ++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}
/*
int main(void)
{
    char *p;
    char hello[] = "Hello, Henry.";
    printf("%s\n", hello);
    p = ft_strdup(hello);
    printf("%s\n", p);
    free(p);
    return (0);
}*/
