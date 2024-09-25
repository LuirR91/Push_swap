/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:04:08 by luiribei          #+#    #+#             */
/*   Updated: 2024/09/25 22:04:10 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = (*stack)->next;
	get_last_node(stack)->next = *stack;
	(*stack)->next = NULL;
	*stack = tmp;
}

void	ra(t_stack **a)
{
	rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write (1, "rr\n", 3);
}
