/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:06:00 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/04 16:12:20 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('a' <= str[index]) && (str[index] <= 'z'))
		{
			str[index] = str[index] - 32;
		}
		index ++;
	}
	return (str);
}
/*
int main(void)
{
  char c[] = "hello";
  ft_strupcase(c);
  return (0);
}*/
