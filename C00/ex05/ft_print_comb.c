/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:38:48 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/22 02:29:40 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_digits(int i, int j, int k)
{
	char number;

	number = '0' + i;
	write(1, &number, 1);
	number = '0' + j;
	write(1, &number, 1);
	number = '0' + k;
	write(1, &number, 1);
	if (i < 7)
	{
		number = ',';
		write(1, &number, 1);
		number = ' ';
		write(1, &number, 1);
	}
}

void ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				print_digits(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
