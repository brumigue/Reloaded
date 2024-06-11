/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:36:20 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 03:38:05 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t count);

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
	{
        int j = 0;
        while (argv[i][j] != '\0')
		{
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
    return 0;
}
