/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 23:49:37 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/18 00:17:44 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i == 0)
	{
		if (s1[j] != s2[j])
			i = s1[j] - s2[j];
		else if ((s1[j] == '\0') && (s2[j] == '\0'))
			return (0);
		else
			i++;
	}
	return (i);
}

void	ft_aff(int argc, char **argv)
{
	int	x;

	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
}

int	main(nt argc, char **argv)
{
	int		i;
	int		j;
	char	*backup;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 1;
			while (j < argc)
			{
				j = 1;
