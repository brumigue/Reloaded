/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 02:51:03 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:05:47 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int divi;
    int modu;

    ft_div_mod(a, b, &divi, &modu);
    printf("Div: %d, Mod: %d\n", divi, modu);

    return 0;
}*/
