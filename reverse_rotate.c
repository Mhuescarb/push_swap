/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:18:31 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/11 18:08:37 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reverse_rotate(t_stack **stack);

void	rra (void)
{
	if (reverse_rotate(get_stack_a()))
		printf ("rra\n");
}

void	rrb(void)
{
	if (reverse_rotate(get_stack_b()))
		printf ("rrb\n");	
}
void 	rrr(void)
{
	if(reverse_rotate (get_stack_a()) && reverse_rotate (get_stack_b()))
		printf ("rrr\n");	
}

static int	reverse_rotate(t_stack **stack)
{
	t_stack	*old_top;
	t_stack *temp;
	t_stack *ptr;
	
if (!*stack || !(*stack)->next)
	return (0);
	ptr = *stack;
	old_top = ptr;
	while(ptr->next)
	{
		if(!ptr->next->next)
			temp = ptr;
		ptr = ptr->next;
	}
	temp->next = NULL;
	(*stack) = ptr;
	(*stack)->next = old_top;
	return(1);
	
}