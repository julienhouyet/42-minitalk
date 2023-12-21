/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:02:52 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/21 10:21:21 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/minitalk.h"

void	sig_reception(int sig)
{
	static int				count_bits;
	static unsigned char	current_byte;

	if (count_bits == 0) 
		count_bits = 0;
	if (sig == SIGUSR1)
	{
		current_byte = (current_byte << 1) | 0;
		count_bits++;
	}
	else if (sig == SIGUSR2)
	{
		current_byte = (current_byte << 1) | 1;
		count_bits++;
	}
	if (count_bits > 7)
	{
		ft_printf("%c", current_byte);
		count_bits = 0;
		current_byte = 0;
	}
}

int	main(void)
{
	ft_printf("Tera Dev Server PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR2, sig_reception);
		signal(SIGUSR1, sig_reception);
		pause();
	}
	return (0);
}
