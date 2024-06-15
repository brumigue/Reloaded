/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 02:38:01 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 06:17:24 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{
	int	x = 5;
	int	y = 10;

	printf("Before: x = %d, y + %d\n", x, y);
	ft_swap(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);

	return 0;
}*/
