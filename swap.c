/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:03:01 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/10 12:41:20 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_stack **stack);

void	sa(void)
{
	if (swap(get_stack_a()))
		printf("sa\n");
}

void	sb(void)
{
	if (swap(get_stack_b()))
		printf("sb\n");
}

void	ss(void)
{
	if (swap(get_stack_a()) && swap(get_stack_b()))
		printf("ss\n");
}

static int	swap(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return (0);
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	*stack = temp;
	return (1);
}
