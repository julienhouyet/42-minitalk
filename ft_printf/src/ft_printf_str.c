/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:14 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/21 09:42:13 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_printf_str(va_list *arg)
{
	char	*str;
	int		i;

	str = va_arg(*arg, char *);
	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}
