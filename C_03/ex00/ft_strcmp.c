/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:00:48 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/08 13:42:19 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0') || (s2[index] != '\0'))
	{
		if (s1[index] < s2[index])
		{
			return (-1);
		}
		if (s1[index] > s2[index])
		{
			return (1);
		}
		index++;
	}
	return (0);
}
/*
int main(void)
{
	int gg = ft_strcmp("helloe", "hellog");
	int ggg = strcmp("helloe", "hellog");
	printf("%d \n %d \n", gg, ggg);

	return (0);
}*/
