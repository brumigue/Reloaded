/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:14:41 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:27:57 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>

void ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
	{
        ft_putchar(str[i]);
        i++;
    }
}
/*
int main()
{
    char test_str[] = "Test!";
    ft_putstr(test_str);
    return 0;
}*/
