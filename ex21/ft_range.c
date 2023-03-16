/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:01:05 by axelc             #+#    #+#             */
/*   Updated: 2023/03/09 13:19:24 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	*origin;

	if (start >= end)
		return ((void *)0);
	range = (int *)malloc(sizeof(*range) * (end - start));
	if (!range)
		return ((void *)0);
	origin = range;
	while (start < end)
		*range++ = start++;
	return (origin);
}
