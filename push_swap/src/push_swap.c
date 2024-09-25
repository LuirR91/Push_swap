/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:05:32 by luiribei          #+#    #+#             */
/*   Updated: 2024/09/25 22:05:33 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main (int ac, char **av)
{
	t_stack	*a;
	t_stack *b;

	a = NULL;
	b = NULL;

	if (ac == 1 || ac == 2 && av[1][0] == '\0')
		return (1);
	initiate_stack_a(&a, av + 1);
	if (!sorted(&a))
	{
		if (stack_len(&a) == 2)
			sa(&a);
		else if (stack_len(&a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
