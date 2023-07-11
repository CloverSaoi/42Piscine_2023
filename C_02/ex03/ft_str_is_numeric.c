/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:22:00 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/04 14:34:21 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('0' <= str[index]) && (str[index] <= '9'))
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
/* int main(void)
	{
	    int hello, bello, jello;	
	    bello = ft_str_is_alpha("0123456789");
	    jello = ft_str_is_alpha("Hello");
	    hello = ft_str_is_alpha("");
	
	    printf("bello is: %d\n jello is: %d\n hello is %d\n", bello, jello, hello);
	    return (0);
	} */
