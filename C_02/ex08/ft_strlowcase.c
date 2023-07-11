/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:00:17 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/04 16:15:35 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('A' <= str[index]) && (str[index] <= 'Z'))
		{
			str[index] = str[index] + 32;
		}
		index ++;
	}
	return (str);
}

/*int main(void)
{
  char c[] = "HELLO";
  ft_strupcase(c);
  return (0);
}*/
