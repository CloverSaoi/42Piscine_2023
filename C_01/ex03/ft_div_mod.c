/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:48:53 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/31 15:58:40 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(void)
{
	int apple = 50;
	int banana = 3;
	int quotient = 0;
	int *div;
	int remainder = 0;
	int *mod;
	div = &quotient;
	mod = &remainder;
	
	printf("The quotient is %d and remainder is %d\n", *div, *mod);

	ft_div_mod(apple, banana, div, mod);

	printf("The quotient is %d and remainder is %d\n", *div, *mod);

	return (0);
}*/
