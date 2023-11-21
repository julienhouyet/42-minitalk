/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:29:26 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 15:19:15 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

void	ft_puthexa_fd(unsigned long nb, char var, int fd)
{
	if (nb >= 16)
	{
		ft_puthexa_fd(nb / 16, var, fd);
		ft_puthexa_fd(nb % 16, var, fd);
	}
	else 
	{
		if (nb <= 9)
		{
			ft_putchar_fd(nb + '0', fd);
		}
		else
		{
			if (var == 'x')
				ft_putchar_fd(nb % 10 + 'a', fd);
			if (var == 'X')
				ft_putchar_fd(nb % 10 + 'A', fd);
		}
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
