/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:08:44 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/18 00:14:34 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb > 0) && (nb < 13))
	{
		return (nb = nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}
