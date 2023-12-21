/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:47:08 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/21 09:41:51 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_printf_char(va_list *arg)
{
	char	c;
	
	c = va_arg(*arg, int);
	ft_putchar_fd(c, 1);
	return (1);
}
