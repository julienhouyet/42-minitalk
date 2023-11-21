/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:02:52 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/21 09:09:27 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_reception(int sig)
{
	if (sig == SIGUSR1)
	{
		ft_printf("Received SIGUSR1\n");
	}
	else if (sig == SIGUSR2)
	{
		ft_printf("Received SIGUSR2\n");
	}
}

int	main(void)
{
	ft_printf("Tera Dev Server PID: %d\n", getpid());
	signal(SIGUSR1, sig_reception);
	signal(SIGUSR2, sig_reception);
	while (1)
	{
		pause();
	}
	return (0);
}
