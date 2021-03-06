/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:42:16 by marvin            #+#    #+#             */
/*   Updated: 2020/02/03 22:56:08 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "common.h"

# define LAST_SORT 1

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: sort_three.c
** Description: Sorts the list in groups of three.
*/

void	sort_by_group_of_three(t_stack *stack_a, t_stack *stack_b);
void	sort_entire_stack_by_groups_of_three(t_stack *stack_a, t_stack *stack_b,
											int size);

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: merge_groups.c
** Description: Merges groups of three or more into a single sorted
** stack.
*/

void	start_merge(t_stack *stack_a, t_stack *stack_b);

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: lock_sequence.c
** Description: Sets and handles the lock attribute for stack_a.
** [This may not be used in the final version].
*/

void	find_best_lock_sequence(t_stack *stack, int size);
void	init_matrix(int ***matrix_addr, t_node ****stack_ptrs_addr, int size);
void	free_matrix(int **matrix, t_node ***stack_ptrs, int size);

#endif
