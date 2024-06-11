/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:28:37 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:30:31 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}
/*
#include <stdio.h>

int main() {
    char test_str[] = "TeeeeEst!";
    int length = ft_strlen(test_str);
    printf("Length: %d\n", length);

    return 0;
}*/
