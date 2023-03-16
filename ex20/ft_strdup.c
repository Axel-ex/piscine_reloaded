/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:54:42 by axelc             #+#    #+#             */
/*   Updated: 2023/03/09 13:04:10 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	char	*origin;

	cpy = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!cpy)
		return (0);
	origin = cpy;
	while (*src)
		*cpy++ = *src++;
	*cpy = '\0';
	return (origin);
}
