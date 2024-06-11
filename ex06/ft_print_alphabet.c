/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 06:10:20 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 00:52:18 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}*/
void	ft_putchar(c);

void	ft_print_alphabet(void)
{
	char c;

	c = 96;
	while (c++ != 122)
		ft_putchar(c);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}*/
