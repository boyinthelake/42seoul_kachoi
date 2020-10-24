/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 01:29:16 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/22 01:38:04 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char number;
	int divisor;
	
	divisor = 0;
	while (divisor < nb)
	{
		number = '0' + ((nb / divisor) % 10);
		write(1, &number, 1);
		divisor *= 10;
	}
}

int main()
{
	ft_putnbr(1243);
	return 0;
}
