#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

// Data Struct
typedef struct s_stack
{
	long			nbr;
	long			index;
	long			push_cost;
	bool			above_median;
	bool			cheapest;	
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

// Errors
int	syntax_error(char *str);
int	dup_error(t_stack *a, int n);
void	free_stack(t_stack **stack);
void	free_errors(t_stack **a);

// Stack initiation
void	initiate_stack_a(t_stack **a, char **av);

// Nodes initiation
void	initiate_a_nodes(t_stack *a, t_stack *b);
void	initiate_b_nodes(t_stack *a, t_stack *b);
void	current_index(t_stack *stack);
void	set_cheapest(t_stack *stack);
t_stack	*get_cheapest(t_stack *stack);
void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_name);

// Stack utils
int	stack_len(t_stack *stack);
t_stack	*get_last_node(t_stack *stack);
t_stack	*get_min(t_stack *stack);
t_stack	*get_max(t_stack *stack);
bool sorted(t_stack *stack);

// Commands
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

// Algorithms
void	sort_three(t_stack **a);
void	sort_stacks(t_stack **a, t_stack **b);

#endif
