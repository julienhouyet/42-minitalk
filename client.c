/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:02:48 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/21 09:27:01 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_msg(int pid, char *str)
{
	ft_printf("PID : %d\nMessage : %s", pid, str);
}

int main(int argc, char *argv[])
{
	int		pid;
	char	*str;

	if (argc == 3)
	{
		pid = (int)argv[1];
		str = argv[2];
		send_msg(pid, str);
	}
	else
	{
		ft_printf("Vous devez entrer un message au format : PID_NUMBER \"MESSAGE\"\n\n");
		ft_printf("Exemple : 457896 \"Bonjour server\"\n\n");
	}
}
