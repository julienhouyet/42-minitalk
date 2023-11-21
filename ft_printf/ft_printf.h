/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:30:20 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/08 14:54:54 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

int		ft_count_nbr(int nb);
int		ft_count_nbr_unsigned(unsigned int nb);
int		ft_count_hexa(unsigned long nb);

int		ft_printf_char(va_list arg);
int		ft_printf_str(va_list arg);
int		ft_printf_pointer(va_list arg);
int		ft_printf_number(va_list arg);
int		ft_printf_unsigned_number(va_list arg);
int		ft_printf_hexa(char var, va_list arg);

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_puthexa_fd(unsigned long nb, char var, int fd);
size_t	ft_strlen(const char *s);

#endif