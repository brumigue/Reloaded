/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:11:56 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:13:34 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb) {
    if (nb < 0) {
        return 0;
    }

    int sqrt = 0;

    while (sqrt * sqrt < nb) {
        sqrt++;
    }

    if (sqrt * sqrt == nb) {
        return sqrt;
    } else {
        return 0;
    }
}
/*
#include <stdio.h>

int main() {
    int number = 25;
    int result = ft_sqrt(number);
    printf("La raíz cuadrada de %d es %d\n", number, result);

    number = 26;
    result = ft_sqrt(number);
    printf("La raíz cuadrada de %d es %d\n", number, result);

    return 0;
}
*/
