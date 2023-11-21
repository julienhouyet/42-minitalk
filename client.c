/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:02:48 by jhouyet           #+#    #+#             */
/*   Updated: 2023/11/21 10:05:40 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long int		result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
		if (result * neg < INT_MIN)
			return (0);
		if (result * neg > INT_MAX)
			return (-1);
	}
	return ((int)result * neg);
}

void	send_msg(int pid, char *str)
{
	ft_printf("PID : %d\nMessage : %s", pid, str);
	kill(pid, SIGUSR1);
}

int main(int argc, char *argv[])
{
	int		pid;
	char	*str;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		send_msg(pid, str);
	}
	else
	{
		ft_printf("Vous devez entrer un message au format : PID_NUMBER \"MESSAGE\"\n\n");
		ft_printf("Exemple : 457896 \"Bonjour server\"\n\n");
	}
}
