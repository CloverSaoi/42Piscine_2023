/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:45:33 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/12 15:49:18 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	pow;

	index = 1;
	pow = nb;
	if (power < 0)
	{
		return (0);
	}
	if ((power == 0 && nb == 0) || (power == 0))
	{
		return (1);
	}
	else
	{
		while (index < power)
		{
			nb *= pow;
			index++;
		}
	}
	return (nb);
}
/*
int main(void)
{
    int a = 2;
    int b = 6;
    int c = ft_iterative_power(a, b);
    printf("%d\n", c);
}*/
