/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:20:08 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/22 01:28:32 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void get_digits(int 

void ft_print_combn(int n)
{
	char number;
	int quotient;
	int remainder;

	quotient = ;
	while (quotient > 0)
	{
		remainder = quotient % 10;
		number = '0' + remainder;
		write(1, &number, 1);
		quotient /= 10;
	}
}

void 
