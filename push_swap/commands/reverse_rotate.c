#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = get_last_node(*stack);
	get_last_node(*stack)->next = *stack;
	while ((*stack)->next != tmp)
		*stack = (*stack)->next;
	(*stack)->next = NULL;
	*stack = tmp;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write (1, "rrr\n", 4);
}
