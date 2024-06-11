/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:53:54 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 00:58:13 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}
*/
void	ft_putchar(c);

void	ft_print_numbers(void)
{
	int	i;

	i = -1;
	while (i++ < 9)
		ft_putchar(i + 48);
}
/*
int	main(void)
{
	ft_print_numbers();
	return(0);
}*/
