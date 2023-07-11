/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:44:11 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/09 16:24:07 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	while (nb != 1)
	{
		if (nb < 0)
		{
			return (0);
		}
		if ((nb == 0) || (nb == 1))
		{
			return (1);
		}
		else
		{
			nb--;
			factorial *= nb;
		}
	}
	return (factorial);
}

/* int main(void)
{
    int a;
    a = 5;
    int b = ft_iterative_factorial(a);
    printf("%d\n",b);
    return (0);
}*/
