/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:08:44 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:10:34 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb) {
    if (nb < 0) {
        return 0;
    } else if (nb == 0 || nb == 1) {
        return 1;
    } else {
        return nb * ft_recursive_factorial(nb - 1);
    }
}
/*
#include <stdio.h>

int main() {
    int number = 5;
    int factorial = ft_recursive_factorial(number);
    printf("Factorial de %d es %d\n", number, factorial);
	return 0;
}*/
