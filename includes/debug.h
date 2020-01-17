/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:01:18 by xinu              #+#    #+#             */
/*   Updated: 2020/01/17 01:50:50 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include "common_struct.h"
# include "color.h"
# include <string.h>
# include <stdio.h>

void	print_stack(t_stack *stack);
void	print_stack_reverse(t_stack *stack);

#endif