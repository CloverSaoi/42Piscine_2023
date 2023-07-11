/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:46:54 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/31 16:13:52 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str)
{
	int	str_length;
	int	counter;

	str_legnth = 0;
	counter = 0;
	while (str[counter] != '\0')
	{
		str_length += 1;
		counter += 1;
	}
	return (str_length);
}

/* int main(void)
{
	int	hello = ft_strlen("Geeks");
	
	printf("%d\n", hello);

	return (0);
}*/
