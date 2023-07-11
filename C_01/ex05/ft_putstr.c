/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:26:44 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/31 16:10:42 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter += 1;
	}
}
/*int main(void)
{
	char str[5] = "Geeks";

	//char *geeks;
	//geeks = &str[0];

	ft_putstr(str);
		
	return (0);
}*/
