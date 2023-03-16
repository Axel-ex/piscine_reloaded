/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:01:54 by axelc             #+#    #+#             */
/*   Updated: 2023/03/07 11:04:52 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	nb;

	nb = '0';
	while (nb < '9' + 1)
	{
		ft_putchar(nb);
		nb++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}
