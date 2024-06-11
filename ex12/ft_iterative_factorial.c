/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:06:54 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:07:58 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb) {
    int result = 1;

    if (nb < 0) {
        return 0;
    }

    for (int i = 1; i <= nb; i++) {
        result *= i;
    }

    return result;
}
/*
#include <stdio.h>

int main() {
    int number = 5;
    int factorial = ft_iterative_factorial(number);
    printf("Factorial de %d es %d\n", number, factorial);

	return 0;
}*/

