/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:25:38 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/08 14:44:59 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((index < n) && ((s1[index] != '\0') || (s2[index] != '\0')))
	{
		if (s1[index] < s2[index])
		{
			return (s1[index] - s2[index]);
		}
		if (s1[index] > s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
/*
int main(void)
{
	unsigned int hello = 3;
	int gg = ft_strncmp("1", "1", hello);
	int ggg = strncmp("1", "1", hello);

	printf("%d \n %d \n", gg, ggg);
	return (0);
}*/
