/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:03:36 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/31 16:03:33 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quotient;
	int	remainder;

	quotient = *a / *b;
	remainder = *a % *b;
	*a = quotient;
	*b = remainder;
}
/*
int main(void)
{
	int apple = 10;
	int banana = 5;
	int *a, *b;
	a = &apple;
	b = &banana;

	printf("Value of apple is %d and %d for banana.\n", *a, *b);

	ft_ultimate_div_mod(a, b);

	printf("Value of apple is %d and %d for banana.\n", *a, *b);
	
	return (0);
}*/
