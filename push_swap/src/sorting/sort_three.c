/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:04:50 by luiribei          #+#    #+#             */
/*   Updated: 2024/09/25 22:04:51 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*biggest;

	biggest = get_max(*a);
	
	if(biggest == *a)
		ra(a);
	else if((*a)->next == biggest)
		rra(a);
	if((*a)->nbr > (*a)->next->nbr)
		sa(*a);
}
