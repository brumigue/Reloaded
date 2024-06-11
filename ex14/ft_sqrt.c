/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:11:56 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 23:18:50 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (0);
		}
		i++;
	}
	return (0);
}
