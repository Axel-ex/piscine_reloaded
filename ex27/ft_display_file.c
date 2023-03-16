/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelc <achabrer@student.42porto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:42:11 by axelc             #+#    #+#             */
/*   Updated: 2023/03/10 14:19:35 by axelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_file(int fd)
{
	char	*buf;

	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc == 1)
		{
			write(1, "File name missing.\n", 19);
			return (0);
		}
		else if (argc > 2)
		{
			write(1, "Too many arguments.\n", 20);
			return (0);
		}
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	ft_display_file(fd);
	close(fd);
	if (close(fd) == -1)
		return (0);
	return (0);
}
