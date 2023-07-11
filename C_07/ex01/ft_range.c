/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:29:29 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/12 16:31:35 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	num;
	int	index;
	int	size;
	int	*minmaxarr;

	if (min >= max)
	{
		minmaxarr = NULL;
		return (minmaxarr);
	}
	index = 0;
	num = min;
	size = max - min;
	minmaxarr = (int *) malloc(size * sizeof(int));
	while (index < size)
	{
		minmaxarr[index] = num;
		num++;
		index++;
	}
	return (minmaxarr);
}
/*
int main(void)
{
  int num1 = 16;
  int num2 = 12;
  int *p;
  p = ft_range(num1, num2);
  for(int i = 0; i < 4; i++)
  {
    printf("%d\n", p[i]);
  }
  return (0);
}*/
