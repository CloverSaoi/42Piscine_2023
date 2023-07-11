/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:47:44 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/04 14:29:55 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('a' <= str[index]) && (str[index] <= 'z'))
		{
			index ++;
		}
		else if (('A' <= str[index]) && (str[index] <= 'Z'))
		{
			index ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main(void)
{
    int hello, bello;

    bello = ft_str_is_alpha("Hello");
    hello = ft_str_is_alpha("Bell---");

    printf("bello is: %d\n hello is %d\n", bello,  hello);
    return (0);
}*/
