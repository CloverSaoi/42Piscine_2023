/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:36:01 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/15 16:01:03 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*res;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	index = max - min;
	res = (int *) malloc(sizeof(int) * (index));
	if (res == NULL)
	{
		return (-1);
	}
	*range = res;
	index = 0;
	while (min < max)
	{
		res[index] = min;
		index ++;
		min ++;
	}
	return (index);
}
/*
int main(void)
{
    int    min;
    int    max;
    int    *array;
    int    **range;
    int    size;
    int    i;
    
    i = 0;
    min = 5;
    max = 12;
    array = (int *) malloc(sizeof(int) * (max - min));
    while (i < (max - min))
    {
        array[i] = min +i;
        i++;
    }
    range = &array;
    size = ft_ultimate_range(range, min, max);
	printf("%d \n", size);	
    return (0);
}*/
