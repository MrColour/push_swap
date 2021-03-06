/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_interface.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:21:57 by kmira             #+#    #+#             */
/*   Updated: 2020/02/02 07:45:44 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

int	counter_interface(int operation, int value)
{
	static int	counter;

	if (operation == ADD)
		counter += value;
	return (counter);
}

int	add_move_counter(void)
{
	int	result;

	result = counter_interface(ADD, 1);
	return (result);
}

int	subtract_move_counter(void)
{
	int	result;

	result = counter_interface(ADD, -1);
	return (result);
}
