/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:48:10 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/31 15:56:34 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
    int a = 12;
    int b = 15;
    
    int *a_p;
    int *b_p;
    
    a_p = &a;
    b_p = &b;

    printf("Value a: %d\nValue b: %d\n", *a_p, *b_p);
    
    ft_swap(a_p, b_p);
    printf("Value a: %d\nValue b: %d\n", *a_p, *b_p);
    
    return (0);
}
*/
