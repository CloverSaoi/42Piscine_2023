/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:39:06 by ddutta            #+#    #+#             */
/*   Updated: 2023/01/31 16:17:50 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	j = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i += 1;
		j -= 1;
	}
}

/*int main(void)
{
    int yellow[] = {1, 2, 3, 4, 5, 6};
    int *ptr;
    ptr = &yellow[0];
    ft_rev_int_tab(ptr, 6);

    return (0);
}*/
