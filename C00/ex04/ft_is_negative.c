/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:31:02 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/21 20:37:54 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char is_negative;

	if (n < 0)
		is_negative = 'N';
	else
		is_negative = 'P';
	write(1, &is_negative, 1);
}
