/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:28:37 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/11 23:30:08 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int = length;
	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
