/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:20:37 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/21 20:29:34 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int number;
	char output_number;

	number = 0;
	while (number <= 9)
	{
		output_number = '0' + number;
		write(1, &output_number, 1);
		number++;
	}
}}
