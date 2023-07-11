/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:45:49 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/04 14:46:26 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('A' <= str[index]) && (str[index] <= 'Z'))
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
   int hello, bello, jello;
   bello = ft_str_is_uppercase("0123456789");
   jello = ft_str_is_uppercase("HELLO");
   hello = ft_str_is_uppercase("");    
   printf("bello is: %d\n jello is: %d\n hello is %d\n", bello, jello, hello);
   return (0);
}*/
