/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:05:24 by luiribei          #+#    #+#             */
/*   Updated: 2024/09/26 11:32:14 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	stack_len(t_stack *stack)
{
	int	i;

	if(!stack)
		return (0);
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_stack	*get_last_node(t_stack *stack)
{
	if(!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*get_min(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (stack)
	{
		if (stack->nbr < tmp->nbr)
			tmp = stack;
		stack = stack->next;
	}
	return (tmp);
}

t_stack	*get_max(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (stack)
	{
		if (stack->nbr > tmp->nbr)
			tmp = stack;
		stack = stack->next;
	}
	return (tmp);
}

bool sorted(t_stack *stack)
{
	if (!stack)
		return (false);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}
