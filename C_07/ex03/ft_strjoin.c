/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:39:12 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/13 18:15:09 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*string;

	i = 0;
	k = 0;
	string = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			string[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i != size - 1)
			string[k++] = sep[j++];
		i++;
	}
	string[k] = '\0';
	return (string);
}
/*
int main(void)
{ 
    char *p;
    char *argv[] = {};
    p = ft_strjoin(3, argv, "");
	printf("%s\n", p);
    return (0);
}
*/