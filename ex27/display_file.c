/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 00:26:06 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/18 00:27:16 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[1];

	fd = 0;
	buf[0] = 0;
	if (argc < 2)
		ft_putstr("File name missing.");
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, buf, 1))
			ft_putchar(*buf);
		close(fd);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
