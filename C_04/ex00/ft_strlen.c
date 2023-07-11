/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:27:10 by ddutta            #+#    #+#             */
/*   Updated: 2023/02/09 16:00:32 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
/*
int main(void)
{
    char hello[] = "123456789";
    char *bello;
    
    bello = &hello[0];
    int gello = 0;
    printf("%d\n", gello);
    gello = ft_strlen(bello);
    printf("%d\n", gello);
    
    return (0);
}*/
