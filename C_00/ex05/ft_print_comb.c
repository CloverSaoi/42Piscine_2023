/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:45:30 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/30 17:11:35 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	ind0;
	int	ind1;
	int	ind2;

	ind0 = '0';
	ind1 = '1';
	ind2 = '2';
	while (ind0 <= '8' && ind1 < '9' && ind2 <= '9')
	{
		if (ind0 != ind1 && ind0 != ind2 && ind1 != ind2)
		{
			write(1, &ind0, 1);
			write(1, &ind1, 1);
			write(1, &ind2, 1);
			if (!(ind0 == '7' && ind1 == '8' && ind2 == '9'))
			{
				write(1, ", ", 2);
			}
		}
		if (ind1 == '8')
			ind1 = ++ind0;
		if (ind2 == '9')
			ind2 = ++ind1;
		ind2++;
	}
}

/* int main(void){
    ft_print_comb();
    return 0;
}*/
