#include "push_swap.h"

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
