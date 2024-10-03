/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:05:35 by luiribei          #+#    #+#             */
/*   Updated: 2024/10/03 12:14:05 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	syntax_error(char *str_n)
{
	if (!(*str_n == '+'
			|| *str_n == '-'
			|| (*str_n >= '0' && *str_n <= '9')))
		return (1);
	if ((*str_n == '+'
			|| *str_n == '-')
		&& !(str_n[1] >= '0' && str_n[1] <= '9'))
		return (1);
	while (*++str_n)
	{
		if (!(*str_n >= '0' && *str_n <= '9'))
			return (1);
	}
	return (0);
}

int	dup_error(t_stack *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->nbr = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_stack **a)
{
	free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}
