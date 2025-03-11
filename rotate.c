/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:10:44 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/11 18:08:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate (t_stack **stack);

void	ra(void)
{
	if(rotate(get_stack_a()))
		printf("ra\n");
}	

void	rb(void)
{
	if (rotate(get_stack_b()))
		printf("rb\n");
}

void	rr(void)
	{
		if (rotate(get_stack_a()) && rotate(get_stack_b()))
			printf("rr\n");
	}
static int 	rotate (t_stack **stack)
{
	t_stack	*temp;
	t_stack	*ptr;
	
	if (!*stack||!(*stack)->next)
		return (0);
	temp = *stack;//sacamos el primer elemento de la lista
	(*stack) = (*stack)->next;
	ptr = *stack;// sacamos el último elemento de la lista
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = temp;// movemos el primer nodo al final
	temp->next = NULL;

	return(1);
}
