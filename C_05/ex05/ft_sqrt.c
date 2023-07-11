/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:42:44 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/12 15:48:36 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_sqrt(int nb)
{
	int	num;

	num = 0;
	if (nb == 1)
	{
		return (1);
	}
	while ((num <= nb / 2) && (num <= 46341))
	{
		if (nb == ((long)num * num))
		{
			return (num);
		}
		num++;
	}
	return (0);
}
/*
int main(void)
{
    int hello;
    hello = 1771977636;

    int gg = ft_sqrt(hello);
    printf("%d\n", gg);
	printf("sqrt of %d is %d\n", -3684, ft_sqrt(-3684));
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
    printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
    printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
    printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
    printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
    printf("sqrt of %d is %d\n", 136983616, ft_sqrt(136983616));
    printf("sqrt of %d is %d\n", 1278005472, ft_sqrt(1278005472));
    printf("sqrt of %d is %d\n", 242393761, ft_sqrt(242393761));
    printf("sqrt of %d is %d\n", 1134704649, ft_sqrt(1134704649));
    printf("sqrt of %d is %d\n", 1978470400, ft_sqrt(1978470400));
    printf("sqrt of %d is %d\n", 1658444118, ft_sqrt(1658444118));
    printf("sqrt of %d is %d\n", 418284304, ft_sqrt(418284304));
    printf("sqrt of %d is %d\n", 327547877, ft_sqrt(327547877));
    printf("sqrt of %d is %d\n", 38950081, ft_sqrt(38950081));
    printf("sqrt of %d is %d\n", 142482062, ft_sqrt(142482062));
    return (0);
}*/
