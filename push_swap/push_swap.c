#include "push_swap.h"

int	main (int ac, char **av)
{
	t_stack	*a;
	t_stack *b;

	a = NULL;
	b = NULL;

	if (ac == 1 || ac == 2 && av[1][0] == '\0')
		return (1);
	initiate_stack_a(&a, av + 1);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_three;
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
