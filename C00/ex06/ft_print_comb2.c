/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:21:00 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/21 22:50:48 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_digits(int first_number, int second_number)
{
	char digit;

	digit = '0' + (first_number / 10);
	write(1, &digit, 1);
	digit = '0' + (first_number % 10);
	write(1, &digit, 1);
	digit = ' ';
	write(1, &digit, 1);
	digit = '0' + (second_number / 10);
	write(1, &digit, 1);
	digit = '0' + (second_number % 10);
	write(1, &digit, 1);
	if (first_number < 98)
	{
		digit = ',';
		write(1, &digit, 1);
		digit = ' ';
		write(1, &digit, 1);
	}
}

void	ft_print_comb2(void)
{
	int first_number;
	int second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			get_digits(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}
