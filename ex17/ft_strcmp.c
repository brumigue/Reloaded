/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:33:08 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:34:53 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main() {
    char str1[] = "oooo";
    char str2[] = "od";
    int result = ft_strcmp(str1, str2);
    printf("Comparison: %d\n", result);
	
    return 0;
}*/
