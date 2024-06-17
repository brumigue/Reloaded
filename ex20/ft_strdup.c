/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 06:22:17 by brumigue          #+#    #+#             */
/*   Updated: 2024/06/15 13:19:35 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*res;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	len = 0;
	while (src[len] != '\0')
	{
		res[len] = src[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}
