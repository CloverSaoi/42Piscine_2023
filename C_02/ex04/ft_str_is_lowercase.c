/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:35:28 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/04 14:41:51 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('a' <= str[index]) && (str[index] <= 'z'))
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

/*int main(void)
{  
 int hello, bello, jello;
 bello = ft_str_is_lowercase("0123456789");
 jello = ft_str_is_lowercase("ello");
 hello = ft_str_is_lowercase("");    
 printf("bello is: %d\n jello is: %d\n hello is %d\n", bello, jello, hello);
 return (0);
}*/
