/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:53:32 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/09 16:12:45 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
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
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*int main(void)
{
    int a = 13;
    int b = 2;
    int c = ft_recursive_power(a, b);
    printf("%d\n", c);
}*/
